#ifndef STONELABEL_H
#define STONELABEL_H
#include <QLabel>
#include <QMouseEvent>  // 包含鼠标事件类
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
    inline void setpix(std::string pix){
        this->pix=pix;
    }
    inline std::string getpix(){
        return pix;
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

    bool isFrozen;

    void setStyleSheetForFrozen() {
        // 设置为白色填充的样式，代表冰冻状态，可根据实际进一步调整样式细节，比如边框等
        this->setStyleSheet("background-color: black;");

    }

    /*void setStyleSheetForNormal() {
        // 恢复正常的样式，这里调用父类的默认样式设置（清除之前设置的特殊样式）
        QLabel::setStyleSheet("");
    }*/
    void setStyleSheetForNormal() {
        // 清除所有样式，恢复正常显示
        this->setStyleSheet("");
    }


    //目标位置
    int targetX=0;
    int targetY=0;
    static std::string stoneMode;
private:
    int row;
    int col;
    int index=0;

    std::string pix;//保存图片信息


};

#endif // STONELABEL_H
