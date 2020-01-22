//
//  HW9.cpp
//  HW9
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//

#include <stdio.h>

int num_input();

int main() {
    int number = num_input();
    printf("입력된 값은 8진수로 0%o입니다.\n", number);
    printf("입력된 값은 16진수로 0x%x입니다.\n", number);
}

int num_input() {
    int num;
    printf("정수값을 입력하세요 : ");
    scanf("%d", &num);
    return num;
}
