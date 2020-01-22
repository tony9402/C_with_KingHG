//
//  HW3차 동적 메모리.cpp
//  HW3차 동적 메모리
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
	int face, col, row;
	printf("면 수 입력 : ");
	scanf("%d", &face);
	printf("열 수 입력 : ");
	scanf("%d", &col);
	printf("행 수 입력 : ");
	scanf("%d", &row);

	int ***p;
	p = (int***)malloc(sizeof(int**) * face);
	if (p == NULL) return NULL;
	for(int i = 0; i < face; i++) {
		p[i] = (int**)malloc(sizeof(int*) * row);
		if(p[i] == NULL) {
			for(int j = 0; j < i; j++)
				free(p[j]);
			free(p); return NULL;
		}
		for(int j = 0; j < row; j++) {
			p[i][j] = (int*)malloc(sizeof(int) * col);
			if(p[i][j] == NULL) {
				for(int k = 0; k < j; k++)
					free(p[i][k]);
				free(p[i]); return NULL;
			}
		}
	}

	int cnt = 0;
	for(int i = 0; i < face; i++) {
		for(int j = 0; j < row; j++) {
			for(int k = 0; k < col; k++) {
				p[i][j][k] = ++cnt;
			}
		}
	}

	for(int i = 0; i < face; i++) {
		for(int j = 0; j < row; j++) {
			for(int k = 0; k < col; k++) {
				printf("%4d ", p[i][j][k]);
			}
			puts("");
		}
		puts("\n");
	}

	for(int i = 0; i < face; i++) {
		for(int j = 0; j < row; j++) {
			free(p[i][j]);
		}
		free(p[i]);
	}
	free(p);
}

