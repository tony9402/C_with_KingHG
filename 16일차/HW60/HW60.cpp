#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define RESIDENT_NUMBER_LENGTH  13 /* 주민등록번호 길이*/

int availabilityCheck(char *resident_number);
int checkLengthCharacter(char *resident_number);
int checkDate(char *resident_number);  
int checkIdentification(char *resident_number);
int checkGender(char *resident_number);
int checkYear (int year);

int main()
{
    /* 테스트할 주민등록번호 저장 배열*/
    char resident_number[][20]={"0402291000008", "870401102321", "00031541949179", 
		"0003154194917", "801203#201122", "7804155328845", "7804150328840", 
		"9612241068382", "9902292194322", "0230174326176", "8811391042219", 
		"8100122042213", "8112002042213", "9210101069415", "0802294012345",
        "8806311069417","8807311069418"}; 
    int count = sizeof(resident_number)/ sizeof(resident_number[0]);
    for(int i = 0; i < count; i++) {
       if(availabilityCheck(resident_number[i]) == TRUE)
    	 printf("(+) 주민번호%s는(은) 유효한 번호입니다.\n", resident_number[i]);
       else
    	  printf("(-) 주민번호%s는(은) 유효하지 않은 번호입니다.\n", resident_number[i]);
   }
}

int availabilityCheck(char *resident_number) {
    if(checkDate(resident_number) == FALSE) return FALSE;
    if(checkIdentification(resident_number) == FALSE) return FALSE;
    return TRUE;
} //주민등록번호 유효성 검사 함수

int checkLengthCharacter(char *resident_number) {
    int cnt = 0;
    for(int i = 0; i < strlen(resident_number); i++,++cnt)
        if (resident_number[i] < 48 || resident_number[i] > 58) return FALSE;
    return cnt == 13 ? TRUE : FALSE;
} //주민등록번호 길이 및 문자 유효성검사 함수

int checkDate(char *resident_number) {
    int month_arr[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    if(checkLengthCharacter(resident_number) == FALSE) return FALSE;
    if(checkGender(resident_number) == FALSE) return FALSE;
    int year = 1900;
    int cal = ((resident_number[0] - 48) * 10) + (resident_number[1] - 48);
    int month = ((resident_number[2] - 48) * 10) + (resident_number[3] - 48);
    int day = ((resident_number[4] - 48) * 10) + resident_number[5] - 48;
    if(resident_number[6] - 48 == 1 || resident_number[6] - 48 == 2) year += cal;
    if(resident_number[6] - 48 == 3 || resident_number[6] - 48 == 4) year += 100 + cal;
    if(month == 2 && checkYear(year) == TRUE) if(day > 29) return FALSE;
    if(month == 2 && checkYear(year) == FALSE) if(day > 28) return FALSE;
    if(day > month_arr[month - 1] || day == 0) return FALSE;
    return month < 13 || month > 0 ? TRUE : FALSE;
} //첫6자리(연,월,일)의 유효성 검사 함수

int checkGender(char *resident_number) {
    return resident_number[6] - 48 > 0 && resident_number[6] - 48 < 5 ? TRUE : FALSE;
} //성별 검사

int checkIdentification(char *resident_number) {
    int sum = 0;
    for(int i = 0; i < 12; i++)
        sum += (resident_number[i] - 48);
    return sum % 10 == resident_number[12] - 48 ? TRUE : FALSE;
} //유효성 검사

int checkYear (int year) {
    return year % 4 ? FALSE : year % 100 ? TRUE : year % 400 ? FALSE : TRUE;
} //윤년인지 아닌지