//
//  Son.hpp
//  LearnCPlus
//
//  Created by jun zhao on 2018/12/15.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#ifndef Son_hpp
#define Son_hpp

#include <iostream>
#include "Father.h"

class Son: public Father { //继承
    
public:
    Son();
    Son(int age); //子类的构造方法
    void sayHello(); //子类重定义父类方法
};

#endif /* Son_hpp */
