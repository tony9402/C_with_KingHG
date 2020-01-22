# [HW57] 문자열 첫 문자와 마지막 문자 출력하기


<h3>

다섯 개의 문자열을 입력 받아 char 5행 20열의 2차원 배열(배열명 : str)에 순서대로 저장한 후, 알파벳순서대로(a~z순으로) sort 하여 문자열 전체, 첫 문자, 마지막 문자를 출력하자.</br></br>
(사용함수)</br></br>
1. 2차원 char배열에 문자열 입력하는 함수</br>
2. 문자열 sort함수</br>
3. 2차원 char배열의 문자열, 첫 문자, 마지막 문자 출력 함수 그 외 필요하다고 판단되는 함수 추가 작성 가능</br></br>
(참고자료) </br>
문자열 소트를 위한 문자열 비교함수 ( strcmp()함수 )</br></br>
- 원형 : int strcmp(const char *s1, const char *s2); - 기능 : 문자열 s1과 문자열 s2를 비교한다.</br>
- 사용 형태 : n = strcmp(s1, s2);</br>
- 리턴 값 :</br>
s1 > s2 :양수값리턴 </br>
s1== s2 :0리턴 </br>
s1 < s2 :음수값리턴


</br></br>
(실행결과)
</br></br></h3>

```cpp
# 1번 문자열을 입력하시오 : pear
# 2번 문자열을 입력하시오 : banana
# 3번 문자열을 입력하시오 : apple
# 4번 문자열을 입력하시오 : melon
# 5번 문자열을 입력하시오 : strawberry
(출력 예)
str[0] = apple a  e
str[1] = banana b  a
str[2] = melon m  n
str[3] = pear p r 
str[4] = strawberry s  y
```