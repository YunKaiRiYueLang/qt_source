/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtGui module of the Qt Toolkit.
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

#include <QtGui/private/qapplication_p.h>
#include <QtGui/QPlatformFontDatabase>

QT_BEGIN_NAMESPACE

void QFont::initialize()
{
    QApplicationPrivate::platformIntegration()->fontDatabase()->populateFontDatabase();
}

void QFont::cleanup()
{
    QFontCache::cleanup();
}


/*****************************************************************************
  QFont member functions
 *****************************************************************************/

Qt::HANDLE QFont::handle() const
{
    return 0;
}

QString QFont::rawName() const
{
    return QLatin1String("unknown");
}

void QFont::setRawName(const QString &)
{
}

QString QFont::defaultFamily() const
{
    QString familyName;
    switch(d->request.styleHint) {
        case QFont::Times:
            familyName = QString::fromLatin1("times");
        case QFont::Courier:
        case QFont::Monospace:
            familyName = QString::fromLatin1("monospace");
        case QFont::Decorative:
            familyName = QString::fromLatin1("old english");
        case QFont::Helvetica:
        case QFont::System:
        default:
            familyName = QString::fromLatin1("helvetica");
    }

    QStringList list = QApplicationPrivate::platformIntegration()->fontDatabase()->fallbacksForFamily(familyName,QFont::StyleNormal,QFont::StyleHint(d->request.styleHint),QUnicodeTables::Common);
    if (list.size()) {
        familyName = list.at(0);
    }
    return familyName;
}

QString QFont::lastResortFamily() const
{
    return QString::fromLatin1("helvetica");
}

QString QFont::lastResortFont() const
{
    qFatal("QFont::lastResortFont: Cannot find any reasonable font");
    // Shut compiler up
    return QString();
}


QT_END_NAMESPACE

