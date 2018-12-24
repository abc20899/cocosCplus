//
//  Son.cpp
//  LearnCPlus
//
//  Created by jun zhao on 2018/12/15.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include "Son.h"

Son::Son(){}

Son::Son(int age):Father(age,1){ //调用父类的构造方法
//    Father::sayHello();d //也可以调用父类的其他方法
}

void Son::sayHello(){
    Father::sayHello(); //调用父类的sayHello方法
    printf("son hello sex:%d age:%d \n",this->getSex(),this->getAge());
}
