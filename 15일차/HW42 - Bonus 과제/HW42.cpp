//
//  HW42.cpp
//  HW42
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	for(int i = 1; i < 10; i++, puts(""))
		for(int j = 2; j < 6; j++)
			printf("%d*%d=%2d\t", j, i, i*j);
	puts("");
	for(int i = 1; i < 10; i++, puts(""))
		for(int j = 6; j < 10; j++)
			printf("%1d*%1d=%2d\t", j, i, i*j);
}

// int main() { //보너스 과제
// 	for(int i = 0; i < 2; i++, puts(""))
// 		for(int j = 1; j < 10; j++, puts(""))
// 			for(int k = 1; k < 5; k++)
// 				printf("%1d*%1d=%2d\t", k+1+4*i, j, j*(k+1+4*i));
// }