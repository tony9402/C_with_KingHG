//
//  HW19.cpp
//  HW19
//
//  Created by 이동헌 on 2020/01/06.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

void print(int cal, int year);
int input();
int year_cal(int year);

int main() {
	int year = input();
	int cal = year_cal(year);
	print(cal, year);
}

int input() {
	int year;
	printf("년도를 입력하세요 : ");
	scanf("%d", &year);
	
	return year;

}

int year_cal(int year) {
	return year % 4 ? 0 : year % 100 ? 1 : year % 400 ? 0 : 1;
}

void print(int cal, int year) {
	if (cal == 1) 
		printf("%d년은 윤년(Leap year)입니다.\n", year);
	else
		printf("%d년은 평년(Common year)입니다.\n", year);
}