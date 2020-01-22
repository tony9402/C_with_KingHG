//
//  HW24.cpp
//  HW24
//
//  Created by 이동헌 on 2020/01/06.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int input();
void print(int deep, int cal);
int cal_deep(int deep);

int main() {
	int deep = input();
	int cal = cal_deep(deep);
	print(deep, cal);
}

int input() {
	int deep;
	printf("* 우물의 깊이를 입력하시오(cm단위) : ");
	scanf("%d", &deep);
	return deep;
}

void print(int deep, int cal) {
	printf("  %.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다\n", deep * 0.01, cal);
}

int cal_deep(int deep) {
	int cal = 0;
	while (1) {
		if (deep == 0)
			break;
		deep -= 50;
		cal++;
		if (deep <= 0)
			break;
		deep +=20;
	}
	return cal;
}