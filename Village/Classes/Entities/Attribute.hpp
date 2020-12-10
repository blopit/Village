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
    HP, HPREG, DEF, RES,
    EVA, MVE, RANGE,
    
    ATT, INT,
    ATTSPD, ALC, CDR,
    CRIT, CRITDMG,
    VAMP, MVAMP
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


class AttributeList {
    Entity* _owner;
    int _level;
public:
    
    ResourceAttribute* HP;
    Attribute* HPREG;
    Attribute* ATT;
    Attribute* INT;
    Attribute* DEF;
    Attribute* RES;
    
    Attribute* ATTSPD;
    Attribute* ALC;
    Attribute* CDR;
    
    Attribute* EVA;
    Attribute* MVE;
    Attribute* CRIT;
    Attribute* CRITDMG;
    
    Attribute* VAMP;
    Attribute* MVAMP;
    
    AttributeList(Entity* owner) : _owner(owner) {
        HP = new ResourceAttribute(_owner, Attr::HP, 100.0f);
        ATT = new Attribute(_owner, Attr::ATT, 100.0f);
        INT = new Attribute(_owner, Attr::INT, 100.0f);
        DEF = new Attribute(_owner, Attr::DEF, 100.0f);
        RES = new Attribute(_owner, Attr::RES, 100.0f);
        
        ATTSPD = new Attribute(_owner, Attr::ATTSPD, 1.0f);
        ALC = new Attribute(_owner, Attr::ALC, 1.0f);
        CDR = new Attribute(_owner, Attr::CDR, 1.0f);
        
        EVA = new Attribute(_owner, Attr::EVA, 0.0f);
        MVE = new Attribute(_owner, Attr::MVE, 100.0f);
        CRIT = new Attribute(_owner, Attr::CRIT, 0.0f);
        CRITDMG = new Attribute(_owner, Attr::CRITDMG, 1.5f);
        
        VAMP = new Attribute(_owner, Attr::VAMP, 0.0f);
        MVAMP = new Attribute(_owner, Attr::MVAMP, 0.0f);
        
        _level = 1;
    }
    
    AttributeList(Entity* owner, int level) :  AttributeList(owner) {
        _level = level;
    }
    
    ~AttributeList() {
        delete HP;
        delete ATT;
        delete INT;
        delete DEF;
        delete RES;
        
        delete ATTSPD;
        delete ALC;
        delete CDR;
        
        delete EVA;
        delete MVE;
        delete CRIT;
        delete CRITDMG;
        
        delete VAMP;
        delete MVAMP;
    };
};

#endif /* Attribute_hpp */
