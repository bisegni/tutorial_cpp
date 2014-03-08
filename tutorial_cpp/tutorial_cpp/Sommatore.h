//
//  Sommatore.h
//  tutorial_cpp
//
//  Created by Claudio Bisegni on 08/03/14.
//  Copyright (c) 2014 Claudio Bisegni. All rights reserved.
//

#ifndef __tutorial_cpp__Sommatore__
#define __tutorial_cpp__Sommatore__

class Sommatore {
	int 	field_a;
	int 	field_b;
	int		result;
    
    int     somma() {
        return (result = field_a + field_b);
    }
};

#endif /* defined(__tutorial_cpp__Sommatore__) */
