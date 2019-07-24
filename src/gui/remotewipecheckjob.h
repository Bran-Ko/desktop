#ifndef REMOTEWIPECHECKJOB_H
#define REMOTEWIPECHECKJOB_H

#include "ocsjob.h"
class QJsonDocument;

namespace OCC {

class RemoteWipeCheckJob : public OcsJob
{
    Q_OBJECT
public:
    explicit RemoteWipeCheckJob(AccountPtr account);

signals:
    void remoteWipeFinished(const QJsonDocument &reply, int statusCode);

private slots:
    void jobDone(const QJsonDocument &reply, int statusCode);

private:
    void checkForRemoteWipe(const QString token);
};
}
#endif // REMOTEWIPECHECKJOB_H