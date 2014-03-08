//
//  Shapes.h
//  tutorial_cpp
//
//  Created by Claudio Bisegni on 08/03/14.
//  Copyright (c) 2014 Claudio Bisegni. All rights reserved.
//

#ifndef tutorial_cpp_Shapes_h
#define tutorial_cpp_Shapes_h

#include <vector>

class Shapes {
public:
    virtual ~Shapes(){};
    virtual void draw() = 0;
};


class Square : public Shapes {
    int square_dim;
public:
    Square(int dim) {
        square_dim = dim;
    }
    void draw() {
        std::cout << "draw a rectangle of " << square_dim << std::endl;
    }
};

class Circle : public Shapes {
protected:
    int diameter;
public:
    Circle(int dim) {
        diameter = dim;
    }
    void draw() {
        std::cout << "draw a Circle of diameter of " << diameter << std::endl;
    }
};

class Ellipse : public Circle {
    int diameter_y;
public:
    Ellipse(int dim_x, int dym_y) : Circle(dim_x) {
        diameter_y = dym_y;
    }
    void draw() {
        std::cout << "draw an Ellipse of diameter of x->" << diameter << " and y-> " << diameter_y << std::endl;
    }
};

class Window {
    std::vector<Shapes*> shape_to_render;
public:
    //----------------------------------------------------------
    ~Window() {
		for(int idx = 0; idx <  shape_to_render.size(); idx++) {
			delete(shape_to_render[idx]);
		}
		shape_to_render.clear();
	}
    
    //----------------------------------------------------------
	void addShape(Shapes *new_shape) {
		shape_to_render.push_back(new_shape);
	}
    
    //----------------------------------------------------------
	void drawAll() {
		for(int idx = 0; idx <  shape_to_render.size(); idx++) {
			shape_to_render[idx]->draw();
		}
	}
};

#endif
