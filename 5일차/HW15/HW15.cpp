//
//  HW15.cpp
//  HW15
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

double wei_input();
double hei_input();
double bmi_cal(double wei, double hei);
void bmi_print(double bmi);

int main() {
	double wei = wei_input();
	double hei = hei_input();
	double bmi = bmi_cal(wei, hei);

	bmi_print(bmi);

}

double wei_input() {
	double wei;
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%lf", &wei);
	return wei;
}

double hei_input() {
	double hei;
	printf("키를 입력하세요(m) : ");
	scanf("%lf", &hei);
	return hei;
}

void bmi_print(double bmi) {

	if (bmi < 18.5) {
		printf("당신의 BMI는 %.1lf으로 저체중입니다\n", bmi);
	}
	else {
		if (bmi <= 18.5 && 25.0 > bmi) {
			printf("당신의 BMI는 %.1lf으로 정상체중입니다\n", bmi);
		}
		else {
			if (bmi <= 25.0 && 30.0 > bmi) {
				printf("당신의 BMI는%.1lf으로 과체중입니다\n", bmi);
			}
			else {
				if (bmi <= 30.0 && 40.0 > bmi) {
					printf("당신의 BMI는%.1lf으로 비만입니다\n", bmi);
				}
				else {
					printf("당신의 BMI는%.1lf으로 고도비만입니다\n", bmi);
				}
			}
		}
	}
}

double bmi_cal(double wei, double hei) {
	double bmi = wei / (hei * hei);
	return bmi;
}