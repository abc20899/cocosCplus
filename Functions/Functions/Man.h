//
//  Man.hpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#ifndef Man_hpp
#define Man_hpp

#include <iostream>
#include "People.h"

class Man : public People{

public:
    Man();
    virtual void sayHello(); //重写父类的方法
    virtual void eat(){ //实现父类的抽象方法
        printf("man eat\n");
    }
};


#endif /* Man_hpp */
