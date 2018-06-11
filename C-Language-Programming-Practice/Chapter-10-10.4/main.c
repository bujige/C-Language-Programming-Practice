//
//  main.c
//  Chapter-10-10.4
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

void save() {
    FILE *fp;
    char *filename = "/Users/doc88/Desktop/test.txt";
    if ((fp = fopen(filename, "wb")) == NULL) {
        printf("open error");
    }
    
    for (int i = 0; i < SIZE; i++) {
        if (fwrite(&stu[i], sizeof(struct Student), 1, fp) != 1) {
            printf("file write error\n");
        }
    }
    fclose(fp);
}

void readStu() {
    FILE *fp;
    char *filename = "/Users/doc88/Desktop/test.txt";
    if ((fp = fopen(filename, "rb")) == NULL) {
        printf("open error");
    }
    
    for (int i = 0; i < SIZE; i++) {
        if (fread(&stu[i], sizeof(struct Student), 1, fp) != 1) {
            printf("file read error\n");
        }
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%-10s%3d%3d%-15s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].addr);
    }
    fclose(fp);
}

int main(int argc, const char * argv[]) {
    
    
//    for (int i = 0; i < SIZE; i++) {
//        scanf("%s%d%d%s",stu[i].name,&stu[i].num,&stu[i].age, stu[i].addr);
//    }
//    save();
    readStu();
    return 0;
}
