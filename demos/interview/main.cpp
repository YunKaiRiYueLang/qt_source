/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the demonstration applications of the Qt Toolkit.
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

#include "model.h"

#include <QApplication>
#include <QTableView>
#include <QTreeView>
#include <QListView>
#include <QSplitter>
#include <QHeaderView>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(interview);

    QApplication app(argc, argv);
    QSplitter page;

    QAbstractItemModel *data = new Model(1000, 10, &page);
    QItemSelectionModel *selections = new QItemSelectionModel(data);

    QTableView *table = new QTableView;
    table->setModel(data);
    table->setSelectionModel(selections);
    table->horizontalHeader()->setMovable(true);
    table->verticalHeader()->setMovable(true);
    // Set StaticContents to enable minimal repaints on resizes.
    table->viewport()->setAttribute(Qt::WA_StaticContents);
    page.addWidget(table);

    QTreeView *tree = new QTreeView;
    tree->setModel(data);
    tree->setSelectionModel(selections);
    tree->setUniformRowHeights(true);
    tree->header()->setStretchLastSection(false);
    tree->viewport()->setAttribute(Qt::WA_StaticContents);
    // Disable the focus rect to get minimal repaints when scrolling on Mac.
    tree->setAttribute(Qt::WA_MacShowFocusRect, false);
    page.addWidget(tree);

    QListView *list = new QListView;
    list->setModel(data);
    list->setSelectionModel(selections);
    list->setViewMode(QListView::IconMode);
    list->setSelectionMode(QAbstractItemView::ExtendedSelection);
    list->setAlternatingRowColors(false);
    list->viewport()->setAttribute(Qt::WA_StaticContents);
    list->setAttribute(Qt::WA_MacShowFocusRect, false);
    page.addWidget(list);

    page.setWindowIcon(QPixmap(":/images/interview.png"));
    page.setWindowTitle("Interview");
    page.show();

    return app.exec();
}
