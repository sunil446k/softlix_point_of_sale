#include "home.h"
#include "QListView"
#include "QListWidgetItem"
#include "ui_home.h"
#include <QList>
#include<QMessageBox>
Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    QList<QString> mList;
    mList.push_back("1");
    mList.push_back("1");
    mList.push_back("1");
    mList.push_back("1");

    ui->home->addItems(mList);

}

Home::~Home()
{
    delete ui;
}

void Home::on_home_clicked(const QModelIndex &index)
{
    QMessageBox::information(ui->home, "", "In on Index");
}
