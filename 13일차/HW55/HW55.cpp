//
//  HW55.cpp
//  HW55
//
//  Created by 이동헌 on 2020/01/16.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void reset(int num[][4]);
void print(int num[][4]);

int main() {
	int num_arr[3][4] = {0};
	reset(num_arr);
	print(num_arr);
}

void reset(int num[][4]) {
	srand(time(NULL));
	for(int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++) {
			int random = (rand() % 9)  + 1;
			num[i][j] = random;
		}
}

void print(int num[][4]) {
	int sum = 0;
	for(int i = 0; i < 3; i++) {
		printf("%2d행\t : ", i);
		for (int j = 0; j < 4; j++) {
			printf("%4d", num[i][j]);
			sum += num[i][j];
		}
		printf("\t%d행의 합 : %d\n", i, sum);
		sum = 0;
	}

	printf(" 열의 합 : ");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			sum += num[j][i];
		printf("%4d", sum);
		sum = 0;
	}
}