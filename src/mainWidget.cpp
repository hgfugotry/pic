#include"mainWidget.hpp"

MainWidget::MainWidget(QWidget* parent):QWidget(parent)
{
	btnSelectPic.setText("选择图片");

	this->setPalette(QPalette(QColor(255,213,255)));
	this->setLayout(&mainLayout);
	mainLayout.addWidget(&btnSelectPic);
	mainLayout.addWidget(&pic);
	
	connect(&btnSelectPic,SIGNAL(clicked()),this,SLOT(btnSelectPic_clicked()));
}
MainWidget::~MainWidget(){}

void MainWidget::btnSelectPic_clicked()
{
	QString imgFile=QFileDialog::getOpenFileName(this,"打开图片",QDir::currentPath(),"*.bmp *.png *.jpg *.jpeg *.gif");
	if(!imgFile.isEmpty())
		pic.setPic(imgFile);
}
