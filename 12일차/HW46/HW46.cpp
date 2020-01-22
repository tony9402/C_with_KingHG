#include <stdio.h>

void input(int* year, int* month, int* day);
int year_check(int *year, int *month, int *day);
int cal(int year, int month, int day);
void print(int year, int month, int day, int res);

int main() {
	int year, month, day, sum;
	input(&year, &month, &day);
	sum = cal(year, month, day);
	print(year, month, day, sum);
}

void input(int* year, int* month, int* day) {
	printf("* 년 월 일을 입력하시오 : ");
	while(scanf("%d %d %d", year, month, day) != 3 || year_check(year, month, day)) {
		while(getchar() != '\n');
	printf("* 년 월 일을 입력하시오 : ");
	}
}

int year_check(int *year, int *month, int *day) {
	if(*year < 0) return 1;
	int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	arr[1] += *year % 4 ? 0 : *year % 100 ? 1 : *year % 400 ? 0 : 1;
	return (*month > 12 || *month < 0) || *day < 0 || arr[*month - 1] < *day;
	if (check == 1 && *month == 2 && *day > 29)
		return 1;
	else {
		if ((*month > 12 && *month < 0) || arr[*month - 1] < *day)
			return 1;
		else
			return 0;
	}*/
}

int cal(int year, int month, int day) {
	int cal_year, sum_year = 0;
	int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i = 1900; i < year; i++) {
		cal_year = i % 4 ? 0 : i % 100 ? 1 : i % 400 ? 0 : 1;
		sum_year += 365 + cal_year;
	}
	arr[1] += year % 4 ? 0 : year % 100 ? 1 : year % 400 ? 0 : 1;
	if(month > 1)
		for (int i = 0; i < month - 1; i++)
			sum_year += arr[i];
	sum_year += day;
	return sum_year%7;
}

void print(int year, int month, int day, int res) {
	char day_day[7][4] = {"일", "월", "화", "수", "목", "금", "토"};
	printf("%d년 %d월 %d일은 %s요일입니다.\n\n", year, month, day, day_day[res]);
}