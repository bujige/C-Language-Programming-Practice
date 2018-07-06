//
//  main.m
//  test
//
//  Created by WalkingBoy on 2018/5/18.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void testFun(int *n) {
    printf("%d\n",*n);
}

int main()
{
    int n = 10;
    testFun(&n);
    
    //    int count(char *str);
    //    long *getNum(char *str, int n);
    //    void print(long num[], int n);
    //    char str[50];
    //    long *nums;
    //    printf("Please enter a string:");
    //    gets(str);
    //    int len = count(str);
    //    printf("There are %d numbers in the line, they are:\n", len);
    //    nums = getNum(str, len);
    //    print(nums, len);
    
    return 0;
}



int count(char *str){
    int count = 0;
    bool flag = false;
    char c;
    while((c=*str++)!='\0'){
        if(c>='0' && c<='9'){
            if(!flag){
                count++;
                flag = true;
            }
        }else{
            flag = false;
        }
    }
    return count;
}

long *getNum(char *str, int n){
    void print(long num[], int n);
    long numArr[n], num=0;
    long *pn;
    pn = numArr;
    int i=0;
    char c;
    bool flag = false;
    while((c=*str++)!='\0'){
        if(c>='0' && c<='9'){
            num = num*10+(c-'0');
            flag = true;
        }else if(flag){
            numArr[i++] = num;
            num = 0;
            flag = false;
        }
    }
    if(flag){
        numArr[i++]=num;
    }
    print(pn, n);
    return pn;
}

void print(long num[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}


