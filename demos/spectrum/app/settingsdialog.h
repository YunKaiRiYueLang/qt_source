/****************************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include "spectrum.h"
#include <QDialog>
#include <QtMultimedia/QAudioDeviceInfo>

QT_FORWARD_DECLARE_CLASS(QComboBox)
QT_FORWARD_DECLARE_CLASS(QCheckBox)
QT_FORWARD_DECLARE_CLASS(QSlider)
QT_FORWARD_DECLARE_CLASS(QSpinBox)
QT_FORWARD_DECLARE_CLASS(QGridLayout)

/**
 * Dialog used to control settings such as the audio input / output device
 * and the windowing function.
 */
class SettingsDialog : public QDialog {
    Q_OBJECT
public:
    SettingsDialog(const QList<QAudioDeviceInfo> &availableInputDevices,
                   const QList<QAudioDeviceInfo> &availableOutputDevices,
                   QWidget *parent = 0);
    ~SettingsDialog();

    WindowFunction windowFunction() const           { return m_windowFunction; }
    const QAudioDeviceInfo& inputDevice() const     { return m_inputDevice; }
    const QAudioDeviceInfo& outputDevice() const    { return m_outputDevice; }

private slots:
    void windowFunctionChanged(int index);
    void inputDeviceChanged(int index);
    void outputDeviceChanged(int index);

private:
    WindowFunction   m_windowFunction;
    QAudioDeviceInfo m_inputDevice;
    QAudioDeviceInfo m_outputDevice;

    QComboBox*      m_inputDeviceComboBox;
    QComboBox*      m_outputDeviceComboBox;

    QComboBox*      m_windowFunctionComboBox;

};

#endif // SETTINGSDIALOG_H
