#include <stdio.h>

int main() {
	char name[20];
	printf("이름을 입력하세요 : ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
}