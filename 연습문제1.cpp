#include <stdio.h>
int main()
{
	int i =1;
	while (i <= 100)
	{
		if((i%3) ==0){
			printf("%d => 3�� ���", i);
		}
		printf("%d\n",i);
		i++;		// i�� 1�� ���� 
	}
	return 0;
}
