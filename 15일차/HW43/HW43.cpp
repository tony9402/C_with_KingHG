//
//  HW43.cpp
//  HW43
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

void input(int *num);
int primeNumber(int number);

int main() {
	int num, res, cnt = 0;
	input(&num);
	for(int i = 2; i <= num; i++) {
		res = primeNumber(i);
		if (res == 1) ++cnt, printf("%5d%c", i, cnt % 5 == 0 ? '\n' : ' ');
	}
	printf("\n1~%d까지의 총 소수는 %d개 입니다\n", num, cnt);
}

void input(int *num) {
	printf("*정수값 하나를 입력하시오 : ");
	while(scanf("%d", num) != 1) {
		while(getchar() != '\n');
	printf("*정수값 하나를 입력하시오 : ");
	}
}

int primeNumber(int number) {
	for(int i = 2; i*i <= number; i++)
		if(number % i == 0) return 0;
	return 1;
}