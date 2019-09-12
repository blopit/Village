//
//  Entity.hpp
//  Village
//
//  Created by Shrenil Patel on 2019-09-11.
//

#ifndef Entity_hpp
#define Entity_hpp

class Entity: public cocos2d::Node {
    
public:
    // location
    cocos2d::Vec2 location;
    cocos2d::Size size;
};

#endif /* Entity_hpp */
