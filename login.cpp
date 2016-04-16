#include<QApplication>
#include"login.h"
#include"home.h"
#include"ui_login.h"
#include<QDebug>
#include<QDialog>
#include<QMessageBox>

Login::Login(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::Login) {
    ui->setupUi(this);

}


void Login::on_Ok_clicked(){

    ui->Ok->setFocus();
    if(ui->userName->text().count() < 1){

        QMessageBox::information(this, "User Login", "Username Field Empty");
        ui->userName->setFocus();
        return;
    }

    if(ui->passWord->text().count() < 1){

        QMessageBox::information(this, "UserLogin","Password Field Empty");
        ui->passWord->setFocus();
        return;
    }

    if(ui->userName->text( ) == ui->passWord->text()){

       // QMessageBox::information(this, "User Login","Login Sucess");

        ui->userName->clear();
        ui->passWord->clear();
       // this->close();
        mHome = new Home;
        mHome->show();

    }
    else {

        QMessageBox::information(this, "User Login","Login Fail");
        ui->userName->clear();
        ui->passWord->clear();
    }
}

void Login::on_Cancel_clicked(){

    qDebug()<<"On Cancel Clicked"<<endl;
    QApplication::quit();
}

Login::~Login() {
    qDebug()<<"In Destructor"<<endl;
    delete ui;
}
