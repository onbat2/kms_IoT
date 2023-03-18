#ifndef APPMODEL_H
#define APPMODEL_H

#include <QObject>
#include <QString>
#include <QMutex>
#include "AppEnums.h"
#include "QSensorMQTT.h"

#define MODEL AppModel::getInstance()

class AppModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int currentScreenID READ currentScreenID WRITE setCurrentScreenID NOTIFY currentScreenIDChanged)
    Q_PROPERTY(QString sensorMess READ sensorMess WRITE setSensorMess NOTIFY sensorMessChanged)
    Q_PROPERTY(QString currentHostName READ currentHostName WRITE setCurrentHostName NOTIFY currentHostNameChanged)
    Q_PROPERTY(QString currentPort READ currentPort WRITE setCurrentPort NOTIFY currentPortChanged)

    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY currentUserNameChanged)
    Q_PROPERTY(QString pass READ currentPass WRITE setPass NOTIFY currentPassChanged)

    Q_PROPERTY(bool loginStatus READ loginStatus WRITE setLoginStatus NOTIFY loginStatusChanged)

public:
    static AppModel *getInstance();

    int currentScreenID() const;
    QString sensorMess() const;
    QString currentHostName() const;
    QString currentPort() const;

    QString currentPass() const;
    QString userName() const;

    bool loginStatus() const;

    void startHomeScreen();

public slots:
    void setCurrentScreenID(int currentScreenID);
    void slotReceiveEvent(int event);
    void setSensorMess(QString msg);

    void setCurrentHostName(QString hostName);
    void setCurrentPort(QString port);

    void setUserName(QString user);
    void setPass(QString pass);

    void setLoginStatus(bool status);

    void LoginRequestCheck(QString user, QString pass);

signals:
    void currentScreenIDChanged(int currentScreenID);
    void sensorMessChanged(QString msg);

    void currentHostNameChanged(QString hostName);
    void currentPortChanged(QString port);

    void currentUserNameChanged(QString user);
    void currentPassChanged(QString pass);

    void loginStatusChanged(bool status);

    void LoginStatus(bool status);

private:
    AppModel(QObject* parent = nullptr);
    AppModel(const AppModel&) = delete;
    void operator =(const AppModel&) = delete;

    static AppModel* m_instance;
    static QMutex m_lock;

    int m_currentScreenID;
    QString m_mess;

    QString m_userName;
    QString m_pass;

    bool m_loginStatus = false;

    QSensorMQTT *m_sensor;

};

#endif // APPMODEL_H
