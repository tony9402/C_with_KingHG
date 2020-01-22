//
//  HW23.cpp
//  HW23
//
//  Created by 이동헌 on 2020/01/06.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main () {
	int x, y;
	while(1) {
		printf("# 두개의 정수를 입력하세요 : ");
		if (scanf("%d %d", &x, &y) != 2)
			break;
		if (y > x) {
			x^=y^=x^=y;
		}
	printf("%d - %d = %d\n", x, y, x - y);
	}
}