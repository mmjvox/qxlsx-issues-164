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

    QXlsx::Document xlsxR("./Datalistsss.xlsx");

    qDebug()<<xlsxR.sheetNames();

    qDebug()<<xlsxR.selectSheet("DATA");

    return a.exec();
}
