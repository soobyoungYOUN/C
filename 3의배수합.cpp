#include <stdio.h>
int main()
{
	int num=1;
	int num3;
	
	for(;num<=100;num++){
		if((num%3)==0){
			num3 += num;
		printf("%d ",num);
		}
	}
	printf("\n3의 배수의 합은 : %d", num3);
}
