//
//  HW39.cpp
//  HW39
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int num = 0, k = 0;
	for(int i = 0; i < 100; i++) {
		printf("%3d%c", num + k, i % 10 == 9 ? '\n' : ' ');
		(i % 10 == 9 && i != 0) ? k = 0, num++ : k += 10;
	}
}