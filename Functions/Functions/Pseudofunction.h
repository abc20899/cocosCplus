//
//  Pseudofunction.hpp
//  Functions
//
//  Created by jun zhao on 2018/12/16.
//  Copyright © 2018年 jun zhao. All rights reserved.
//

#ifndef Pseudofunction_hpp
#define Pseudofunction_hpp

#include <stdio.h>

class PsCallback {
    
    
public:
    void operator()(){
        printf("PsCallback 执行了...\n");
    }
};

#endif /* Pseudofunction_hpp */
