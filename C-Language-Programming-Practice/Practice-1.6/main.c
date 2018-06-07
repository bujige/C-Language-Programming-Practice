//
//  main.c
//  Practice-1.6
//
//  Created by WalkingBoy on 2018/5/7.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    int a,b,c;
    while (~scanf("%d%d%d",&a, &b, &c)) {
        int max = a;
        if (max < b) {
            max = b;
        }
        
        if (max < c) {
            max = c;
        }
        
        printf("max = %d\n",max);
    }
    
    
    
    
    return 0;
}
