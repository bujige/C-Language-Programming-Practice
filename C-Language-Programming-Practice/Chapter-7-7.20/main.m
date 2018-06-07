//
//  main.m
//  Chapter-7-7.20
//
//  Created by WalkingBoy on 2018/5/31.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    extern double sin(double x);
    
    printf("%f\n",sin(3.1415926/2));
    
    
    extern void enter_string(char str[]);
    extern void print_string(char str[]);
    char str[80];
    enter_string(str);
    print_string(str);
    return 0;
}
