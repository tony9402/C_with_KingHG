//
//  HW47.cpp
//  HW47
//
//  Created by 이동헌 on 2020/01/14.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

void input(double* arr);
double max_num(double* arr);
double min_num(double* arr);
void print(double max_num, double min_num);


int main() {
	double arr[5] = {};
	double max, min;
	input(arr);
	max = max_num(arr);
	min = min_num(arr);
	print(max, min);

}

void input(double* arr) {
	double num;
	for(int i = 0; i < 5; i++) {
		printf("%d 번 방 값 : ", i);
		while(scanf("%lf", &num) != 1) {
			while(getchar() != '\n');
			printf("%d 번 방 값 : ", i);
		}
		arr[i] = num;
	}
}

double max_num(double* arr) {
	double num = arr[0];
	for(int i = 0; i < 5; i++) {
		if(num < arr[i])
			num = arr[i];
	}
	return num;
}

double min_num(double* arr) {
	double num = arr[0];
	for(int i = 0; i < 5; i++) {
		if(num > arr[i])
			num = arr[i];
	}
	return num;
}

void print(double max_num, double min_num) {
	printf("\n가장 큰 값 : %.2lf\n", max_num);
	printf("가장 작은 값 : %.2lf", min_num);
}

//#define MAX(x,y) ((x) > (y) ? (x) : (y))
// double getMax(double *arr){
// 	double Max = arr[0];
// 	for(int i=0;i<5;i++)
// 		Max = MAX(Max,arr[i]);
// 	return Max;
// }

// double getMin(double *arr){
// 	double Min = arr[0];
// 	for(int i=0;i<5;i++)
// 		Min = Min > arr[i] ? arr[i] : Min;
// 	return Min;
// }