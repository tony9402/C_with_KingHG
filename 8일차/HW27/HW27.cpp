#include <stdio.h>

int input();

int main () {
	int sum = 0, wei;
	while (1) {
		wei = input();
		if (wei >= 150 && wei <= 500) {
			sum++;
			printf("* 현재 달걀의 수 : %d\n", sum);
		}
		else {
			if (wei < 150)
				printf("* 메추리알 가지고 장난하지 마시오~ ^^\n");
			else
				printf("* 타조알 가지고 장난하지 마시오~ ^^\n");
		}
		if (sum == 10) {
			printf("*** 달걀 포장이 끝났습니다.\n");
			break;
		}
	}
}

int input() {
	int wei;
	printf("# 계란의 무게를 입력하세요(단위 : g) : ");
	while (scanf("%d", &wei) != 1) {
		while(getchar() != '\n');
		printf("# 계란의 무게를 입력하세요(단위 : g) : ");
	}
	return wei;
}