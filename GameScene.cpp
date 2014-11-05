#include "GameScene.h"

#define WINSIZE Director::getInstance()->getWinSize()

USING_NS_CC;

//シーン生成
Scene* GameScene::createScene()
{
 
    auto scene = Scene::createWithPhysics();
    auto layer = GameScene::create();
    scene->addChild(layer);

    return scene;
}


bool GameScene::init()
{

    if ( !Layer::init() )
    {
        return false;
    }
    
    //シングルタップイベントの取得
    auto touchListener = EventListenerTouchOneByOne::create();
    touchListener->onTouchBegan = CC_CALLBACK_2(GameScene::onTouchBegan, this);
    touchListener->onTouchMoved = CC_CALLBACK_2(GameScene::onTouchMoved, this);
    touchListener->onTouchEnded = CC_CALLBACK_2(GameScene::onTouchEnded, this);
    touchListener->onTouchCancelled = CC_CALLBACK_2(GameScene::onTouchCancelled, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(touchListener, this);
    
    auto contactListener = EventListenerPhysicsContact::create();
    contactListener->onContactBegin = CC_CALLBACK_1(GameScene::onContactBegin, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(contactListener, this);
    
    return true;
}

void GameScene::onEnter()
{
    //背景の生成
    createBackground();
    
    //地面の生成
    createBar();
    
}

void GameScene::createBackground()
{
    auto background = Sprite::create("background.png");
    background->setAnchorPoint(Point(0,0.5));
    background->setPosition(Point(0,WINSIZE.height / 2));
    addChild(background, Z_Background, T_Background);
}

void GameScene::createBar()
{

    
    //物質的特徴の設定
    PhysicsMaterial material;
    
    
}





