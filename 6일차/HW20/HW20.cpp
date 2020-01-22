//
//  HW20.cpp
//  HW20
//
//  Created by 이동헌 on 2020/01/06.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int input();
void print(int tax, int total);
int tax_cal(int fee);
int total_cal (int hour);


int main() {
	int hour = input();
	int total = total_cal(hour);
	int tax = tax_cal(total);
	print(tax, total);

}

int input() {
	int hour;
	printf("* 1주일간의 근무시간을 입력하시오 : ");
	scanf("%d", &hour);
	return hour;
}

void print(int tax, int total) {
	printf("# 총수입 : %6d원\n", total);
	printf("# 세  금 : %6d원\n", tax);
	printf("# 실수입 : %6d원\n", total - tax);
}

int tax_cal(int fee) {
	int tax = fee * 0.15;
	if(fee > 100000)
		tax = (100000 * 0.15) + (fee - 100000) * 0.25;
	return tax;
}

int total_cal (int hour) {
	int basic_fee = 3000;
	int total = hour * basic_fee;
	if (hour > 40)
		total = 120000 + ((hour - 40) * 1.5 * basic_fee);
	return total;
}