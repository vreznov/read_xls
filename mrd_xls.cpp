#include "mrd_xls.h"

mRd_xls::mRd_xls()
{

}

mRd_xls::readXls()
{
    QString qs=QFileDialog::getOpenFileName(NULL,"select file to read",\
                                            QObject::tr(""),\
                                            QObject::tr("Microsoft Office 2007 (*.xlsx)"));
    qDebug()<<qs<<endl;

    QList<QVariant> allRowData;
    allRowData.clear();

    if(!qs.isEmpty())
    {
        QAxObject* excel=new QAxObject("Excel.Application");
        excel->setProperty("Visable",true);
        excel->setProperty("DisplayAlerts", true);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示

        QAxObject *work_books = excel->querySubObject("WorkBooks");
        work_books->dynamicCall("Open (const QString&)", "qs");
        QVariant title_value = excel->property("Caption");  //获取标题
        qDebug()<<QString("excel title : ")<<title_value;
    }
}
