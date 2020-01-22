#include <stdio.h>

int inputUInt();
int transNumber(int num);
void print(int ans);

int main() {
	int ans = 0;
	printf("시작 값(P1) : ");
	int P1 = inputUInt();
	
	printf("끝 값(P2) : ");
	int P2 = inputUInt();

	printf("고집 수(N) : ");
	int N = inputUInt();

	for(int i = P1; i <= P2; i++){
		int count = 0;
		int now = i;
		while(now >= 10){
			count++;
			now = transNumber(now);
		}
		if(count == N){
			printf("%d\n", i);
			ans++;
		}
	}
	print(ans);
}

int inputUInt() {
	int num;
	while (scanf("%d", &num) != 1 || num < 0 || num > 10000) {
		while(getchar() != '\n');
	}
	return num;
}

int transNumber(int num) {
	int cal = 1;
	while(num){
		cal = cal * (num % 10);
		num /= 10;
	}
	return cal;
}

void print(int ans) {
	printf("총 개수 : %d개", ans);
}