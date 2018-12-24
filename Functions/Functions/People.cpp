//
//  People.cpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include "People.h"

People::People(){}

People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int People::getSex(){
    return this->age;
}

int People::getAge(){
    return this->age;
}

void People::sayHello(){
    printf("people say hello");
}

