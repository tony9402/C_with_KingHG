//
//  HW54.cpp
//  HW54
//
//  Created by 이동헌 on 2020/01/16.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <string.h>

int input(char* ch);
void print(char* ch, int sum);
int cal(char* ch);


int main() {
	char ch[100] = {};
	while (input(ch)) {
		int num = cal(ch);
		print(ch, num);
	}
}

int input(char* ch) {
	printf("# 문장을 입력하시오 : ");
	gets(ch);
	if (strcmp(ch, "end") == 0) return 0;
	return 1;
}

void print(char* ch, int sum) {
	printf("  \"%s\" 내의 총 숫자는 [%d]입니다\n\n", ch, sum);
}

int cal(char* ch) {
	int sum = 0, cnt = 1, num[100] = {0}, k = 0;
	for(int i = strlen(ch) - 1; i >= 0; i--) {
		if (ch[i] >= 48 && ch[i] <= 57)
			num[k] = (ch[i] - 48) * cnt, cnt *= 10, k++;
		else cnt = 1;
	}
	for(int j = 0; j <= k; j++)
		sum += num[j];
	return sum;
}
