#include "stonelabel.h"

StoneLabel::StoneLabel(QWidget* parent,std::string mode):QLabel(parent)
{
    this->mode=mode;
    this->row=0;
    this->col=0;
}
