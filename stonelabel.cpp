#include "stonelabel.h"
std::string StoneLabel::stoneMode = "gemstone";
StoneLabel::StoneLabel(QWidget* parent):QLabel(parent)
{
    this->row=0;
    this->col=0;
}
