/* Copyright (c) 2009 Google Inc. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file. */

#include <stdio.h>

int main(int argc, char *argv[])
{
#ifdef FOO
  printf("FOO is defined\n");
#endif
  printf("VALUE is %d\n", VALUE);
  return 0;
}
