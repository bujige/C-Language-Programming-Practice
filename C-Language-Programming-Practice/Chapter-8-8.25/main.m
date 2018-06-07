//
//  main.m
//  Chapter-8-8.25
//
//  Created by WalkingBoy on 2018/6/6.
//  Copyright © 2018年 Walking Boy. All rights reserved.
//

#import <Foundation/Foundation.h>

float *search(float (*point)[4], int n) {
    float *pt = *(point+n);
    return pt;
}



int main(int argc, const char * argv[]) {
    
    float score[][4] = {{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    int k;
    printf("please input student case:\n");
    scanf("%d",&k);
    float *p = search(score, k);
    for (int i = 0; i < 4; i++) {
        printf("%.0lf ",*(p+i));
    }
    printf("\n");
    return 0;
}
