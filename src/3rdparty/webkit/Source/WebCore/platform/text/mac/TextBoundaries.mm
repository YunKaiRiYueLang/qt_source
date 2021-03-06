/*
 * Copyright (C) 2004, 2006, 2011 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "config.h"
#import "TextBoundaries.h"

#import <wtf/RetainPtr.h>

namespace WebCore {

void findWordBoundary(const UChar* chars, int len, int position, int* start, int* end)
{
    NSString* string = [[NSString alloc] initWithCharactersNoCopy:const_cast<unichar*>(chars)
        length:len freeWhenDone:NO];
    NSAttributedString* attr = [[NSAttributedString alloc] initWithString:string];
    NSRange range = [attr doubleClickAtIndex:(position >= len) ? len - 1 : position];
    [attr release];
    [string release];
    *start = range.location;
    *end = range.location + range.length;
}

static CFStringTokenizerRef wordStringTokenizer(CFStringRef string)
{
    static CFStringTokenizerRef stringTokenizer;
    if (stringTokenizer)
        CFStringTokenizerSetString(stringTokenizer, string, CFRangeMake(0, CFStringGetLength(string)));
    else
        stringTokenizer = CFStringTokenizerCreate(kCFAllocatorDefault, string, CFRangeMake(0, CFStringGetLength(string)), kCFStringTokenizerUnitWord, 0);

    return stringTokenizer;
}

int findNextWordFromIndex(const UChar* chars, int len, int position, bool forward)
{
    RetainPtr<CFStringRef> string(AdoptCF, CFStringCreateWithCharactersNoCopy(kCFAllocatorDefault, chars, len, kCFAllocatorNull));
    CFStringTokenizerRef stringTokenizer = wordStringTokenizer(string.get());

    CFIndex lastTokenStart = 0;
    while (true) {
        CFStringTokenizerTokenType tokenType = CFStringTokenizerAdvanceToNextToken(stringTokenizer);
        if (tokenType == kCFStringTokenizerTokenNone)
            return forward ? len : lastTokenStart;

        CFRange tokenRange = CFStringTokenizerGetCurrentTokenRange(stringTokenizer);

        if (!forward && tokenRange.location >= position)
            return lastTokenStart;
        if (forward && tokenRange.location + tokenRange.length > position)
            return tokenRange.location + tokenRange.length;

        lastTokenStart = tokenRange.location;
    }
}

}
