//
//  HW8.cpp
//  HW8
//
//  Created by 이동헌 on 2020/01/02.
//  Copyright © 2020 이동헌. All rights reserved.
//

#include <stdio.h>

int main() {
    int his, kor, ent;
    printf("역사, 문학, 예능 점수를 입력하세요 : ");
    scanf("%d %d %d", &his, &kor, &ent);
    
    double sum = his + kor + ent, avg = sum / 3;
    printf("총점은 %d 이고, 평균은 %.2lf입니다", (int)sum, avg);
}
