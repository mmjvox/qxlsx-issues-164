#include <QCoreApplication>

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QXlsx::Document xlsxR1(QString(SOURCE_PATH)+"/Datalistsss.xlsx");

    qDebug()<<xlsxR1.sheetNames();

    qDebug()<<xlsxR1.selectSheet("DATA");

    qDebug()<<xlsxR1.dimension().rowCount() << xlsxR1.dimension().lastRow();

    qDebug()<<xlsxR1.cellAt(5,3)->value();

    return 0;//a.exec();
}
