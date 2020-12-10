//
//  Unit.hpp
//  Village
//
//  Created by Shrenil Patel on 2019-09-11.
//

#ifndef Unit_hpp
#define Unit_hpp

#include "Entity.hpp"

enum class Material {
    FLESH, THICK_FLESH, WOOD, STONE
};

class Unit : public Entity {

protected:
    bool indestructible = false;
   
public:
    // hit points
};

#endif /* Unit_hpp */
