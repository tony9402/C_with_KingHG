//
//  HW21.cpp
//  HW21
//
//  Created by 이동헌 on 2020/01/06.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main () {
    double f, sum = 0;
    for (int i = 1; i <= 5; i++) {
    	printf("%d번 학생의 키는? ", i);
    	scanf("%lf", &f);
    	sum += f;
    }
    printf("다섯 명의 평균 키는 : %.1lf\n", sum/5);
}