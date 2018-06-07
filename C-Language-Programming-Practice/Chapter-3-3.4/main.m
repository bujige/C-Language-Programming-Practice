//
//  main.m
//  Chapter-3-3.4
//
//  Created by WalkingBoy on 2018/5/18.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double a,b,c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double p,q;
    p = -b / (2.0*a);
    q = sqrt(b*b - 4*a*c) / (2.0*a);
    
    double x1,x2;
    x1 = p + q;
    x2 = p - q;
    printf("x1 = %lf x2 = %lf\n",x1, x2);
    return 0;
}
