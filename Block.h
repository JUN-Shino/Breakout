
#ifndef __Breakout__Block__
#define __Breakout__Block__

#include "cocos2d.h"



enum class BlockColor
{
    Blue = 0,
    green,
    Yellow,
    White,
};

class Block : public cocos2d::Sprite
{
protected:
    //ブロックの番号をあらわす変数&アクセサ
    CC_SYNTHSIZE(int,m_number, Number);
    //ブロックの色をあらわす
    CC_SYNTHSIZE(BlockColor,m_color, BlockColor);
public:
    
    BlockSprite();
    virtual ~BlockSprite();
    
    static BlockSprite* createWithBlockSize(float width, float height, int number);
    virtual bool initWithBlockSize(float width, float height, int number);
    
};

#endif /* defined(__Breakout__Block__) */
