//
//  Operator.h
//  tutorial_cpp
//
//  Created by Claudio Bisegni on 08/03/14.
//  Copyright (c) 2014 Claudio Bisegni. All rights reserved.
//

#ifndef tutorial_cpp_Operator_h
#define tutorial_cpp_Operator_h

class BinaryOp {
public:
	int 		op_a;
	int 		op_b;
    virtual int exec() = 0;
}

class SumOp : public BinaryOp {
    int exec() {
        return op_a + op_b;
    }
};

class MulOp : public BinaryOp {
    int exec() {
        return op_a * op_b;
    }
};
#endif
