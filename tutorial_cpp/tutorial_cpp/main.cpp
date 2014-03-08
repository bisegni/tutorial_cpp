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
    Sommatore var(5, 10);

    var.somma();
    std::cout << "The result is -> " << var.result << std::endl;
    
    Sommatore *var_ptr = new Sommatore(5, 10);
    var_ptr->somma();
    std::cout << "The result is -> " << var_ptr->result << std::endl;
    delete(var_ptr);
    return 0;
}

