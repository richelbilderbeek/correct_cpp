#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
  class Dialog;
}

///Only dialog of the 'Hello Qt' program
class Dialog : public QDialog
{
  Q_OBJECT

public:

  ///Constructor
  explicit Dialog(QWidget *parent = 0);

  ///Forbid copying a Dialog
  Dialog(const Dialog&) = delete;

  ///Forbid assinging Dialogs
  Dialog& operator=(const Dialog&) = delete;

  ///Destructor
  ~Dialog();

private:
  ///User interface
  Ui::Dialog *ui;
};

#endif // DIALOG_H
