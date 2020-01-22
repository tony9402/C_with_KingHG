//
//  HW37.cpp
//  HW37
//
//  Created by 이동헌 on 2020/01/12.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int num, total = 0;
	printf("* 기사의 근무일수를 입력하시오 : ");
	while(scanf("%d", &num) != 1 || num <= 0) {
		while(getchar() != '\n');
	printf("* 기사의 근무일수를 입력하시오 : ");
	}
	int cnt = num;
	for (int i = 1; i <= num; i++) {
		for (int j = i; j * cnt != 0; j--, cnt--)
			total += i;
	}
	printf("  근무일 : %d일 / 총 금화 수 : %d 개\n", num, total);
}