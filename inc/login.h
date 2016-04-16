#ifndef __LOGIN__H
#define __LOGIN__H
#include<QMainWindow>
#include"home.h"

namespace Ui {
    class Login;
}


class Login: public QMainWindow {

	Q_OBJECT

	public:
		explicit Login(QWidget *parent = 0);
        Home *mHome;
        ~Login();
	private:
        Ui::Login *ui;
	public slots:
	void on_Ok_clicked();
	void on_Cancel_clicked();
		//signals:

};
#endif
