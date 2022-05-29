#include <stdio.h> 
int main()
{
	int i = 8;
	while(i<1){
		printf("while did print");
	}
	
	do{
		printf("do~while did print");
	}while(i<1);
	return 0;
}
