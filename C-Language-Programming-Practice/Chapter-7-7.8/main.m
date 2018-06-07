//
//  main.m
//  Chapter-7-7.8
//
//  Created by WalkingBoy on 2018/5/30.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

void movefun(int N,char a, char b) {
    printf("%d %c -> %c\n", N, a, b);
}

void hanoi(int N, char a, char b, char c) {
    if (N == 1) {
        movefun(N, a, c);
    } else {
        hanoi(N-1, a, c, b);
        movefun(N, a, c);
        hanoi(N-1, b, a, c);
    }
}

void test(int b[15]) {
    printf("%p\n",b);
    for (int i = 0; i < 9; i++) {
        printf("%d ",b[i]);
    }
}

int main(int argc, const char * argv[]) {
//    hanoi(5, 'A', 'B', 'C');
    
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
//    int b[10] = a;
    test(a);
//    for (int i = 0; i < 9; i++) {
//        printf("%d ",b[i]);
//    }
    return 0;
}
