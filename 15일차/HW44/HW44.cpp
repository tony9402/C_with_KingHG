//
//  HW44.cpp
//  HW44
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

void input(int *start_num, int *end_num);
void even_odd(int *start_num, int *end_num, char* ch);
void print(int *start_num, int *end_num, char* ch);

int main() {
	int start_num, end_num;
	char ch;
	input(&start_num, &end_num);
	even_odd(&start_num, &end_num, &ch);
	print(&start_num, &end_num, &ch);
}

void input(int *start_num, int *end_num) {
	printf("# 시작 값을 입력하세요 : ");
	while(scanf("%d", start_num) != 1 || *start_num < 0) {
		while(getchar() != '\n');
	printf("# 시작 값을 입력하세요 : ");
	}

	printf("# 끝 값을 입력하세요 : ");
	while(scanf("%d", end_num) != 1 || *start_num >= *end_num) {
		while(getchar() != '\n');
	printf("# 끝 값을 입력하세요 : ");
	}
}

void even_odd(int *start_num, int *end_num, char* ch) {
	printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", *start_num, *end_num);
	while(scanf(" %c", ch) != 1 || *ch == 101 ? 0 : *ch == 111 ? 0 : 1) {
		while(getchar() != '\n');
	printf("* %d~%d 까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", *start_num, *end_num);
	}
}

void print(int *start_num, int *end_num, char* ch) {
	int even = 0, odd = 0;
	printf("  %d~%d까지의 %s(", *start_num, *end_num, *ch == 101 ? "짝수" : "홀수");
	for(int i = *start_num; i <= *end_num; i++) {
		(i % 2 ? odd : even) += i;
		if(*ch == 101 && i % 2 == 0)printf("%d ", i);
		if(*ch == 111 && i % 2) printf("%d ", i);
	}
	printf(")의 합은 %d입니다\n", *ch == 101 ? even : odd);
}