#include "Block.h"

USING_NS_CC;

Block::Block()
{
}

Block::~Block()
{
}


Block* Block::createWithBlockSize(float width, float height, int number)
{
    Block *pRet = new Block();
    if(pRet && pRet->initWithBlockSize(width, height, number))
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        delete pRet;
        pRet = nullptr;
        
        return nullptr;
    }
}

bool Block::initWithBlockSize(float width, float height, int number)
{
    std::string fileName = NULL;
    int t = rand() % 4;
    switch(t){
        case 0:
            fileName = "block_blue.png";
            setBlockColor(Brue);
            break;
        case 1:
            fileName = "block_green.png";
            setBlockColor(Green);
            break;
        case 2:
            fileName = "block_yellow.png";
            setBlockColor(Yellow);
            break;
        case 3:
            fileName = "block_white.png";
            setBlockColor(White);
            
        default:
            fileName = "block_blue.png";
            setBlockColor(Blue);
            break;
    }
    
    if(!Sprite::initWithFile(fileName,Rect(0, 0, width, height)))
       {
           return false;
       }
    
    Sprite::setTag()
}