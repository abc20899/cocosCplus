//
//  main.cpp
//  ListMap
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>
#include <list>  //http://www.cplusplus.com/reference/list/list/list/
#include <map>

using namespace std;

//文档 cplusplus.com

int main(int argc, const char * argv[]) {
    std::list<std::string> list;
    list.push_back("hehe");
    list.push_back("aadd");
    for (std::list<std::string>::iterator it=list.begin(); it != list.end(); it++) {
        std::cout<<*it<<"\n";
    }
    
    std::map<string, string> map;
    map.insert(pair<string, string>("name","junechiu"));
    map.insert(pair<string, string>("hh","HH"));
    cout<<map.at("name")<<"\n";
    //使用重载运算符
    map["name"] = "zhang san";
    cout<<map["name"]<<"\n"<<map.size()<<"\n";
    
    return 0;
}
