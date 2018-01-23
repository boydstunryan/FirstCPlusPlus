//
//  Runner.cpp
//  FirstCPlusPlus
//
//  Created by Boydstun, Ryan on 1/23/18.
//  Copyright © 2018 Boydstun, Ryan. All rights reserved.
//

#include <iostream>
#include "Controller.hpp"

int main()
{
    Controller * app = new Controller();
    
    (*app).start();
    
    app->start();
    
    return 0;
}
