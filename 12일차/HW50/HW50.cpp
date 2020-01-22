#include <stdio.h>
#include <string.h>

int input(char* str, char* ch);
int str_check (char *str, char* ch);

int main() {
	char str[100] = {};
	char ch;
	int num;
	while (input(str, &ch) != 0){
		num = str_check(str, &ch);
		if (num == -1) printf("\"%s\"의 문자열 안에 \'%c\'문자는 존재하지 않습니다\n\n", str, ch);
		else printf("\"%s\"의 문자열 안에 \'%c\'문자는 %d번 위치에 존재합니다\n\n", str, ch, num+1);
	}
}

int input(char* str, char* ch) {
	printf("# 문자열을 입력하시오 : ");
	scanf("%s", str);
	if (strcmp(str, "end") == 0) return 0;
	printf("# 문자를 입력하시오 : ");
	scanf(" %c", ch);
	while(getchar() != '\n');
	return 1;
}

int str_check (char* str, char* ch) {
	for(int i = 0; i < strlen(str); i++)
		if(str[i] == *ch) return i;
	return -1;
}