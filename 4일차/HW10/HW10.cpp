//
//  HW10.cpp
//  HW10
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//

#include <stdio.h>

int main() {
    int x, y;
    printf("두개의 정수를 입력하세요 : ");
    scanf("%d %d", &x, &y);
    double div = (double)x/(double)y;
    printf("%d + %d = %d\n", x, y, x+y);
    printf("%d - %d = %d\n", x, y, x-y);
    printf("%d * %d = %d\n", x, y, x*y);
    printf("%d / %d = %.2lf\n", x, y, div);
}
