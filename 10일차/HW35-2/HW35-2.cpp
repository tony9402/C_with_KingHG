//
//  HW35-2.cpp
//  HW35-2
//
//  Created by 이동헌 on 2020/01/12.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	for (int i = 1; i < 101; i++) {
		if ((i%3==0&&i%15!= 0)?printf(" * "):(i%5==0&&i%15!=0)?printf(" # "):printf("%2d ", i));
		if (i % 10 == 0)
			printf("\n");
	}
}
/*
#include <stdio.h>

int main(){
    int i=0;
     while(i++<100){
        int c=i%3?i%5?0:1:2,d=i%15;
        if(c*d)printf(" %c ","#*"[c-1]);
        else printf("%2d ", i);
        printf(i%10?"":"\n");
    }
}
*/