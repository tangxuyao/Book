#ifndef RECENTFORM_H
#define RECENTFORM_H

#include <QWidget>

namespace Ui {
class RecentForm;
}

class RecentForm : public QWidget
{
    Q_OBJECT

public:
    explicit RecentForm(QWidget *parent = nullptr);
    ~RecentForm();

private:
    Ui::RecentForm *ui;
};

#endif // RECENTFORM_H
