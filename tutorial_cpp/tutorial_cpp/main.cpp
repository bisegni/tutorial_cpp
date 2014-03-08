//
//  main.cpp
//  tutorial_cpp
//
//  Created by Claudio Bisegni on 08/03/14.
//  Copyright (c) 2014 Claudio Bisegni. All rights reserved.
//

#include <iostream>
#include "Sommatore.h"

int main(int argc, const char * argv[])
{

    struct Sommatore var(5,10);
    
    var.somma();
    std::cout << "The result is -> " << var.result << std::endl;
    
    //now try the object heap allcoation (new, delete)
    return 0;
}

