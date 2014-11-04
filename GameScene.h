#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class GameScene : public cocos2d::Layer
{
private:
    //タグ
    enum class Tag
    {
        T_Background = 1,
        T_Block,
        T_Ball,
        T_Bar,
    };
    
    //Zオーダー
    enum class ZOrder
    {
        Z_Background = 1,
        Z_Block,
        Z_Ball,
        Z_Bar,
    };
    
    void creatBackground(); //背景の生成

    Bar* _bar;
    Ball* _ball;
    Block* _block;
    
public:
    
    static cocos2d::Scene* createScene();

    virtual bool init();  
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
    virtual void onEnter(); //レイヤー表示処理
};

#endif // __HELLOWORLD_SCENE_H__
