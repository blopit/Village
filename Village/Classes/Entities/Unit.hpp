//
//  Unit.hpp
//  Village
//
//  Created by Shrenil Patel on 2019-09-11.
//

#ifndef Unit_hpp
#define Unit_hpp

#include "Entity.hpp"
#include <vector>


class Unit;

struct AggroTable {
    Unit* unit;
    float amount;
};

class Unit : public Entity {
    
    std::vector<AggroTable> aggroTable;
    
protected:
    bool indestructible = false;
   
public:
    // hit points
};

#endif /* Unit_hpp */
