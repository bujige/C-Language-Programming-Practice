//
//  main.c
//  Chapter-10-10.2
//
//  Created by WalkingBoy on 2018/6/8.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp1, *fp2;
    char ch,*file1, *file2;
    file1 = "/Users/doc88/Desktop/test.txt";
    file2 = "/Users/doc88/Desktop/test1.txt";
    if ((fp1 = fopen(file1, "r")) == NULL) {
        printf("open file1 error");
        exit(1);
    }
    
    if ((fp2 = fopen(file2, "w")) == NULL) {
        printf("open file2 error");
        exit(1);
    }
    
//    while (!feof(fp1)) {
//        ch = fgetc(fp1);
//        fputc(ch, fp2);
//        putchar(ch);
//    }
    
    while (1) {
        ch = fgetc(fp1);
        if ( feof(fp1) ) {
            break;
        }
        fputc(ch, fp2);
        putchar(ch);
    }
    putchar('\n');
    fclose(fp1);
    fclose(fp2);
    
    
    return 0;
}
