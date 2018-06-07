//
//  main.c
//  Chapter-9-9.9
//
//  Created by WalkingBoy on 2018/6/7.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Student {
    long num;
    float score;
    struct Student *next;
};

void print(struct Student *std) {
    while (std != NULL) {
        printf("num = %ld score = %.2lf\n",std->num,std->score);
        std = std->next;
    }
}

int main(int argc, const char * argv[]) {
    
    struct Student *p1, *p2, *head = NULL;
    
    p1 = (struct Student *)malloc(sizeof(struct Student));
    p2 = (struct Student *)malloc(sizeof(struct Student));
    int nodeNum = 0;
    while (~scanf("%ld",&p1->num) && p1->num != 0) {
        scanf("%f",&p1->score);
        nodeNum++;
        if (nodeNum == 1) {
            head = p1;
        } else {
            p2->next = p1;
        }
        
        p2 = p1;
        p1 = (struct Student *)malloc(sizeof(struct Student));
    }
    p2->next = NULL;
    
    print(head);
    
    return 0;
}
