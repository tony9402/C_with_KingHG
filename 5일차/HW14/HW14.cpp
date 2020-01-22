//
//  HW14.cpp
//  HW14
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <string>

int main() {
	char string[20];
	printf("문자열 입력 : ");
	scanf("%s", string);

	int num = strlen(string);
	int half = num / 2;
	
	printf("[%*.*s...]\n", num, half, string);
}

