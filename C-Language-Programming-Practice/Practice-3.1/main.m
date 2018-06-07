//
//  main.m
//  Practice-3.1
//
//  Created by WalkingBoy on 2018/5/21.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double p,r;
    int n;
    scanf("%lf %n",&r,&n);
    p = pow((1+r*0.01), n);
    printf("p = %lf\n",p);
    return 0;
}
