#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qgridlayout.h>
#include <QHBoxLayout>

#include "explorerfile.h"
#include "explorerdisplay.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void AddCustomWidget(QWidget *widget, int x, int y);

private:
    Ui::MainWindow *ui;
    QHBoxLayout* hBox;
    QGridLayout* gridLayout;
    ExplorerFile* explorerFile;
    ExplorerDisplay* explorerDisplay;
};

#endif // MAINWINDOW_H
