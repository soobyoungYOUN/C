// �� ���� ������ ��
#include <stdio.h> 
int main()
{
	int num1, num2;
	int max, min;
	
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2){
		max=num1;
		min=num2;
	}
	else{
		max=num2;
		min=num1;
	}
	printf("%d", min);
	
	int i = min+1;
	int sum = min; 
	
	while(i <= max){
		printf(" + %d", i);
		sum += i;
		i++;
	}
	printf(" = %d", sum);
	return 0;
}
