#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
  class Dialog;
}

/// Main dialog
class Dialog : public QDialog
{
  Q_OBJECT

public:

  /// Construction. Optionally assign a parent to delete this dialog
  explicit Dialog(QWidget *parent = 0);

  /// Explicitly forbid copying the dialog
  Dialog(const Dialog&) = delete;

  /// Explicitly forbid copying the dialog
  Dialog& operator=(const Dialog&) = delete;

  ~Dialog();

private:
  Ui::Dialog *ui;
};

#endif // DIALOG_H
