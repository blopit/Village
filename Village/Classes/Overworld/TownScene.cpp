//
//  TownScene.cpp
//  Village
//
//  Created by Shrenil Patel on 2019-08-26.
//

#include "TownScene.hpp"
#include "../PerlinHex/PPerlin.h"

USING_NS_CC;

Scene* TownScene::createScene() {
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = TownScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool TownScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    drawNode = DrawNode::create();
    
    
    
    float sz = 512;
    
    auto rt = RenderTexture::create(int(sz), int(sz));
    
    double frequency = 8.0;
    //frequency = std::clamp(frequency, 0.1, 64.0);
    
    int octaves = 16;
    //octaves = std::clamp(octaves, 1, 16);
    
    std::uint32_t seed = 12345;
    
    const siv::PerlinNoise perlin(seed);
    const double fx = sz / frequency;
    const double fy = sz / frequency;
    
    for (float x = 0; x < sz; x++) {
        for (float y = 0; y < sz; y++) {
            //auto z = (pn.noise(x/sz, y/sz, 0) + 1) * 0.5;
            
            auto z = perlin.octaveNoise0_1(x / fx, y / fy, octaves);
            z = clampf(z, 0, 1);
            
            drawNode->drawDot(Vec2(x,y), 1, Color4F(z, z, z, 1.0));
        }
    }
    
    drawNode->drawRect(Vec2(), Vec2(sz, sz), Color4F::RED);
    
    // draw into DrawNode
    rt->begin();
    drawNode->cocos2d::Node::visit();
    rt->end();
    
    rt->getSprite()->setScale(1, 1);
    rt->getSprite()->setPosition(Vec2(300, 300));
    
    addChild(rt, 0);
    
    /*auto map = Sprite::create("images/map.png");
    auto mapSize = map->getContentSize();
    map->setAnchorPoint(Vec2(0, 0));
    map->setPosition(mapSize * -0.5f);
    pzLayer = PanZoomLayer::create();
    pzLayer->SetPanBoundsRect(Rect(
            mapSize.width * -0.5f, mapSize.height * -0.5f,
            mapSize.width * 1.0f, mapSize.height * 1.0f));
    pzLayer->setScale(1.0f);
    pzLayer->SetMaxScale(2.0f);
    pzLayer->SetMinScale(1.0f);
    
    pzLayer->addChild(map);
    //pzLayer->
    addChild(pzLayer, 0);*/
    
    
    // listen for touch events
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = CC_CALLBACK_2(TownScene::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(TownScene::onTouchMoved, this);
    listener->onTouchEnded = CC_CALLBACK_2(TownScene::onTouchEnded, this);
    listener->onTouchCancelled = CC_CALLBACK_2(TownScene::onTouchEnded, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
    listener->setSwallowTouches(true);
    this->schedule(schedule_selector(TownScene::step));
    
    return true;
}

bool TownScene::onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event) {
    return false;
}

void TownScene::onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event) {
    return;
}

void TownScene::onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event) {
    return;
}

void TownScene::step(float dt) {
}
