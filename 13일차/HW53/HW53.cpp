//
//  HW53.cpp
//  HW53
//
//  Created by 이동헌 on 2020/01/16.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <string.h>

void input(char* ch);
int check_char(char* ch);
void print(char* ch, int check) ;

int main() {
	char ch[100];
	int check;
	input(ch);
	check = check_char(ch);
	print(ch, check);

}

void input(char* ch) {
	printf("# 단어 입력 : ");
	gets(ch);
}

int check_char(char* ch) {
	int cnt = 0;
	for(int i = 0; i < strlen(ch)/2; i++) {
		int num = ch[i] - ch[strlen(ch) - i - 1];
		if (num == 0 || num == 32 || num == -32) cnt++;
	}
	if (cnt == strlen(ch)/2) return 1;
}

void print(char* ch, int check) {
	if (check == 1) printf("  \"%s\" : 회문입니다", ch);
	else printf("  \"%s\" : 회문이 아닙니다", ch);
}