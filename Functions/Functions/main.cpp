//
//  main.cpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>
#include "Man.h"
#include "Hello.h"
#include "Point.h"
#include "Pseudofunction.h"

void hello(){
    std::cout<<"hello"<<"\n";
}

int main(int argc, const char * argv[]) {
    
    People *p = new Man(); //父类指向子类
    p->sayHello(); //调用子类的方法
    p->eat();
//    delete p;
    
    //测试函数重载
    Hello *h = new Hello();
    h->sayHello("junechiu");
    
    
    //测试运算符重载
    Point p1 = Point(10,10); //引用
    p1.add(Point(12,12));
    std::cout<<p1.getX()<<"\n";
    
    Point *p2 = new Point(5,5);
    (*p2)+=Point(2,2);  //*p2 取指针的值
    std::cout<<p2->getX()<<"\n"; //指针用->访问成员
    
    
    //伪函数测试 可以作为回调等 把一个类作为函数调用
//    hello(); //正常调用方法
    PsCallback ps;
    ps();  //调用伪函数
    
    return 0;
}
