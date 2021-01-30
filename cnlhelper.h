#ifndef CNLHELPER_H
#define CNLHELPER_H

#include <QObject>

class CNLHelper : public QObject
{
    Q_OBJECT
public:
    explicit CNLHelper(QObject *parent = nullptr);
    static CNLHelper *Instance();

private:
    static CNLHelper *curHelper;
    QStringList listPY;
    QStringList listJP;

public:
    QString CNToPY(const QString &cnstr);//汉语转拼音
    QString CNToEL(const QString &cnstr);//汉语转所有字首字母
    QString CNToFL(const QString &cnstr);//汉语转第一个汉字首字母

};

#endif // CNLHELPER_H
