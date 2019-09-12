//
//  GMAccount.cpp
//  TBM
//
//  Created by Shrenil Patel on 2018-09-19.
//

#include "GMAccount.hpp"

GMAccount* GMAccount::instance = nullptr;

GMAccount* GMAccount::getInstance()
{
    if (instance == nullptr)
    {
        instance = new GMAccount();
    }
    
    return instance;
}

GMAccount::GMAccount(){
    
}
