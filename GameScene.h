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
    
    void createBackground(); //背景の生成
    void createGround(); //地面の生成
    void createBall();
    
public:
    
    static cocos2d::Scene* createScene();

    virtual bool init();  
    
    CREATE_FUNC(GameScene);
    virtual void onEnter(); //レイヤー表示処理
    virtual void onExit();
    
    virtual bool onTouchBegan(cocos2d::Touch* touch,cocos2d::Event* unused_event);
    virtual void onTouchMoved(cocos2d::Touch* touch,cocos2d::Event* unused_event);
    virtual void onTouchEnded(cocos2d::Touch* touch,cocos2d::Event* unused_event);
    virtual void onTouchCancelled(cocos2d::Touch* touch, cocos2d::Event* unused_event);
    
    //衝突イベント
    bool onContactBegin(cocos2d::PhysicsContact& contact);
};

#endif // __HELLOWORLD_SCENE_H__
