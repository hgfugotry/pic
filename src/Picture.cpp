#include"Picture.hpp"

Picture::Picture(QWidget* parent):QWidget(parent)
{
	connect(this,SIGNAL(picChanged(QPixmap)),this,SLOT(paintPic()));
}
Picture::~Picture(){}

void Picture::paintPic()
{
	this->update();
}

void Picture::paintEvent(QPaintEvent* event)
{
	QPainter 	painter(this);
	QRect		rect(0,0,this->width(),this->height());
	painter.drawPixmap(rect,m_pic);
	event->accept();
}

QPixmap Picture::pic(){return m_pic;}
void Picture::setPic(const QPixmap& pic)
{
	m_pic=pic;
	emit picChanged(m_pic);
}

void Picture::setPic(const QString& picPath)
{
	m_pic=QPixmap(picPath);
	emit picChanged(m_pic);
}
