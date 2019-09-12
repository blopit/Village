//
//  Attribute.cpp
//  Village
//
//  Created by Shrenil Patel on 2019-09-11.
//

#include "Attribute.hpp"

float Attribute::getValue() {
    return _val;
}

void Attribute::setValue(float val) {
    _val = val;
}


float ResourceAttribute::getMaxValue() {
    //TODO: ADD passives
    return _maxval;
}

void ResourceAttribute::setMaxValue(float val) {
    _maxval = val;
}

void ResourceAttribute::setValue(float val) {
    if (val < getMaxValue()) {
        setValue(val);
    }
}
