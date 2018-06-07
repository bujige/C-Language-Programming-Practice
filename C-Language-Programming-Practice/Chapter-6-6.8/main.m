//
//  main.m
//  Chapter-6-6.8
//
//  Created by WalkingBoy on 2018/5/29.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    char str[81];
    
    gets(str);
    
    int num = 0, word = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            word = 0;
        } else if(word == 0) {
            word = 1;
            num++;
        }
    }
    
    printf("%d\n",num);
    return 0;
}
