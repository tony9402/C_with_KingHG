//
//  HW13.cpp
//  HW13
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>
#include <string.h>

int main() {
    char first_name[20], last_name[20];
    printf("#성을 입력하세요 : ");
    scanf("%s", first_name);
    printf("#이름을 입력하세요 : ");
    scanf("%s", last_name);

    int first_len = strlen(first_name);
    int last_len = strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d", first_len, first_len, last_len, last_len);
 
}
