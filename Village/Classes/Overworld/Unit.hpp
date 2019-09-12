//
// Created by Shrenil Patel on 2019-08-27.
//

#ifndef PROJ_ANDROID_UNIT_HPP
#define PROJ_ANDROID_UNIT_HPP

#include "cocos2d.h"
#include "Utility.hpp"

class Unit : public cocos2d::Node {


    virtual bool init() override;
    virtual void draw(cocos2d::Renderer* renderer,
            const cocos2d::Mat4& transform,
            uint32_t transformFlags) override;

    Unit();
    cocos2d::DrawNode drawNode;


public:
    CREATE_FUNC(Unit);
};

#endif //PROJ_ANDROID_UNIT_HPP
