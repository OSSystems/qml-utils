/*
 * Copyright (C) 2018
 * O.S. Systems Sofware LTDA: contato@ossystems.com.br
 *
 * SPDX-License-Identifier:     MIT
 */

#ifndef UTILSPLUGIN_HPP
#define UTILSPLUGIN_HPP

#include <QQmlExtensionPlugin>
#include <QQmlEngine>

class UtilsPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri);
};

#endif // UTILSPLUGIN_HPP
