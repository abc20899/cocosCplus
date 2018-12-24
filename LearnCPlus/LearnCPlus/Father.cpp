//
//  Father.cpp
//  LearnCPlus
//
//  Created by jun zhao on 2018/12/15.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include "Father.h"

Father::Father(){ //无参数构造方法
    this->age = 10;
    this->sex = 1;
}

Father::Father(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int Father::getAge(){
    return this->age;
}

int Father::getSex(){
    return this->sex;
}

void Father::sayHello(){
    printf("father hello sex:%d age:%d \n",this->sex,this->age);
}
