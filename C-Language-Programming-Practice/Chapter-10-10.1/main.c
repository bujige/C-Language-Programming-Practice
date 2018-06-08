//
//  main.c
//  Chapter-10-10.1
//
//  Created by WalkingBoy on 2018/6/8.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
    char ch,*filename = "/Users/doc88/Desktop/test.txt";
    if ((fp = fopen(filename, "w")) == NULL) {
        printf("open error");
        exit(0);
    }
    ch = getchar();
    
    while ((ch = getchar()) != '#') {
        fputc(ch, fp);
        putchar(ch);
    }
    putchar('\n');
    fclose(fp);
    
    return 0;
}
