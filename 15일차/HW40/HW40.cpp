//
//  HW40.cpp
//  HW40
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int num;
	while(1) {
	printf("# 출력 라인수를 입력하시오 : ");
	if(scanf("%d", &num) == 0 || num > 20 || num < 0) break;
		for(int i = 1; i <= num; i++) {
			for(int j = 1; j <= i; j++)
				printf("%c", '*');
			for(int j = 1; j <= (num*2+3)-i*2; j++)
				printf("%c", ' ');
			for(int j = 1; j <= i; j++)
				printf("%c", '*');
			puts("");
		}
	}
}