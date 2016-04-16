#include<QApplication>
#include "login.h"

int main(int argc, char* argv[]) {

	QApplication app(argc, argv);
	Login oLogin;
	oLogin.show();
	return app.exec();
}
