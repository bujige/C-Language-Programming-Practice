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
    
    typedef struct{
        int day;
        int month;
        int year;
    }Date;
    
    Date a;
    a.day = 1;
    a.month = 1;
    a.year = 1;
    
    typedef char * String;
    String str = "dfadfa";
    printf("%s\n",str);
    printf("%d %d %d\n",a.year,a.month,a.day);
    return 0;
}



