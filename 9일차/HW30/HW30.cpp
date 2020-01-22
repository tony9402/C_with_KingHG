#include <stdio.h>

int main () {
	int num, cal;
	printf("* 10진수 정수를 입력하시오 : ");
	while (scanf("%d", &num) != 1)
		while (getchar() != '\n')
			printf("* 10진수 정수를 입력하시오 : ");
	printf("%d(10) = ", num);
	for (int i = 31; i >= 0; i--) {
		cal = 1 << i;
		printf("%d", num & cal ? 1 : 0);
	}
	printf("(2)\n");
}