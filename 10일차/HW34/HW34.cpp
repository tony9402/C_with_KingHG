//
//  HW34.cpp
//  HW34
//
//  Created by 이동헌 on 2020/01/12.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

void input(int* check, int* use);
void cal(int* check, int* use, double* total);
void print(int* check, int* use, double* total);

int main() {
	int check, use;
	double total;
	input(&check, &use);
	cal(&check, &use, &total);
	print(&check, &use, &total);


}

void input(int* check, int* use) {
	int check_temp, use_temp;
	printf("* 사용자 코드를 입력하시오 (1 : 가정용 / 2 : 상업용 / 3 : 공업용) : ");
	while(scanf("%d", &check_temp) != 1 || check_temp < 0 || check_temp > 3) {
		while(getchar() != '\n');
	printf("* 사용자 코드를 입력하시오 (1 : 가정용 / 2 : 상업용 / 3 : 공업용) : ");
	}
	
	printf("* 사용량을 입력하시오(ton단위) : ");
	while(scanf("%d", &use_temp) != 1 || use_temp < 0) {
		while(getchar() != '\n');
	printf("* 사용량을 입력하시오(ton단위) : ");
	}
	*check = check_temp;
	*use = use_temp;
}

void cal(int* check, int* use, double* total) {
	int fee;
	switch (*check) {
		case 1: fee = 50; break;
		case 2: fee = 45; break;
		case 3: fee = 30; break;
		}

	int sum = *use * fee;
	*total = (double)sum * 1.05;
}

void print(int* check, int* use, double* total) {
	if (*check == 1) printf("\n# 사용자 코드 : 1(가정용)\n");
	if (*check == 2) printf("\n# 사용자 코드 : 2(상업용)\n");
	if (*check == 3) printf("\n# 사용자 코드 : 3(공업용)\n");

	printf("# 사용량 : %d ton\n", *use);
	printf("# 총수도요금 : %g원\n", *total);
}