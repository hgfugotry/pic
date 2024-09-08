#ifndef SRC_PICTURE_HPP
#define SRC_PICTURE_HPP

#include<iostream>
#include<QtCore/QCoreApplication>
#include<QtCore/QByteArray>
#include<QtCore/QString>
#include<QtWidgets/QWidget>
#include<QtGui/QPixmap>
#include<QtGui/QPainter>
#include<QtGui/QPaintEvent>

class Picture:public QWidget
{
	Q_OBJECT
	Q_CLASSINFO("AUTHOR","LIULIYUAN");
	Q_PROPERTY(QPixmap pic READ pic WRITE setPic NOTIFY picChanged);
public:
	Picture(QWidget* parent=nullptr);
	~Picture();
private:
	QPixmap m_pic;
private slots:
	void paintPic();
protected:
	void paintEvent(QPaintEvent* event);
public:
	QPixmap pic();
	void setPic(const QPixmap& pic);
	void setPic(const QString& picPath);//绝对路径
signals:
	void picChanged(QPixmap pic);
};

#endif
