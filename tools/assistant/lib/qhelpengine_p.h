/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Assistant of the Qt Toolkit.
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

#ifndef QHELPENGINE_P_H
#define QHELPENGINE_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API. It exists for the convenience
// of the help generator tools. This header file may change from version
// to version without notice, or even be removed.
//
// We mean it.
//

#include <QtCore/QHash>
#include <QtCore/QMap>
#include <QtCore/QStringList>
#include <QtCore/QObject>

QT_BEGIN_NAMESPACE

class QSqlQuery;

class QHelpEngineCore;
class QHelpDBReader;
class QHelpContentModel;
class QHelpContentWidget;
class QHelpIndexModel;
class QHelpIndexWidget;
class QHelpSearchEngine;
class QHelpCollectionHandler;

class QHelpEngineCorePrivate : public QObject
{
    Q_OBJECT

public:
    QHelpEngineCorePrivate();
    virtual ~QHelpEngineCorePrivate();

    virtual void init(const QString &collectionFile,
        QHelpEngineCore *helpEngineCore);

    void clearMaps();
    bool setup();

    QMap<QString, QHelpDBReader*> readerMap;
    QMap<QString, QHelpDBReader*> fileNameReaderMap;
    QMultiMap<QString, QHelpDBReader*> virtualFolderMap;
    QStringList orderedFileNameList;
    QHash<QString, QString> nameSpaceVirtualFolderMap;

    QHelpCollectionHandler *collectionHandler;
    QString currentFilter;
    QString error;
    bool needsSetup;
    bool autoSaveFilter;

protected:
    QHelpEngineCore *q;

private slots:
    void errorReceived(const QString &msg);
};


class QHelpEnginePrivate : public QHelpEngineCorePrivate
{
    Q_OBJECT

public:
    QHelpEnginePrivate();
    ~QHelpEnginePrivate();

    void init(const QString &collectionFile,
        QHelpEngineCore *helpEngineCore);

    QHelpContentModel *contentModel;
    QHelpContentWidget *contentWidget;

    QHelpIndexModel *indexModel;
    QHelpIndexWidget *indexWidget;

    QHelpSearchEngine *searchEngine;

    void stopDataCollection();

    friend class QHelpContentProvider;
    friend class QHelpContentModel;
    friend class QHelpIndexProvider;
    friend class QHelpIndexModel;

public slots:
    void setContentsWidgetBusy();
    void unsetContentsWidgetBusy();
    void setIndexWidgetBusy();
    void unsetIndexWidgetBusy();

private slots:
    void applyCurrentFilter();
};

QT_END_NAMESPACE

#endif
