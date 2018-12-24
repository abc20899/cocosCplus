//
//  main.cpp
//  FunctionPointer
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

//函数指针
class Object;
typedef void(Object::*SayHi)(); //SayHi类型 无返回值 无参数类型
typedef void(Object::*CallaterHandler)(); //延时处理函数 无返回值 无参数类型

void threadFunc(Object *target,CallaterHandler handler,int delay){
    sleep(delay);
    (target->*handler)();  //让目标去执行处理函数
}

void callater(Object *target,CallaterHandler handler,int delay){
    std::thread t(threadFunc,target,handler,delay);
    t.join();
}

#define CH(fp) (CallaterHandler)(&fp) //定义CallaterHandler转换宏

class Object{
public:
    SayHi sayHi; //SayHi类型 函数指针
};

class Hello:public Object {

public:
    Hello(){
//        sayHi = (SayHi)(&Hello::sayHello); //强制转换为 SayHi类型
//        (this->*sayHi)();// 调用sayHi
        
        //延时操作测试
//        callater(this,(CallaterHandler)(&Hello::sayHello), 3);
        callater(this,CH(Hello::sayHello), 3);
    }
    
    void sayHello(){
        printf("hello ...\n");
    }
};

int main(int argc, const char * argv[]) {
    Hello *h = new Hello();
    
    return 0;
}
