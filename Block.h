
#ifndef __Breakout__Block__
#define __Breakout__Block__

#include "cocos2d.h"



enum eBlockColor
{
    Blue = 0,
    Green,
    Yellow,
    White,
};

class Block : public cocos2d::Sprite
{
    
public:
    CC_SYNTHSIZE(int,m_number, Number);
    CC_SYNTHSIZE(eBlockColor,m_color, BlockColor);
    
    Block();
    virtual ~Block();
    
    static Block* createWithBlockSize(float width, float height, int number);
    virtual bool initWithBlockSize(float width, float height, int number);
    
};

#endif /* defined(__Breakout__Block__) */
