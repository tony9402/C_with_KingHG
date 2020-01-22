//
//  HW56.cpp
//  HW56
//
//  Created by 이동헌 on 2020/01/18.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void numarr_reset(int numarr[][5]);
void print(int numarr[][5], int* sumarr);
void sum(int numarr[][5], int* sumarr);

int main() {
	int numarr[5][5], sumarr[3];
	numarr_reset(numarr);
	sum(numarr, sumarr);
	print(numarr, sumarr);
}

void numarr_reset(int numarr[][5]) {
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int random = (rand() % 20)  + 1;
			numarr[i][j] = random;
		}
	}
}

void print(int numarr[][5], int* sumarr) {
	for(int i = 0; i < 5; i++) {
		printf("%d번 행 : ", i);
		for (int j = 0; j < 5; j++)
			printf("%4d%c", numarr[i][j], j == 4 ? '\n' : ' ');
	}
	for (int i = 0; i < 3; i++)
		printf("sum%d = %d\n", i+1, sumarr[i]);
}

void sum(int numarr[][5], int* sumarr) {
	int sum = 0, sum1 = 0, sum2 = 0;
	for(int i = 0; i < 5; i++) {
		sum += numarr[i][i], sumarr[0] = sum;
		for (int j = 0; j < i; j++)
			sum2 += numarr[i][j], sumarr[2] = sum2;
		for (int j = i + 1; j < 5; j++)
			sum1 += numarr[i][j], sumarr[1] = sum1;
	}
}
/*
void answer(int arr[][5], int *sumarr){
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			sumarr[i == j ? 0 : i > j ? 2 : 1] += arr[i][j];
}*/