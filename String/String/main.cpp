//
//  main.cpp
//  String
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;

//文档 http://www.cplusplus.com/reference/string/string/

int main(int argc, const char * argv[]) {
    
    string str;
    str+="Hello ";
    str+="world";
    cout<<str<<"\n";
    
    stringstream ss;
    ss<<"hello "<<200<<" "<<"world "<<44.6;
    cout<<ss.str()<<"\n"; //ss.str().c_str() 输出c语言字符串
    
    return 0;
}
