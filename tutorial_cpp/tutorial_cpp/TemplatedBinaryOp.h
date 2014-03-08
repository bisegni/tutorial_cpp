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
class TemplatedBinaryOp {
public:
	T 		op_a;
	T 		op_b;
    virtual T exec() = 0;
};

class IntSumOp : public TemplatedBinaryOp<int> {
public:
    IntSumOp(int a, int b) {
        op_a = a;
        op_b = b;
    }
    int exec() {
        return op_a + op_b;
    }
};

class DoubleSumOp : public TemplatedBinaryOp<double> {
public:
    DoubleSumOp(double a, double b) {
        op_a = a;
        op_b = b;
    }
    double exec() {
        return op_a + op_b;
    }
};

class IntMulOp : public TemplatedBinaryOp<int> {
public:
    IntMulOp(int a, int b) {
        op_a = a;
        op_b = b;
    }
    int exec() {
        return op_a * op_b;
    }
};


#endif
