//
//  main.c
//  Chapter-8-8.29
//
//  Created by WalkingBoy on 2018/6/6.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5] = {3,2,1,5,3};
    int *num[] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
    int **p;
    p = num;
    for (int i = 0; i < 5; i++) {
        printf("%d ",**p);
        p++;
    }
    printf("\n");
    return 0;
}
