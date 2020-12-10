//
//  Character.hpp
//  Village
//
//  Created by Shrenil Patel on 2019-09-12.
//

#ifndef Character_hpp
#define Character_hpp

#include "Unit.hpp"
#include <vector>

class Character;

struct AggroTable {
    Character* chr;
    float amount;
};

class Character : public Unit {
    
    std::vector<AggroTable> aggroTable;
};

#endif /* Character_hpp */
