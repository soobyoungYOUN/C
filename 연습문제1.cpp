#include <stdio.h>
int main()
{
	int i =1;
	while (i <= 100)
	{
		if((i%3) ==0){
			printf("%d => 3의 배수", i);
		}
		printf("%d\n",i);
		i++;		// i를 1씩 증가 
	}
	return 0;
}
