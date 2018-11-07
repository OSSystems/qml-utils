/*
 * Copyright (C) 2018
 * O.S. Systems Sofware LTDA: contato@ossystems.com.br
 *
 * SPDX-License-Identifier:     MIT
 */

#include "utilsplugin.hpp"
#include "process.hpp"

void UtilsPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("Utils"));

    qmlRegisterType<Process>(uri, 1, 0, "Process");
}
