//
//  main.c
//  Chapter-10-10.6
//
//  Created by WalkingBoy on 2018/6/11.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>
#define SIZE 3

struct Student {
    char name[10];
    int num;
    int age;
    char addr[15];
    
}stu[SIZE];

int main(int argc, const char * argv[]) {
    FILE *fp;
    char *filename1,*filename2;
    filename1 = "/Users/doc88/Desktop/test.txt";
    filename2 = "/Users/doc88/Desktop/test1.txt";
    if ((fp = fopen(filename1, "rb")) == NULL) {
        printf("open filename1 error\n");
    }
    
    for (int i = 0; i < SIZE; i++) {
        fseek(fp, i*sizeof(struct Student), 0);
        fread(&stu[i], sizeof(struct Student), 1, fp);
        printf("%-10s%-3d%-3d%-10s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].addr);
    }
    fclose(fp);
    return 0;
}
