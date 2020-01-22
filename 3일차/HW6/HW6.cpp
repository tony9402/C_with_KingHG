#include <stdio.h>

int f_input();
void cel_output(double result);

int main() {
	int f_degree = f_input();
	double cal = 5.0 / 9.0 * (f_degree - 32);
	cel_output(cal);
}

int f_input() {
	int f;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &f);
	return f;
}

void cel_output(double result) {
	printf("섭씨 온도는 %.1lf도 입니다.\n", result);
}
