//
//  MasterDefinitions.h
//  TBM
//
//  Created by Shrenil Patel on 2018-09-19.
//

#ifndef Controls_h
#define Controls_h

#include "macrologger.h"

#define DEBUG true
#undef LOG_LEVEL
#define LOG_LEVEL 3

#define PHI 1.61803398875f

// FONTS
#define FONT_PX "fonts/dpcomic.ttf"
#define FONT_REG "fonts/comic.ttf"
#define FONT_ITALIC "fonts/comic_i.ttf"
#define FONT_BOLD_ITALIC "fonts/comic_bi.ttf"

// COLOURS
#define CB_BLACK cocos2d::Color4F(0.0, 0.0, 0.0, 1.0)
#define CB_SKBLUE cocos2d::Color4F(0.35, 0.7, 0.9, 1.0)     // #59B3E6
#define CB_BLUE cocos2d::Color4F(0, 0.45, 0.7, 1.0)         // #0070B0
#define CB_GREEN cocos2d::Color4F(0.0, 0.6, 0.5, 1.0)
#define CB_LTGREEN cocos2d::Color4F(0.4, 1.0, 0.6, 1.0)
#define CB_YELLOW cocos2d::Color4F(0.95, 0.9, 0.25, 1.0)    // #F3E63F
#define CB_ORANGE cocos2d::Color4F(0.9, 0.6, 0.0, 1.0)      // #E69900
#define CB_RED cocos2d::Color4F(0.8, 0.4, 0.0, 1.0)
#define CB_DKRED cocos2d::Color4F(0.85, 0.0, 0.0, 1.0)
#define CB_PINK cocos2d::Color4F(0.8, 0.6, 0.7, 1.0)
#define CB_CYAN cocos2d::Color4F(0.0, 0.9, 0.9, 1.0)
#define CB_WHITE cocos2d::Color4F(1.0, 1.0, 1.0, 1.0)
#define CB_PURPLE cocos2d::Color4F(0.6, 0.0, 1.0, 1.0)

#define CB_DEPLETE cocos2d::Color4F(0.6, 0.8, 0.0, 1.0)
#define CB_REDLITE cocos2d::Color4F(1.0, 0.5, 0.3, 1.0)
#define CB_TEXT cocos2d::Color4F(0.7, 0.8, 1.0, 1.0)
#define CB_TRUERED cocos2d::Color4F(1.0, 0.0, 0.0, 1.0)

#define CB_WAIT_TIME cocos2d::Color4F(0.3, 1.0, 0.0, 1.0)
#define CB_CHANNEL_TIME cocos2d::Color4F(1.0, 0.3, 0.0, 1.0)
#define CB_STUN_TIME cocos2d::Color4F(0.6, 0.0, 0.7, 1.0)

#define CBD_RED cocos2d::Color4F(0.65, 0.25, 0.0, 1.0)
#define CBD_REDLITE cocos2d::Color4F(0.85, 0.35, 0.15, 1.0)
#define CBD_SKBLUE cocos2d::Color4F(0.2, 0.55, 0.75, 1.0)

#define CB_BLACK_A(A) cocos2d::Color4F(0.0, 0.0, 0.0, A)
#define CB_SKBLUE_A(A) cocos2d::Color4F(0.35, 0.7, 0.9, A)
#define CB_BLUE_A(A) cocos2d::Color4F(0, 0.45, 0.7, A)
#define CB_GREEN_A(A) cocos2d::Color4F(0.0, 0.6, 0.5, A)
#define CB_LTGREEN_A(A) cocos2d::Color4F(0.4, 1.0, 0.6, A)
#define CB_YELLOW_A(A) cocos2d::Color4F(0.95, 0.9, 0.25, A)
#define CB_ORANGE_A(A) cocos2d::Color4F(0.9, 0.6, 0.0, A)
#define CB_RED_A(A) cocos2d::Color4F(0.8, 0.4, 0.0, A)
#define CB_DKRED_A(A) cocos2d::Color4F(0.85, 0.0, 0.0, A)
#define CB_PINK_A(A) cocos2d::Color4F(0.8, 0.6, 0.7, A)
#define CB_WHITE_A(A) cocos2d::Color4F(1.0, 1.0, 1.0, A)
#define CB_PURPLE_A(A) cocos2d::Color4F(0.6, 0.0, 1.0, A)

#endif /* Controls_h */
