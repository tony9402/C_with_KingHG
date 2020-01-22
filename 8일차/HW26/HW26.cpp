#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int input();
int print (int num, int random);


int main() {
	srand(time(NULL));
	//int random = (rand() % 3)  + 1;
	int num;
	int win = 0, drew = 0;
	int check = 0;
	while (check != 2) {
		int random = (rand() % 3)  + 1;
		num = input();
		check = print(num, random);
		if (check == 1)
			win++;
		else if (check == 3)
			drew++;
	}
	printf("게임결과 : %d 승 %d 무\n", win, drew);
}

int input() {
	int num = 0;
	printf("# 바위는 1, 가위는 2, 보는 3중에서 선택하세요 : ");
	while (scanf("%d", &num) != 1 || num >= 4 || num < 1) {
		printf("# 바위는 1, 가위는 2, 보는 3중에서 선택하세요 : ");
		if (num > 0 && num < 4)
			break;
		while(getchar() != '\n');
	}
	return num;
}

int print (int num, int random) {
	int check = 0;
	char me[10], com[10];
	char total[20] = {};
	switch (num) {
		case 1:
			strcpy(me, "바위");
			break;
		case 2:
			strcpy(me, "가위");
			break;
		case 3:
			strcpy(me, "보");
			break;
	}
	switch (random) {
		case 1:
			strcpy(com, "바위");
			break;
		case 2:
			strcpy(com, "가위");
			break;
		case 3:
			strcpy(com, "보");
			break;
	}
	if (num == random) {
		strcpy (total, "비겼습니다");
		check = 3;
	}
	else {
		if (num - random == -1 || num - random == 2) {
			strcpy (total, "이겼습니다");
			check = 1;
		}
		if(num - random == 1 || num - random == -2) {
			strcpy (total, "졌습니다");
			check = 2;
		}
	}
	printf("당신은 %s 선택, 컴퓨터는 %s 선택 : %s\n", me, com, total);
	return check;
}
