#include "MaFenetre.h"

MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(200, 100);

    m_bar = new QProgressBar(this);
    m_bar->setGeometry(10, 60, 150, 20);
    m_bar->move(50, 20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_bar, SLOT(setValue(int))) ;
}
