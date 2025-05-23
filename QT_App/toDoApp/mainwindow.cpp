#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent),
    ui(new Ui::MainWindow){
        ui->setupUi(this);
    }
    MainWindow::~MainWindow(){
        delete ui;
    }
void MainWindow::on_addButton_clicked(){
    QString task = ui->taskInput->text();
    if(!task.isEmpty()){
        ui->taskList->addItem(task);
        ui->taskInput->clear();
    }
}
void MainWindow::on_removeButton_clicked(){
    QListWidgetItem *item = ui->taskList->currentItem();
    if(item){
        delete item;
    }
}
