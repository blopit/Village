//
//  Attribute.hpp
//  Village
//
//  Created by Shrenil Patel on 2019-09-11.
//

#ifndef Attribute_hpp
#define Attribute_hpp

#include "Entity.hpp"

class Entity;

enum class Attr {
    HP, ATT, INT, DEF, RES, SPD,
    EVA, CRIT, CRITDMG, MVE
};

class Attribute {

    Attr _type;
    Entity*_owner;
    float _val;
    
public:
    Attribute(Entity* owner, Attr type, float val) : _owner(owner), _type(type), _val(val) {}
    
    float getValue();
    void setValue(float val);
};

class ResourceAttribute: public Attribute {
    float _maxval;
    
public:
    ResourceAttribute(Entity* owner, Attr type, float val) : Attribute(owner, type, val), _maxval(val) {}
    float getMaxValue();
    void setMaxValue(float val);
    void setValue(float val);
};

#endif /* Attribute_hpp */
