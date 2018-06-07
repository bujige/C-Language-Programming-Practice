//
//  main.m
//  Chapter-6-6.3.5
//
//  Created by WalkingBoy on 2018/5/29.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    char str1[30] = {"People's Republic of "};
    char str2[] = {"China"};
    
    char str3[] = "abc";
    char str4[] = "abd";
    
   printf("%d\n",strcmp(str3, str4));
//    strcat(str1, str2);
    
//    strcpy(str1, str2);
//    printf("%lu ",strlen(str2));
//    for (int i = 0; i < strlen(str1); i++) {
//        printf("%c",str1[i]);
//    }
    
    printf("%s\n",str1);
    
    return 0;
}
