#include "scribblearea.h"
#include <QImage>
#include <QtWidgets>

#include <iostream>

ScribbleArea::ScribbleArea(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);

    scribbling = false;
    myPenColor = Qt::blue;
    myPenWidth = 2;
    message = "v";
    font = "Webdings";

    resetImage();
}

void ScribbleArea::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        lastPoint = event->pos();
        scribbling = true;
        //std::cout << "MousePress" << std::endl;
    }

    if (event->button() == Qt::RightButton) {
       drawText(event->pos());
    }
}

void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && scribbling) {
        drawLineTo(event->pos());
        scribbling = false;
        //std::cout << "MouseRelease" << std::endl;
    }
}

void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton && scribbling) {
        drawLineTo(event->pos());
        //std::cout << "MouseMove" << std::endl;
    }
}

void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);

}

void ScribbleArea::resizeEvent(QResizeEvent *event)
{
    resetImage();
    update();

    QWidget::resizeEvent(event);
}

void ScribbleArea::changeColor(QColor color)
{
    myPenColor = color;
}

void ScribbleArea::changePenWidth(int width)
{
    myPenWidth = width;
}

void ScribbleArea::setFont(QString font1, QString message1)
{
    font = font1;
    message = message1;

}

void ScribbleArea::resetImage()
{
    QSize widgetSize = QSize(width(), height());
    QImage newImage(widgetSize, QImage::Format_RGB32);
    newImage.fill(qRgb(255, 255, 255));
    image = newImage;
}

void ScribbleArea::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawLine(lastPoint, endPoint);

    update();


    lastPoint = endPoint;
}

void ScribbleArea::drawText(const QPoint &at)
{
    QPainter painter(&image);
    QFont seriFont(font, 50, QFont::Bold);
    painter.setFont(seriFont);
    painter.drawText(at, message);
    update();
}
