#include <stdio.h>
int main()
{
	int age;
	int fee = 2000;
	printf("���� �Է� : ");
	scanf("%d, &age");
	if(age >=65) {
		fee = 0;
	}
	printf("���� : %d\n", age);
	printf("��� : %d\n", fee);
	
	return 0;
}
