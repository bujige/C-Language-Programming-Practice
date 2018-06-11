//
//  main.m
//  test
//
//  Created by WalkingBoy on 2018/5/18.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//
#include <stdio.h>
#include <math.h>


int main(){
    
    int *p,a[5] = {1,3,5,7,9};
    p = a;
    printf("%d a[0] = %d a[1] = %d\n",*p++,a[0],a[1]);
    
    int i = 3;
    printf("%d %d %d\n",i,++i,++i);
    return 0;
}



