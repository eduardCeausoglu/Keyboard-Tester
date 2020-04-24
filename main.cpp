#include "keyboardTester.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	keyboardTester w;
	w.show();
	return a.exec();
}
