//
//  main.cpp
//  Ref
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>

class Point {

private:
    int x,y;
    
public:
    Point(int x,int y){
        this->x = x;
        this->y = y;
    }
    
    int getX(){
        return this->x;
    }
    
    int getY(){
        return this->y;
    }
    
    void add(Point &p){ //传入p的引用 不会对p进行内存拷贝
        this->x += p.x;
        this->y += p.y;
    }
};

int main(int argc, const char * argv[]) {
    Point p1 = Point(1,2);
    Point p2 = Point(2,2);
    p1.add(p2);
    std::cout<<p1.getX()<<"\n";
    return 0;
}
