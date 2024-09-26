// Copyright (C) 2017 The Qt Company Ltd.
// Copyright (C) 2024 Automotive Grade Linux
// SPDX-License-Identifier: GPL-3.0+

#include <QtCore/QUrl>
#include <QtCore/QDebug>

#include <QtGui/QGuiApplication>

#include <QtQml/QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine appEngine(QUrl("qrc:///main.qml"));

    return app.exec();
}
