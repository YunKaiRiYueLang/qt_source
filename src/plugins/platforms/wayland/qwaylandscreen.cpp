/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the plugins of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qwaylandscreen.h"

#include "qwaylanddisplay.h"
#include "qwaylandcursor.h"

QWaylandScreen::QWaylandScreen(QWaylandDisplay *waylandDisplay, struct wl_output *output, QRect geometry)
    : QPlatformScreen()
    , mWaylandDisplay(waylandDisplay)
    , mOutput(output)
    , mGeometry(geometry)
    , mDepth(32)
    , mFormat(QImage::Format_ARGB32_Premultiplied)
    , mWaylandCursor(new QWaylandCursor(this))
{
    moveToThread(waylandDisplay->thread());
}

QWaylandScreen::~QWaylandScreen()
{
    delete mWaylandCursor;
}

QWaylandDisplay * QWaylandScreen::display() const
{
    return mWaylandDisplay;
}

QRect QWaylandScreen::geometry() const
{
    return mGeometry;
}

int QWaylandScreen::depth() const
{
    return mDepth;
}

QImage::Format QWaylandScreen::format() const
{
    return mFormat;
}

QWaylandScreen * QWaylandScreen::waylandScreenFromWidget(QWidget *widget)
{
    QPlatformScreen *platformScreen = QPlatformScreen::platformScreenForWidget(widget);
    return static_cast<QWaylandScreen *>(platformScreen);
}

wl_visual * QWaylandScreen::visual() const
{
    struct wl_visual *visual;

    switch (format()) {
    case QImage::Format_ARGB32:
        visual = mWaylandDisplay->argbVisual();
        break;
    case QImage::Format_ARGB32_Premultiplied:
        visual = mWaylandDisplay->argbPremultipliedVisual();
        break;
    default:
        qDebug("unsupported buffer format %d requested\n", format());
        visual = mWaylandDisplay->argbVisual();
        break;
    }
    return visual;
}
