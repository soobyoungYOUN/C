#include <stdio.h> 
int main() 
{
	int month = 315;
	int input;
	
	int age;
	int birthday;
	int realAge;
	
	printf("주민번호 앞자리 입력 : ");
	scanf("%d", &input);
	
	//나이 계산
	age = 123 - (int)input/10000;
	birthday = input%10000;
	
	if(birthday <= month){
		realAge = age -1;
	}
	else{
		realAge = age-2;
	}
	
	printf("오늘(2022년 3월 15일)기준 나이는 %d세, 만 나이는 %d세 입니다.", age, realAge);
	return 0;
}
