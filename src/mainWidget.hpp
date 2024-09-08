#ifndef SRC_MAINWIDGET_HPP
#define SRC_MAINWIDGET_HPP

#include<iostream>
#include<QtWidgets/QWidget>
#include<QtWidgets/QPushButton>
#include<QtWidgets/QFileDialog>
#include<QtCore/QDir>
#include<QtCore/QString>
#include<QtWidgets/QVBoxLayout>
#include"Picture.hpp"

class MainWidget:public QWidget
{
	Q_OBJECT
public:
	MainWidget(QWidget* parent=nullptr);
	~MainWidget();
private:
    QVBoxLayout mainLayout;
    QPushButton btnSelectPic;
    Picture pic;
private slots:
	void btnSelectPic_clicked();
};

#endif
