//
//  HW16.cpp
//  HW16
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int sta_input();
int cal(int station);
void cal_print(int fee);


int main() {
	int station = sta_input();
	int fee = cal(station);
	cal_print(fee);
}

int sta_input() {
	int station;
	printf("역수를 입력하세요 : ");
	scanf("%d", &station);
	return station;
}

int cal(int station) {
	int extra_fee = 100, double_fee = 200, total;
	if (station <= 5) { total = 600; }
	else {
		if (station < 10) { total = 800; }
		else {
			int cut = (station - 10) / 4;	
			int rest = (station - 10) - (cut * 4);
			if (rest == 0) { total = 800 + (cut * double_fee); }
			else if (rest == 1 || rest == 2) {
				total = 800 + (cut * double_fee) + extra_fee;
			}
			else {
				total = 800 + (cut * double_fee) + double_fee;
			}
		}
	}
	return total;
}

void cal_print(int fee) {
	printf("요금 : %d\n", fee);
}