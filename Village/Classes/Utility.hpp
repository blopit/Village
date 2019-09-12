//
//  Utility.hpp
//  TBM
//
//  Created by Shrenil Patel on 2018-09-19.
//

#ifndef Utility_hpp
#define Utility_hpp

#include <sstream>
#include <iostream>

#include "cocos2d.h"

#define iar(pRet) if (pRet && pRet->init()) \
{\
pRet->autorelease();\
return pRet;\
}\
else\
{\
delete pRet;\
pRet = NULL;\
return NULL;\
}

#define iSprite(pSprite, spr) if (pSprite->initWithSpriteFrameName(spr))\
{\
pSprite->autorelease();\
pSprite->init();\
return pSprite;\
}\
CC_SAFE_DELETE(pSprite);\
return NULL;

#define CC_DIRECTOR auto director = Director::getInstance(); \
Size visibleSize = director->getVisibleSize(); \
Vec2 origin = director->getVisibleOrigin(); \
Vec2 center = Vec2(origin.x + visibleSize.width / 2, origin.y + visibleSize.height / 2);

template <class T>
inline T boundToRange(T lower, T value, T upper) {
    return value < lower ? lower : value > upper ? upper : value;
}

inline float randf(float LO, float HI) {
    return LO + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(HI-LO)));
}

inline cocos2d::Point touchToPoint(cocos2d::Touch * touch) {
    return cocos2d::Director::getInstance()->convertToGL(touch->getLocationInView());
}

inline bool isTouching(cocos2d::Touch* touch, cocos2d::Rect rect) {
    return (rect.containsPoint(touchToPoint(touch)));
}

inline std::vector<std::string> split_string(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> strings;
    
    std::string::size_type pos = 0;
    std::string::size_type prev = 0;
    while ((pos = str.find(delimiter, prev)) != std::string::npos)
    {
        strings.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }
    
    // To get the last substring (or only, if delimiter is not found)
    strings.push_back(str.substr(prev));
    
    return strings;
}

template<class T>
inline bool almost_equal(T x, T y, int ulp=2)
{
    // the machine epsilon has to be scaled to the magnitude of the values used
    // and multiplied by the desired precision in ULPs (units in the last place)
    return std::abs(x-y) <= std::numeric_limits<T>::epsilon() * std::abs(x+y) * ulp
    // unless the result is subnormal
    || std::abs(x-y) < std::numeric_limits<T>::min();
}

#endif /* Utility_hpp */
