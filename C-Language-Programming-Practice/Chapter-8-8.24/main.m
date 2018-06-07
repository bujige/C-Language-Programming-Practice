//
//  main.m
//  Chapter-8-8.24
//
//  Created by WalkingBoy on 2018/6/6.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

int max (int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int min (int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int add(int a, int b) {
    return a + b;
}

void fun(int a, int b, int (*p)(int, int)) {
    int result = (*p)(a,b);
    printf("result = %d\n",result);
}

int main(int argc, const char * argv[]) {
    
    int flag,a,b;
    printf("please choice one operation:\n");
    while (~scanf("%d", &flag)) {
        printf("please input two numbers:\n");
        scanf("%d %d", &a, &b);
        switch (flag) {
            case 1:
                fun(a, b, max);
                break;
            case 2:
                fun(a, b, min);
                break;
            case 3:
                fun(a, b, add);
                break;
            default:
                break;
        }
        printf("please choice one operation:\n");
    }
    
    return 0;
}
