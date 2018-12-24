//
//  main.cpp
//  LearnCPlus
//
//  Created by jun zhao on 2018/12/15.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>
#include "People.h"
#include "NameSpace.h"
#include "Son.h"
#include "Object.h"

//using namespace junechiu

void runObject(){
    Object obj;  //构造函数 析构函数都会执行 在{} 代码块中
    printf("\nrunObject end\n");
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    People *p = new People();
    p->sayHello();
    delete p;  //释放内存
    /**
     c语言中
       malloc(size_t __size)
       free(<#void *#>)
     c++语言中
       new
       delete
     */
    
    
    //命名空间测试
    junechiu::NameSpace *np = new junechiu::NameSpace();
    np->drive();
    delete np;
    
    
    //继承测试
    Son *son = new Son();
    son->sayHello();
    delete son;
    
    Son *son2 = new Son(23);  //构造函数 会调用父类的构造函数
    printf("age:%d\n",son2->getAge());
    delete son2;
    
    Son *son3 = new Son();
    son3->sayHello();
//    son3->Father::sayHello(); 调用父类的方法
    delete son3;
    
    
    //析构函数测试
    Object *obj = new Object();
    delete obj;
    
    runObject();
    
    return 0;
}
