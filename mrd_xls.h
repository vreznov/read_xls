#ifndef MRD_XLS_H
#define MRD_XLS_H

#include <QObject>
#include <QString>
#include <QAxObject>
#include <QFileDialog>
#include <QDebug>

class mRd_xls //:public QObject
{
public:
    mRd_xls();

public:
    readXls();
};

#endif // MRD_XLS_H
