#include <stdio.h> 
int main() 
{
	int month = 315;
	int input;
	
	int age;
	int birthday;
	int realAge;
	
	printf("�ֹι�ȣ ���ڸ� �Է� : ");
	scanf("%d", &input);
	
	//���� ���
	age = 123 - (int)input/10000;
	birthday = input%10000;
	
	if(birthday <= month){
		realAge = age -1;
	}
	else{
		realAge = age-2;
	}
	
	printf("����(2022�� 3�� 15��)���� ���̴� %d��, �� ���̴� %d�� �Դϴ�.", age, realAge);
	return 0;
}
