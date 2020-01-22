//
//  HW17.cpp
//  HW17
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	char name[20], gender;
	double hei;
	printf("# 성명입력 : ");
	gets(name);
	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &hei);
	printf("# 성별입력 (M/F) : ");
	scanf("%s", &gender);

	if(gender == 'F') {
		printf("%s씨의 키는 %.2lfcm 이고 여성입니다. \n", name, hei);
	}
	else {
		printf("%s씨의 키는 %.2lfcm 이고 남성입니다. \n", name, hei);
	}
}