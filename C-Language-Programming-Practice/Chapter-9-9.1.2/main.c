//
//  main.c
//  Chapter-9-9.1.2
//
//  Created by WalkingBoy on 2018/6/7.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>

struct Date {
    int month;
    int day;
    int year;
};

struct Student {
    int num;
    char name[20];
    char sex;
    int age;
    struct Date birthday;
    char addr[30];
};

int main(int argc, const char * argv[]) {
    
    struct Student std1 = {.name = "zhang fang"};

    printf("%s\n",std1.name);
    
    return 0;
}
