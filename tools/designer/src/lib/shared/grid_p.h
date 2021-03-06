/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Designer of the Qt Toolkit.
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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of Qt Designer.  This header
// file may change from version to version without notice, or even be removed.
//
// We mean it.
//

#ifndef QDESIGNER_GRID_H
#define QDESIGNER_GRID_H

#include "shared_global_p.h"

#include <QtCore/QVariantMap>

QT_BEGIN_NAMESPACE

class QWidget;
class QPaintEvent;
class QPainter;

namespace qdesigner_internal {

// Designer grid which is able to serialize to QVariantMap
class QDESIGNER_SHARED_EXPORT Grid
{
public:
    Grid();

    bool fromVariantMap(const QVariantMap& vm);

    void addToVariantMap(QVariantMap& vm, bool forceKeys = false) const;
    QVariantMap toVariantMap(bool forceKeys = false) const;

    inline bool visible() const   { return m_visible; }
    void setVisible(bool visible) { m_visible = visible; }

    inline bool snapX() const     { return m_snapX; }
    void setSnapX(bool snap)      { m_snapX = snap; }

    inline bool snapY() const     { return m_snapY; }
    void setSnapY(bool snap)      { m_snapY = snap; }

    inline int deltaX() const     { return m_deltaX; }
    void setDeltaX(int dx)        { m_deltaX = dx; }

    inline int deltaY() const     { return m_deltaY; }
    void setDeltaY(int dy)        { m_deltaY = dy; }

    void paint(QWidget *widget, QPaintEvent *e) const;
    void paint(QPainter &p, const QWidget *widget, QPaintEvent *e) const;

    QPoint snapPoint(const QPoint &p) const;

    int widgetHandleAdjustX(int x) const;
    int widgetHandleAdjustY(int y) const;

    inline bool operator==(const Grid &rhs) const { return equals(rhs); }
    inline bool operator!=(const Grid &rhs) const { return !equals(rhs); }

private:
    bool equals(const Grid &rhs) const;
    int snapValue(int value, int grid) const;
    bool m_visible;
    bool m_snapX;
    bool m_snapY;
    int m_deltaX;
    int m_deltaY;
};
} // namespace qdesigner_internal

QT_END_NAMESPACE

#endif // QDESIGNER_GRID_H
