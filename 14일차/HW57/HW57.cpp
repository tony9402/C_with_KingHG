//
//  HW57.cpp
//  HW57
//
//  Created by 이동헌 on 2020/01/18.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <string.h>

void input(char str[][20]);
void print(char str[][20], int n);
void sort(char str[][20]);

int main() {
	char str[5][20];
	input(str);
	sort(str);
	print(str, 5);
}

void input(char str[][20]) {
	for(int i = 0; i < 5; i++) {
		printf("# %d번 문자열을 입력하시오 : ", i);
		scanf("%s", str[i]);
	}
}

void print(char str[][20], int n) {
	for(int i = 0; i < n; i++)
		printf("str[%d] = %s  %c  %c\n", i, str[i], str[i][0], str[i][strlen(str[i]) - 1]);
}

void sort(char str[][20]) {
	char temp[20];
	for(int i = 0; i < 5; i++)
		for(int j = i; j < 5; j++)
			if(strcmp(str[i], str[j]) > 0)
				strcpy(temp, str[i]), strcpy(str[i], str[j]), strcpy(str[j], temp);
}