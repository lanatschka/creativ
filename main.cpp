#include <QCoreApplication>
#include "compressor.h"
#include "zip_compressor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Compressor *p = new ZIP_Compressor();
    p->compress();
    return a.exec();
}
