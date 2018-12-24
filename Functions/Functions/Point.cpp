//
//  Point.cpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include "Point.h"

Point::Point(int x,int y){
    this->x = x;
    this->y = y;
}

int Point::getX(){
    return this->x;
}

int Point::getY(){
    return this->y;
}

void Point::add(int x,int y){
    this->x += x;
    this->y += y;
}

void Point::add(Point p){ //p
    add(p.x,p.y); //.访问成员
}
