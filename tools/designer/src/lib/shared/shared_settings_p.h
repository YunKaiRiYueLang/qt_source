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

#ifndef SHARED_SETTINGS_H
#define SHARED_SETTINGS_H

#include "shared_global_p.h"
#include "deviceprofile_p.h"

#include <QtCore/qglobal.h>
#include <QtCore/QList>

QT_BEGIN_NAMESPACE

class QDesignerFormEditorInterface;
class QDesignerSettingsInterface;

class QStringList;
class QSize;

namespace qdesigner_internal {
class Grid;
class PreviewConfiguration;
}

/*!
  Auxiliary methods to store/retrieve settings
  */
namespace qdesigner_internal {

class QDESIGNER_SHARED_EXPORT QDesignerSharedSettings {
public:
    typedef QList<DeviceProfile> DeviceProfileList;

    explicit QDesignerSharedSettings(QDesignerFormEditorInterface *core);

    Grid defaultGrid() const;
    void setDefaultGrid(const Grid &grid);

    QStringList formTemplatePaths() const;
    void setFormTemplatePaths(const QStringList &paths);

    void setAdditionalFormTemplatePaths(const QStringList &additionalPaths);
    QStringList additionalFormTemplatePaths() const;

    QString formTemplate() const;
    void setFormTemplate(const QString &t);

    QSize newFormSize() const;
    void setNewFormSize(const QSize &s);

    // Check with isCustomPreviewConfigurationEnabled if custom or default
    // configuration should be used.
    PreviewConfiguration customPreviewConfiguration() const;
    void setCustomPreviewConfiguration(const PreviewConfiguration &configuration);

    bool isCustomPreviewConfigurationEnabled() const;
    void setCustomPreviewConfigurationEnabled(bool enabled);

    QStringList userDeviceSkins() const;
    void setUserDeviceSkins(const QStringList &userDeviceSkins);

    bool zoomEnabled() const;
    void setZoomEnabled(bool v);

    // Zoom in percent
    int zoom() const;
    void setZoom(int z);

    // Embedded Design
    DeviceProfile currentDeviceProfile() const;
    void setCurrentDeviceProfileIndex(int i);
    int currentDeviceProfileIndex() const;

    DeviceProfile deviceProfileAt(int idx) const;
    DeviceProfileList deviceProfiles() const;
    void setDeviceProfiles(const DeviceProfileList &dp);

    static const QStringList &defaultFormTemplatePaths();

protected:
    QDesignerSettingsInterface *settings() const { return m_settings; }

private:
    QStringList deviceProfileXml() const;
    QDesignerSettingsInterface *m_settings;
};

} // namespace qdesigner_internal

QT_END_NAMESPACE

#endif // SHARED_SETTINGS_H
