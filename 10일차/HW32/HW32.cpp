//
//  HW32.cpp
//  HW32
//
//  Created by 이동헌 on 2020/01/12.
//  Copyright © 2020 이동헌. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int inputUInt(const char *ch);
double inputDouble(const char *ch);
int ipow(int num, int N);
double fpow(double num, int N);

int main() {
	char ichar[] = "* 양의 정수 밑을 입력하시오 : ";
	char dchar[] = "* 양의 실수 밑을 입력하시오 : ";
	char ch[] = "* 양의 승을 입력 하시오 : ";

	int inum = inputUInt(ichar);
	int N = inputUInt(ch);
	int res = ipow(inum, N);
	printf("%d의 %d승은 %d입니다\n\n", inum, N, res);

	double dnum = inputDouble(dchar);
	N = inputUInt(ch);
	double dres = fpow(dnum, N);
	printf("%.2lf의 %d승은 %.3lf입니다\n", dnum, N, dres);

}

int inputUInt(const char *ch) {
	printf(ch);
	int num;
	while (scanf("%d", &num) != 1 || num < 0) {
		while(getchar() != '\n');
	printf(ch);
	}

	return num;
}

double inputDouble(const char *ch) {
	printf(ch);
	double num;
	while (scanf("%lf", &num) != 1 || num < 0) {
		while(getchar() != '\n');
	printf(ch);
	}

	return num;
}

int ipow(int num, int N) {
	int res = pow(num, N);
	return res;
}

double fpow(double num, int N) {
	double res = pow(num, N);
	return res;
}
