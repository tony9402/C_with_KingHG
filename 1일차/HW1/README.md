# [HW1] 나에 대한 정보를 출력하는 프로그램을 작성하시오.

#### 성명은 main()함수에서 출력하고 나이와 키는 각각을 출력하는 함수를 만들어서 출력하시오. 이때, 나이와 키의 값은 main()함수 내에서 선언된 변수에 저장해 놓은 후 나이와 키를 출력하는 함수를 호출할 때 전달인자로 보내서 출력하자.

```cpp
#include<stdio.h>
// TODO // printAge() 함수의 선언부
// TODO // printHeight() 함수의 선언부
int main() {
char name[20] = "본인성명"; int age = 500;
double height = 170.8;
printf("성명 : %s\n", name); printAge(age); printHeight(height);
return 0; }
// printAge() 함수의 정의부
// TODO
//printHeight() 함수의 정의부 // TODO
```