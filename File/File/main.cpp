//
//  main.cpp
//  File
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#include <iostream>
#include <fstream>  //file stream
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ofstream of("data.txt");
    of<<"hello world\n";
    of.close();
    
    ifstream inf("data.txt");
    stringbuf buf;
    inf>>&buf;//读取到buf
    
    cout <<buf.str()<<"\n";
    return 0;
}
