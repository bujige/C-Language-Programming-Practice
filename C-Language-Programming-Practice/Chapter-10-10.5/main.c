//
//  main.c
//  Chapter-10-10.5
//
//  Created by WalkingBoy on 2018/6/11.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp1,*fp2;
    char *filename1,*filename2;
    filename1 = "/Users/doc88/Desktop/test.txt";
    filename2 = "/Users/doc88/Desktop/test1.txt";
    if ((fp1 = fopen(filename1, "r")) == NULL) {
        printf("open filename1 error");
    }
    if ((fp2 = fopen(filename2, "w")) == NULL) {
        printf("open filename2 error");
    }
    
    while (1) {
        putchar(getc(fp1));
        if (feof(fp1)) {
            break;
        }
    }
    putchar('\n');
    rewind(fp1);
    while (1) {
        putc(getc(fp1), fp2);
        if (feof(fp1)) {
            break;
        }
    }
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}
