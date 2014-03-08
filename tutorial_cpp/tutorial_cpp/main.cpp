//
//  main.cpp
//  tutorial_cpp
//
//  Created by Claudio Bisegni on 08/03/14.
//  Copyright (c) 2014 Claudio Bisegni. All rights reserved.
//

#include <iostream>
#include "Sommatore.h"
#include "Operator.h"
#include "Shapes.h"
#include "TemplatedBinaryOp.h"

BinaryOp * exec_operation(BinaryOp *op);

int main(int argc, const char * argv[])
{
    Sommatore var(5, 10);

    var.somma();
    std::cout << "The result is -> " << var.result << std::endl;
    
    Sommatore *var_ptr = new Sommatore(5, 10);
    var_ptr->somma();
    std::cout << "The result is -> " << var_ptr->result << std::endl;
    delete(var_ptr);
    
    //-----------------------------------------------------------------------------
    
    BinaryOp *op = exec_operation(new SumOp(10,10));
    std::cout << "The result is -> " << op->result << std::endl;
    delete(op);
    
    op = exec_operation(new MulOp(10,10));
    std::cout << "The result is -> " << op->result << std::endl;
    delete(op);
    
    //-----------------------------------------------------------------------------
    Window w;
    
    w.addShape(new Square(10));
    w.addShape(new Circle(10));
    w.addShape(new Ellipse(10, 20));
    w.drawAll();
 
    //-----------------------------------------------------------------------------
    
    return 0;
}

BinaryOp * exec_operation(BinaryOp *op) {
    op->exec();
    return op;
}