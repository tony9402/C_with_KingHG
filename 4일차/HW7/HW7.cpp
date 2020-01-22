//
//  HW7.cpp
//  HW7
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//

#include <stdio.h>

int main() {
    double dis, speed;
    printf("거리를 입력하시오 : ");
    scanf("%lf", &dis);
    printf("시속을 입력하시오 : ");
    scanf("%lf", &speed);
    
    double hour, min, sec, cal = dis / speed;
    hour = (int)cal;
    min = (cal - hour) * 60;
    sec = (min - (int)min) * 60;
    
    printf("%.2lfkm => %g시간 %d분 %.3lf초 소요됨", dis, hour, (int)min, sec);
}
