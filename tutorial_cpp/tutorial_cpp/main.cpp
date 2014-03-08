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

    struct Sommatore var;
    
    var.field_a = 5;
    var.field_b = 10;
    
    var.somma();
    std::cout << "The result is -> " << var.result << std::endl;
    return 0;
}

