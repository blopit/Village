//
//  CustomTimer.cpp
//  TBM
//
//  Created by Shrenil Patel on 2018-09-19.
//


#include "../Utility.hpp"
#include "../MasterDefinitions.h"
#include "CustomTimer.hpp"

USING_NS_CC;
using namespace std;

/*
CustomTimer::CustomTimer(int ftime, Building* building) : startTime(time(0)), doneTime(time(0) + ftime), doneSteps(ftime * 60), building(building) {
    lastTime = 0;
    steps = 0;
    pct = 0;
    str = "0s";
}

void CustomTimer::reset(int ftime) {
    startTime = time(0);
    doneTime = (time(0) + ftime);
    doneSteps = (ftime * 60);
    lastTime = 0;
    steps = 0;
    pct = 0;
    str = "0s";
    done = false;
    progressBar->setPercentage(0.0f);
    this->runAction(EaseOut::create(ScaleTo::create(0.1f, 1.0f), 1.5f));
}

void CustomTimer::step(float dt) {
    if (!active) return;
    steps++;
    long current = (doneTime - (startTime + (time(0) - startTime) * spdMult) );
    if (current != lastTime) {
        steps = (time(0) - startTime) * 60 * spdMult;
        lastTime = current;
        auto t = boundToRange(0l, current, 3596400l);
        
        if (current < 0) {
            if (!done) {
                done = true;
                this->runAction(EaseIn::create(ScaleTo::create(0.1f, 0.0f, 1.0f), 1.5f));
                building->process();
            }
        }
        
        int d = int(t / 86400);
        int h = int(t / 3600) % 24;
        int m = int(t / 60) % 60;
        int s = int(t) % 60;
        
        stringstream ss;
        
        if (d > 0) {
            ss << d << "d ";
        }
        if (h > 0) {
            ss << h << "h ";
        }
        if (m > 0) {
            ss << m << "m ";
        }
        
        ss << s << "s";
        
        timeLabel->setString(ss.str());
        
    }
    
    pct = (float(steps)/float(doneSteps))*100;
    progressBar->setPercentage(pct);
}

void CustomTimer::activate() {
    active = true;
    this->setVisible(true);
    reset(int(doneSteps/60));
}

bool CustomTimer::init() {
    auto sprite = cocos2d::Sprite::createWithSpriteFrameName("progressBar.png");
    progressBar = ProgressTimer::create(sprite);
    progressBar->setMidpoint(Vec2(0, 0.5f));
    progressBar->setBarChangeRate(Vec2(1, 0));
    
    auto progressBarBk = cocos2d::Sprite::createWithSpriteFrameName("progressBarBk.png");
    
    timeLabel = Label::createWithTTF("0s", FONT_REG, 24);
    timeLabel->setAnchorPoint(Vec2(0.5, 0.5));
    timeLabel->setTextColor(Color4B::WHITE);
    timeLabel->enableOutline(Color4B::BLACK, 3);
    
    this->addChild(timeLabel, 2);
    this->addChild(progressBar, 1);
    this->addChild(progressBarBk, 0);
    
    this->schedule(schedule_selector(CustomTimer::step));
    
    this->setVisible(false);
    
    return true;
}

CustomTimer *CustomTimer::create(int time, Building* building) {
    CustomTimer *pRet = new CustomTimer(time, building);
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        delete pRet;
        pRet = NULL;
        return NULL;
    }
}
 */
