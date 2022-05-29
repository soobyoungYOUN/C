// 두 수의 범위의 합
#include <stdio.h> 
int main()
{
	int num1, num2;
	int max, min;
	
	printf("두 개의 정수 입력 : ");
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
