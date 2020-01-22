//
//  HW33.cpp
//  HW33
//
//  Created by 이동헌 on 2020/01/12.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int menu();
unsigned char openFan(unsigned char fan_status);
unsigned char offFan(unsigned char fan_status);
unsigned char reverseFan(unsigned char fan_num);
void displayFan(unsigned char fan_num);

int main() {
	unsigned char fan_status = 0;
	while (1) {
		int check = menu();
		if (check == 1)
			fan_status = openFan(fan_status);
		if (check == 2)
			fan_status = offFan(fan_status);
		if (check == 3) 
			fan_status = reverseFan(fan_status);
		if (check == 4)
			break;
		displayFan(fan_status);
	}
}

int menu() {
	printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
	int check;
	while(scanf("%d", &check) != 1 || check > 4 || check < 0) {
		while(getchar() != '\n');
		printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
	}
	return check;
}

unsigned char openFan(unsigned char fan_num) {
	printf("---------------------------------------------------------------\n");
	printf("                   Fan 열기 작업 실행 화면\n");
	printf("---------------------------------------------------------------\n");
	printf("* OPEN할 FAN번호를 입력하시오(1-8) : ");
	int num;
	while(scanf("%d", &num) != 1 || num > 8 || num < 0) {
		while(getchar() != '\n');
		printf("* OPEN할 FAN번호를 입력하시오(1-8) : ");
	}
	fan_num = fan_num | (1 << (num - 1));
	return fan_num;
}

unsigned char offFan(unsigned char fan_num) {
	printf("---------------------------------------------------------------\n");
	printf("                   Fan 닫기 작업 실행 화면\n");
	printf("---------------------------------------------------------------\n");
	printf("* CLOSE할 FAN번호를 입력하시오(1-8) : ");
	int num;
	while(scanf("%d", &num) != 1 || num > 8 || num < 0) {
		while(getchar() != '\n');
		printf("* CLOSE할 FAN번호를 입력하시오(1-8) : ");
	}
	fan_num = fan_num & ~(1 << (num - 1));
	return fan_num;
}

unsigned char reverseFan(unsigned char fan_num) {
	printf("---------------------------------------------------------------\n");
	printf("                 Fan 전체 전환 작업 실행 화면\n");
	printf("---------------------------------------------------------------\n");
	fan_num = ~fan_num;
	return fan_num;
}

void displayFan(unsigned char fan_num) {
	printf("---------------------------------------------------------------\n");
	for (int i = 8; i > 0; i--) {
		printf("%d번 FAN  ", i);
	}
	printf("\n");
	unsigned char y = 1 << 7;
	for(unsigned char i=y ; i ;i>>=1)
		printf("%6s   ", (fan_num & i) ? "ON" : "OFF");
	printf("\n");
	printf("---------------------------------------------------------------\n\n");
} 