//
//  HW22.cpp
//  HW22
//
//  Created by 이동헌 on 2020/01/06.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int input();

int main () {
	int num = input();
	for (int i = 1 ; i <= num ; i++) {
		printf("*");
		if (i % 5 == 0) {
			printf("\n");
		}
	}
}

int input() {
	int num = 10;
	printf("# 정수값을 입력하세요 : ");
	while(scanf("%d", &num) != 1){
		while(getchar() != '\n');
		printf("# 정수값을 입력하세요 : ");
	}
	return num;
}
