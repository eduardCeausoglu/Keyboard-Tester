#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_keyboardTester.h"
#include <QKeyEvent>

class keyboardTester : public QMainWindow
{
	Q_OBJECT

public:
	keyboardTester(QWidget *parent = Q_NULLPTR);

private:
	void keyPressEvent(QKeyEvent * event);
	Ui::keyboardTesterClass ui;
};
