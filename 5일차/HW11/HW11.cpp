//
//  HW11.cpp
//  HW11
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
    int code;
    printf("ASCII Code값을 입력하세요 : ");
    scanf("%d", &code);

    printf("%d는 '%c'의 ASCII Code 입니다", code, (char)code);
}
