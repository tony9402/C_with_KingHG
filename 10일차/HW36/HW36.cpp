//
//  HW36.cpp
//  HW36
//
//  Created by 이동헌 on 2020/01/12.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int num, total, temp = 0, x = 0, y = 1;
	printf("피보나치 수열의 항수를 입력하시오 : ");
	while(scanf("%d", &num) != 1 || num <= 0) {
		while(getchar() != '\n');
	printf("피보나치 수열의 항수를 입력하시오 : ");
	}
	for(int i = 1; i <= num; i++) {
		total = x + y, y = x, x = total, temp += total;
		printf("%d %s", total, i < num ? "+ " : "=");
	}
	printf(" %d\n", temp);
}