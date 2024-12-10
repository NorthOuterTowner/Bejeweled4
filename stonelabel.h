#ifndef STONELABEL_H
#define STONELABEL_H
#include <QLabel>
class StoneLabel:public QLabel
{
    Q_OBJECT
public:
    StoneLabel(QWidget* parent);
    /*The mode of stone,such as jewellery,fruit and vegetable*/
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
    bool matched = false;  // 是否匹配，用于消除
    void setMatched(bool matchedStatus) { matched = matchedStatus; }
    bool isMatched() const { return matched; }

    //目标位置
    int targetX=0;
    int targetY=0;
    static std::string stoneMode;
private:
    int row;
    int col;
    int index=0;


};

#endif // STONELABEL_H
