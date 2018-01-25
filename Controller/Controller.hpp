//
//  Controller.hpp
//  FirstCPlusPlus
//
//  Created by Boydstun, Ryan on 1/23/18.
//  Copyright © 2018 Boydstun, Ryan. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>

class Controller
{
private:
    //data members and helper methods
protected:
    //Things that need to only be used by subclasses
public:
    //Anyone can see this
    Controller();
    void start();
};

#endif /* Controller_hpp */
