//
//  TownScene.hpp
//  Village
//
//  Created by Shrenil Patel on 2019-08-26.
//

#ifndef TownScene_hpp
#define TownScene_hpp

#include "cocos2d.h"

#include <stdio.h>
#include "PanZoomLayer.hpp"

class TownScene : public cocos2d::Layer {
    PanZoomLayer* pzLayer;
    
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init() override;
    
    bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event) override;
    void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event) override;
    void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event) override;
    CREATE_FUNC(TownScene);
    
    void step(float dt);
    
    CC_SYNTHESIZE(cocos2d::DrawNode*, drawNode, DrawNode)
};

#endif /* TownScene_hpp */
