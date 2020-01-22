#include <stdio.h>

int age_input();
int num_input();
void print(int num, int fee);

int main() {
    int age = age_input();
    int num = num_input();

    int fee;
    
    printf("입장객의 나이는 %d살 이고, 입장객의 수는 %d명 입니다 \n", age, num);
    
    if(age > 7 && age <= 13) {
        fee = 700;
    }
    else {
        if (age >= 14 && age <= 19) {
            fee = 1000;
        }
        else {
            if (age >= 20 && age <= 55) {
                fee = 1500;
            }
            else {
                fee = 500;
            }
        }
    }

    print(num, fee);
}
int age_input() {
    int age;
    printf("입장객의 나이를 입력하세요 : ");
    scanf("%d", &age);
    return age;
}

int num_input() {
    int num;
    printf("입장객의 수를 입력하세요 : ");
    scanf("%d", &num);
    return num;
}

void print(int num, int fee) {
    int total_fee = fee * num;
    int sale_fee;
    if (num >= 5) {
        sale_fee = fee * num * 0.1;
    }
    else {
        sale_fee = 0;
    }
    printf("입장료  => %d\n", total_fee);
    printf("할인금액 => %d\n", sale_fee);
    printf("결제금액 => %d\n", total_fee - sale_fee);
}
