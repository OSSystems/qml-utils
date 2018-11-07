/*
 * Copyright (C) 2018
 * O.S. Systems Sofware LTDA: contato@ossystems.com.br
 *
 * SPDX-License-Identifier:     MIT
 */

#include "process.hpp"

Process::Process(QObject *parent):
    QObject(parent),
    m_process(new QProcess(this))
{
    qRegisterMetaType<QProcess::ExitStatus>("Process::ExitStatus");

    connect(m_process, SIGNAL(finished(int, QProcess::ExitStatus)), SIGNAL(finished(int, QProcess::ExitStatus)));
}

void Process::start(const QString &program, const QStringList &arguments)
{
    m_process->start(program, arguments);
}
