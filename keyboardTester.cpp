#include "keyboardTester.h"
#include <stdlib.h>

keyboardTester::keyboardTester(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void keyboardTester::keyPressEvent(QKeyEvent *event)
{

	//**************************  ROW 2  *************************************


	if ( event->key() == Qt::Key_Escape)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.escButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F1)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f1Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F2)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f2Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F3)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f3Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F4)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f4Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F5)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f5Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F6)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f6Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F7)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f7Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F8)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f8Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F9)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f9Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F10)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f10Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F11)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f11Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F12)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.f12Button->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Insert)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.insertButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Delete)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.deleteButton->setStyleSheet(qss);
		}
	}

	//**************************  ROW 2  *************************************


	if (event->key() == Qt::Key_AsciiTilde)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.tildeButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_1)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.oneButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_2)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.twoButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_3)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.threeButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_4)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.fourButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_5)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.fiveButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_6)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.sixButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_7)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.sevenButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_8)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.eightButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_9)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.nineButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_0)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.zeroButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Minus)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.minusButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Equal)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.equalButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Backspace)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.backspaceButton->setStyleSheet(qss);
		}
	}

	//**************************  ROW 3  *************************************


	if (event->key() == Qt::Key_Tab)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.tabButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Q)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.qButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_W)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.wButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_E)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.eButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_R)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.rButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_T)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.tButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Y)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.yButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_U)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.uButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_I)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.iButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_O)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.oButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_P)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.pButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_BracketLeft)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.squareBracketOpenButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_BracketRight)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.squareBracketCloseButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Backslash)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.backslashButton->setStyleSheet(qss);
		}
	}

	//**************************  ROW 4  *************************************


	if (event->key() == Qt::Key_CapsLock)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.capsLockButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_A)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.aButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_S)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.sButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_D)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.dButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_F)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.fButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_G)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.gButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_H)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.hButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_J)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.jButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_K)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.kButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_L)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.lButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Semicolon)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.semicolonButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Apostrophe)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.apostropheButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Return)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.enterButton->setStyleSheet(qss);
		}
	}

	//**************************  ROW 5  *************************************


	if (event->key() == Qt::Key_Shift)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.shiftLeftButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Z)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.zButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_X)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.xButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_C)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.cButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_V)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.vButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_B)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.bButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_N)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.nButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_M)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.mButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Comma)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.commaButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Period)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.fullStopButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Slash)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.forwardSlashButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Shift)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.shiftRightButton->setStyleSheet(qss);
		}
	}

	//**************************  ROW 6  *************************************


	if (event->key() == Qt::Key_Control)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.ctrlLeftButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Find)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.fnButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_RotateWindows)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.winButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Alt)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.altLeftButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Space)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.spaceButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Alt)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.altRightButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Option)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.optionsButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Control)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.ctrlRightButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Up)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.upArrowButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Down)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.downArrowButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Left)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.leftArrowButton->setStyleSheet(qss);
		}
	}
	if (event->key() == Qt::Key_Right)
	{
		QColor col = QColor::fromRgb(144, 238, 144);
		if (col.isValid()) {
			QString qss = QString("background-color: %1").arg(col.name());
			this->ui.rightArrowButton->setStyleSheet(qss);
		}
	}
}