#include "dialog.h"
#include <QApplication>

///A 'Hello Qt' program
int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Dialog w;
  w.show();

  return a.exec();
}
