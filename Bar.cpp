#include "Bar.h"

USING_NS_CC;

//初期化
bool Bar::init()
{
    if(!Sprite::initWithFile("Bar.png"))
    {
        return false;
    }
    
    return true;
}