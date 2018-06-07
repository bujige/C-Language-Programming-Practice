//
//  main.m
//  Chapter-8-8.26
//
//  Created by WalkingBoy on 2018/6/6.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

float *search(float (*point)[4], int n) {
    float *pt = *(point+n);
    for (int i = 0; i < 4; i++) {
        if(*(pt + i) < 60)
            return pt;
    }
    return NULL;
}

int main(int argc, const char * argv[]) {
    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    
    for (int i = 0; i < 3; i++) {
        float *p = search(score, i);
        if (p == *(score+i)) {
            for (int j = 0; j < 4; j++) {
                printf("%.2lf ",*(p+j));
            }
            printf("\n");
        }
    }
    
    printf("\n");
    return 0;
}
