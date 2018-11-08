/*
 * Copyright (C) 2018
 * O.S. Systems Sofware LTDA: contato@ossystems.com.br
 *
 * SPDX-License-Identifier:     MIT
 */

#ifndef PROCESS_HPP
#define PROCESS_HPP

#include <QObject>
#include <QProcess>

class Process : public QObject
{
    Q_OBJECT

public:
    explicit Process(QObject *parent = 0);

public slots:
    void start(const QString &program, const QStringList &arguments = QStringList());

    QString readAllStandardOutput();
    bool waitForFinished(int msecs = 30000);

signals:
    void finished(int exitCode, QProcess::ExitStatus exitStatus);

private:
    QProcess *m_process;
};

#endif // PROCESS_HPP
