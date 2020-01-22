//
//  HW49.cpp
//  HW49
//
//  Created by 이동헌 on 2020/01/14.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

void swap(int *a, int *b);

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int num = sizeof(arr) / sizeof(int);
	printf("처음 배열에 저장된 값 : ");
	for(int i = 0; i < num; i++) 
		printf("%3d", arr[i]);
	for(int i = 0; i <= num/2; i++)
		swap(&arr[i], &arr[num - i -1]);
	printf("\n바뀐 배열에 저장된 값 : ");
	for(int i = 0; i < num; i++) 
		printf("%3d", arr[i]);
}

void swap(int *a, int *b){
	*a^=*b^=*a^=*b;
}