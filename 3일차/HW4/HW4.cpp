#include <stdio.h>

int main () {
    double years = 365.2422;
    int day = (int)years;
    int hour = (years - (double)day) * 24;
    double temp = (years - (double)day) * 24;
    int min = (temp - hour) * 60;
    temp = (((years - (double)day) * 24) - (double)hour) * 60;
    double sec = (temp - (double)min) * 60;
    
    printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초 입니다\n", years, day, hour, min, sec);
}