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
    virtual ~BinaryOp(){};
    
	int 		op_a;
	int 		op_b;
    int         result;
    virtual void exec() = 0;
};

class SumOp : public BinaryOp {
public:
    SumOp(int a, int b) {
        op_a = a;
        op_b = b;
    }
    void exec() {
        result = op_a + op_b;
    }
};

class MulOp : public BinaryOp {
public:
    MulOp(int a, int b) {
        op_a = a;
        op_b = b;
    }
    
    void exec() {
        result = op_a * op_b;
    }
};
#endif
