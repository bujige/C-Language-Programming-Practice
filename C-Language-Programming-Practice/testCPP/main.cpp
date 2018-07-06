//
//  main.cpp
//  testCPP
//
//  Created by WalkingBoy on 2018/6/26.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <iostream>

void testFun(int &n) {
    printf("%d\n",n);
}

int main(int argc, const char * argv[]) {
    
    int n = 10;
    testFun(n);
    
    return 0;
}
