#include <stdio.h>

double fee_input();
void fee_output(double total_fee);

int main () {
	int basic_fee = 660;
	double fee = fee_input();
	double kw = 88.5;
	double total_fee = (basic_fee + (fee * kw)) * 1.09;

	fee_output(total_fee);
}

double fee_input() {
	double fee;
	printf("전기 사용량을 입력하세요(kw) : ");
	scanf("%lf", &fee);

	return fee;
}

void fee_output(double total_fee) {
	printf("전기 사용 요금은 %lf원 입니다.\n", total_fee);
}