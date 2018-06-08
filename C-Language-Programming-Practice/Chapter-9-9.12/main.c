//
//  main.c
//  Chapter-9-9.12
//
//  Created by WalkingBoy on 2018/6/8.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    enum Color {red,yellow,blue,white,black};
    
    enum Color i,j,k,pri;
    int num = 0;
    for (i = red; i <= black; i++) {
        for (j = red; j <= black; j++) {
            if (i != j) {
                for (k = red; k <= black; k++) {
                    if (i != k && j != k) {
                        num++;
                        printf("%-4d",num);
                        for (int loop = 1; loop <= 3; loop++) {
                            switch (loop) {
                                case 1:
                                    pri = i;
                                    break;
                                case 2:
                                    pri = j;
                                    break;
                                case 3:
                                    pri = k;
                                    break;
                                default:
                                    break;
                            }
                            switch (pri) {
                                case red:
                                    printf("%-10s","red");
                                    break;
                                case yellow:
                                    printf("%-10s","yellow");
                                    break;
                                case blue:
                                    printf("%-10s","blue");
                                    break;
                                case white:
                                    printf("%-10s","white");
                                    break;
                                case black:
                                    printf("%-10s","black");
                                    break;
                                default:
                                    break;
                            }
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    
    return 0;
}
