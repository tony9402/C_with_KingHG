//
//  HW59.cpp
//  HW59
//
//  Created by 이동헌 on 2020/01/18.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int num_arr[1000], num;
	while(1) {
		printf("* 입력할 숫자의 개수 : ");
		if(scanf("%d", &num) == 0) break;
		int sum = 0, check[10001] = {0};
		printf("* 숫자 입력 : ");
		for(int i = 0; i < num; i++) {
			while(scanf("%d", &num_arr[i]) != 1 || num_arr[i] < 1 || num_arr[i] > 10000)
				while(getchar() != '\n');
			if(check[num_arr[i]]) continue;
			check[num_arr[i]] = 1, sum++;
		}
		printf("  서로 다른 수 의 개수 : %d\n\n", sum);
	}
}