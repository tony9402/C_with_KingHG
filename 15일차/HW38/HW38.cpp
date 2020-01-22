//
//  HW38.cpp
//  HW38
//
//  Created by 이동헌 on 2020/01/19.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int cream = 500, shrimp = 700, coke = 400, money;
	while(1) {
		printf("현재 당신의 소유 금액 입력 : ");
		if(scanf("%d", &money) == 0) break;
		for(int i = cream; i < money; i += 500) {
			for(int j = shrimp; j < money - i; j += 700) {
				if((money - i - j) % coke == 0)
					printf("크림빵(%d)개, 새우깡(%d)봉지, 콜라(%d)병\n", i/500, j/700, (money - i - j) / coke);
			}
		}
		printf("어떻게 구입하시겠습니까?\n\n");
	}
}