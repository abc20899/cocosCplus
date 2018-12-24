//
//  People.hpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <iostream>

class People {

private:
    int age;
    int sex;
    
public:
    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    virtual void sayHello(); //虚函数 多态中  父类指向子类时调用此方法会调用子类中的此方法  子类中也必须声明为虚函数
    virtual void eat()=0; //纯虚函数 抽象函数 由子类实现
};

#endif /* People_hpp */
