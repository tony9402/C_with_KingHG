//
//  HW41.cpp
//  HW41
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	char ch;
	while(1) {
		printf("* 영문자 대문자 입력('A' ~ 'Z') : ");
		if(scanf(" %c", &ch) == 0 || ch < 65 || ch > 90) break;
		for(int i = 0; i < ch - 64; i++)
			for(int j = 0; j <= i; j++)
				printf("%c%c", ch - j, i == j ? 10 : 0);
	}
}