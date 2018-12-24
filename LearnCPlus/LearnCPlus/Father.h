//
//  Father.hpp
//  LearnCPlus
//
//  Created by jun zhao on 2018/12/15.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#ifndef Father_hpp
#define Father_hpp

#include <iostream>

class Father {
    
private:
    int age;
    int sex;
public:
    Father(); //无参数构造方法
    Father(int age,int sex);
    int getAge();
    int getSex();
    void sayHello();
    
};

#endif /* Father_hpp */
