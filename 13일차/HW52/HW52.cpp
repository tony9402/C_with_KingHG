//
//  HW52.cpp
//  HW52
//
//  Created by 이동헌 on 2020/01/16.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

void input(int* num_arr);
void print(int* num_arr, const char* ch);
void sort(int* num_arr);


int main() {
	int num[1000] = {};
	input(num);
	print(num, "# 소트 전");
	sort(num);
	print(num, "# 소트 후");
}

void input(int* num_arr) {
	int num;
	for(int i = 0; i < 1000; i++) {
		printf("* %d번째 데이터 : ", i);
		while(scanf("%d", &num) != 1) {
			while(getchar() != '\n');
		printf("* %d번째 데이터 : ", i);
		}
		num_arr[i] = num;
		if (num == 0) break;
	}
}

void print(int* num_arr, const char* ch) {
	printf("%s 데이터 : ", ch);
	for(int i = 0; num_arr[i] != 0; i++)
		printf("%d%c", num_arr[i], num_arr[i+1] == 0 ? '\n' : ' ');
}

void sort(int* num_arr) {
	for(int i = 0; num_arr[i] != 0; i++)
		for (int j = i + 1; num_arr[j] != 0; j++)
			if (num_arr[i] > num_arr[j]) {
				int temp = num_arr[i];
				num_arr[i] = num_arr[j];
				num_arr[j] = temp;
			}
}