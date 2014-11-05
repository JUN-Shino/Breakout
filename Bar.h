
#ifndef __Breakout__Bar__
#define __Breakout__Bar__

#include "cocos2d.h"

class Bar : public cocos2d::Sprite
{
public:
    Bar();
    ~Bar();
    
 
    
private:
    //x座標、y座標
    
    //画像の横、縦幅
    int width,height;
    
    //終了
    bool endflag;
    
    int gh;
    
private:
    void Draw();
    void KeyGet();
    void Destroy();
    

    
};
#endif /* defined(__Breakout__Bar__) */
