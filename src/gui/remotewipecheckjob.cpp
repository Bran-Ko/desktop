/*
 * Copyright (C) by Camila Ayres <hello@camila.codes>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "remotewipecheckjob.h"

namespace OCC {

RemoteWipeCheckJob::RemoteWipeCheckJob(AccountPtr account)
    : OcsJob(account)
{
//    setPath("index.php/core/wipe/check");
//    connect(this, &RemoteWipeCheckJob::jobFinished, this, &RemoteWipeCheckJob::jobDone);
}

void RemoteWipeCheckJob::checkForRemoteWipe(const QString token)
{
//    setVerb("POST");
//    addParam("token", token);
//    start();
}

void RemoteWipeCheckJob::jobDone(const QJsonDocument &reply, int statusCode)
{
//    emit jobFinished(reply, statusCode);
}
}
