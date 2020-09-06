#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

class MaFenetre : public QWidget
{
    public:
    MaFenetre();

    private:
    QProgressBar *m_bar;
    QSlider *m_slider;
};

#endif
