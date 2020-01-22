#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int input();
void print(int up, int down);

int main() {
  	int up = 0, down = 100, num = 0, recv;
	srand(time(NULL));
	int random = (rand() % 100)  + 1;
	while (1) {
		recv = input();
		if (recv == random)
			break;
		while (recv < up || recv > down) {
			printf("잘못 입력한 값입니다\n");
			recv = input();
		}
		if (up < recv && recv < random)
			up = recv;
		else if(random < recv && recv < down)
			down = recv;
		print(up, down);
		num++;
	}
	printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다\n", num + 1);

}

int input() {
	int recv;
	printf("# 숫자를 입력하시오 : ");
	while(scanf("%d", &recv) != 1) {
		while(getchar() != '\n');
		printf("숫자만 입력하시오 : ");
	}
	return recv;
}

void print(int up, int down) {
	printf("%d 보다는 크고 %d 보다는 작습니다\n", up, down);
}