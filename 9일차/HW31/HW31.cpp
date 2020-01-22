#include <stdio.h>

char menu();
int inputInt(const char *ch);
int deposit(int recv, int save);
int withdraw(int recv, int save);

int main() {
	char str = ' ';
	int save = 0, num;
	while (str != 'q') {
		str = menu();
		if (str == 'i') {
			char temp[] = "# 입급액을 입력하세요 : ";
			num = inputInt(temp);
			save = deposit(num, save);
		}
		if (str == 'o') {
			char temp[] = "# 출금액을 입력하세요 : ";
			num = inputInt(temp);
			if (save < num)
				printf("* 잔액이 부족합니다.\n");
			else {
				save = withdraw(num, save);
				num = 0;
			}
		}
		printf("현재 잔액은 %d원 입니다\n", save);
	}
}

char menu() {
	printf("\n# 메뉴를 선택하시오 (i-입금, o-출금, q-종료) : ");
	char str;
	scanf(" %c", &str);
	while (!(str == 'i' || str == 'o' || str == 'q')) {
		while (getchar() != '\n');
		printf("* 잘못 입력하셨습니다\n\n");
		printf("# 메뉴를 선택하시오 (i-입금, o-출금, q-종료) : ");
		scanf(" %c", &str);
	}
	return str;
}

int inputInt(const char *ch) {
	printf(ch);
	int recv;
	while (scanf("%d", &recv) != 1 || recv < 0) {
		while (getchar() != '\n');
		printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
	}

	return recv;
}

int deposit(int recv, int save) {
	save += recv;
	return save;
}

int withdraw(int recv, int save) {
	save -= recv;
	return save;
}