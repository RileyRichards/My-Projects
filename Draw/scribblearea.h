#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QWidget>

class ScribbleArea : public QWidget
{
    Q_OBJECT
public:
    explicit ScribbleArea(QWidget *parent = nullptr);
    void changeColor(QColor color);
    void changePenWidth(int width);
    void setFont(QString font1, QString message1);


signals:

public slots:


    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);


private:
    void resetImage();
    void drawLineTo(const QPoint &endPoint);
    void drawText(const QPoint &at);

    QImage image;

    bool scribbling;
    int myPenWidth;
    QString message;
    QString font;
    QColor myPenColor;

    QPoint lastPoint;

};

#endif // SCRIBBLEAREA_H
