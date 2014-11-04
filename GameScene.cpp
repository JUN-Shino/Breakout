#include "GameScene.h"

#define WINSIZE Director::getInstance()->getWinSize()

USING_NS_CC;

//シーン生成
Scene* GameScene::createScene()
{
 
    auto scene = Scene::createWithPhysics(); //シーンを生成する
    
    // 'layer' is an autorelease object
    auto layer = GameScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
       return true;
}

