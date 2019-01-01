//
//  main.cpp
//  functionBind
//
//  Created by jun zhao on 2018/12/24.
//  Copyright © 2018年 jun zhao. All rights reserved.
//
/**
 对可调用实体(函数指针，仿函数，lambda表达式)的一种封装，这种封装能起到预绑定参数的作用。
 
 */
#include <iostream>
using namespace std;

void golbal_fuc(int a) { //全局函数
    cout<<"golbal_fuc "<<"a:"<<a<<"\n";
}

auto lambda = [](int a){ //lambda表达式
    cout<<"lambda "<<"a :"<<a<<"\n";
};

class ClassA{
public:
    void number_func(int a){ //类成员函数
        cout<<"number_func "<<"a:"<<a<<"\n";
    };
    
    static void static_number_func(int a){ //类静态函数
        cout<<"static_number_func "<<"a:"<<a<<"\n";
    };
};

class Functor{  //仿函数
public:
    void operator()(int a){
        cout<<"call operator() "<<"a:"<<a<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    function<void(int)> func; //定义function<void(int)>类型
    func = golbal_fuc;
    func(10);
    
    auto bindGlobalFunc = bind(golbal_fuc, 10);  //绑定函数和参数
    bindGlobalFunc(); //调用
    
    Functor testFunctor;
    func = testFunctor;
    func(12);
    auto bindGlobalFunctor = bind(testFunctor, 10);
    bindGlobalFunctor();
    
    //bind(_Fp&& __f, _BoundArgs&&... __bound_args)
    ClassA aObject;
    func = bind(&ClassA::number_func,&aObject,placeholders::_1);
    func(10);
    auto bindClassMemberFunc = std::bind(&ClassA::number_func,&aObject, 13);
    bindClassMemberFunc();
    
    func = std::bind(&ClassA::static_number_func, std::placeholders::_1);
    func(14);
    auto bindClassStaticFunc = std::bind(&ClassA::static_number_func, 14);
    bindClassStaticFunc();
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
