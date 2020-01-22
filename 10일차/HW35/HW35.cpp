//
//  HW35.cpp
//  HW35
//
//  Created by 이동헌 on 2020/01/12.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int num, sum = 0;
	for (int i = 1; i < 6; i++) {
		printf("0 보다 큰수를 입력하시오(%d 번째) : ", i);
		while(scanf("%d", &num) != 1 || num <= 0) {
			while(getchar() != '\n');
		printf("0 보다 큰수를 입력하시오(%d 번째) : ", i);
		}
	sum += num;
	}
	printf("입력된 값의 총 합 : %d\n", sum);
}