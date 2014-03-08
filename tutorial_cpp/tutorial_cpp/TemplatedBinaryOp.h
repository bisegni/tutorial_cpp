//
//  TemplatedBinaryOp.h
//  tutorial_cpp
//
//  Created by Claudio Bisegni on 08/03/14.
//  Copyright (c) 2014 Claudio Bisegni. All rights reserved.
//

#ifndef tutorial_cpp_TemplatedBinaryOp_h
#define tutorial_cpp_TemplatedBinaryOp_h

template <typename T>
class BinaryOp {
public:
	T 		op_a;
	T 		op_b;
    virtual T exec() = 0;
}


#endif
