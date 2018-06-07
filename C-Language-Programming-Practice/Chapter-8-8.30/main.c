//
//  main.c
//  Chapter-8-8.30
//
//  Created by WalkingBoy on 2018/6/6.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void check(int *p) {
    for (int i = 0; i < 5; i++) {
        if (*(p+i) < 60) {
            printf("%d ",*(p+i));
        }
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    
//    int *p;
//    p = (int *)malloc(sizeof(int)*5);
//    for (int i = 0; i < 5; i++) {
//        scanf("%d",p+i);
//    }
//    check(p);
//    free(p);

    int **p1,*p,a[10] = {1,2,3,4,5,6,7,8,9,0};
    p = a;
    p1 = &p;
    for (int i = 0; i < 10; i++) {
        printf("%d ",*(*p1+i));
    }
    return 0;
}
