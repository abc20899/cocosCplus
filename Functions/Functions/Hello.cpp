//
//  Hello.cpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include "Hello.h"

void Hello::sayHello(){
    
}

void Hello::sayHello(std::string name){
    std::string str = "hello ";
    str += name;
    std::cout<<str<<"\n";
}
