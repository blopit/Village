//
//  GMAccount.hpp
//  TBM
//
//  Created by Shrenil Patel on 2018-09-19.
//

#ifndef GMAccount_hpp
#define GMAccount_hpp

class GMAccount {
private:
    static GMAccount* instance;
    GMAccount();
    
public:
    static GMAccount* getInstance();
};

#endif /* GMAccount_hpp */
