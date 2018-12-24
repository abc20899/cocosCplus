//
//  Point.hpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

//运算符重载

class Point {
    
private:
    int x,y;
public:
    Point(int x,int y);
    int getX();
    int getY();
    void add(int x,int y);
    void add(Point p);
    
    //运算符重载
    void operator+=(Point p){
        add(p);
    }
};

#endif /* Point_hpp */
