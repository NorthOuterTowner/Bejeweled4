#ifndef STONELABEL_H
#define STONELABEL_H
#include <QLabel>
class StoneLabel:public QLabel
{
    Q_OBJECT
public:
    StoneLabel(QWidget* parent,std::string mode="gemstone");
    void setMode(std::string mode){
        this->mode=mode;
    }
    /*The mode of stone,such as jewellery,fruit and vegetable*/
    std::string getMode(){
        return this->mode;
    }
    inline void setrow(int row){
        this->row=row;
    }
    inline void setcol(int col){
        this->col=col;
    }
    inline int getrow(){
        return this->row;
    }
    inline int getcol(){
        return this->col;
    }
    inline void setIndex(int index){
        this->index=index;
    }
    inline int getIndex(){
        return this->index;
    }
    inline void setStyle(int mode=0){
        if(mode==1)
            this->setStyleSheet("background-color: lightblue;");
        else
            this->setStyleSheet("");
    }
private:
    std::string mode;
    int row;
    int col;
    int index=0;
};

#endif // STONELABEL_H
