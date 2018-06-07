//
//  main.c
//  Chapter-8-8.28
//
//  Created by WalkingBoy on 2018/6/6.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char *name[] = {"adfadfas","adfadsf","dfadfad","dafadf","dadfadf"};
    char **p;
    
    for (int i = 0; i < 5; i++) {
        p = name+i;
        printf("%s\n",*p);
        //  p == name+i,    指向 name[i]
        // *p == name[i],   指向 字符串
    }
    
    return 0;
}
