//
//  main.m
//  Chapter-6-6.3
//
//  Created by WalkingBoy on 2018/5/29.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    int a[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < 9 ; j++) {
        for (int i = 0; i < 9 - j; i++) {
            if (a[i] > a[i+1]) {
                int t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%4d",a[i]);
    }
    printf("\n");
    return 0;
}
