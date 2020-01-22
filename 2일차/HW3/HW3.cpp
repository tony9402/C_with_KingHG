#include <stdio.h>

int main() {

	int clock = 54321;
	int hour = clock / 3600;
	int totalClock = clock - (3600 * hour);
	int min = totalClock / 60;
	int sec = totalClock - (60 * min);

	printf("%d초는 %d시간 %d분 %d초 입니다\n", clock, hour, min, sec);
}