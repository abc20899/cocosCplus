//
//  main.cpp
//  Lambda
//
//  Created by jun zhao on 2018/12/17.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
/**
[capture](parameters)->return-type{body}
[](int x, int y) -> int { int z = x + y; return z; }

 [](int x, int y) { return x + y; } // 隐式返回类型
 [](int& x) { ++x; }   // 没有return语句 -> lambda 函数的返回类型是'void'
 []() { ++global_x; }  // 没有参数,仅访问某个全局变量
 []{ ++global_x; }     // 与上一个相同,省略了()
 
Lambda函数可以引用在它之外声明的变量. 这些变量的集合叫做一个闭包. 闭包被定义在Lambda表达式声明中的方括号[]内. 这个机制允许这些变量被按值或按引用捕获.下面这些例子就是:
 []        //未定义变量.试图在Lambda内使用任何外部变量都是错误的.
 [x, &y]   //x 按值捕获, y 按引用捕获.
 [&]       //用到的任何外部变量都隐式按引用捕获
 [=]       //用到的任何外部变量都隐式按值捕获
 [&, x]    //x显式地按值捕获. 其它变量按引用捕获
 [=, &z]   //z按引用捕获. 其它变量按值捕获
 
 */

void lambda1(){
    std::vector<int> some_list;
    int total = 0;
    for (int i=0;i<5;++i){
        some_list.push_back(i);
    }
    //此例计算list中所有元素的总和. 变量total被存为lambda函数闭包的一部分. 因为它是栈变量(局部变量)total的引用,所以可以改变它的值.
    std::for_each(begin(some_list), end(some_list), [&total](int x){
        total += x;
    });
    
    stringstream ss;
    ss<<"total: "<<total<<"\n";
    cout<<ss.str();
}

int main(int argc, const char * argv[]) {
    lambda1();
    return 0;
}
