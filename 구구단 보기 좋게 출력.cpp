// 구구단 보기 좋게 출력 
#include <stdio.h> 
int main()
{
	int result;
	
	for(int i=2; i<=10; i+=3){
		for(int j=1; j<=9; j++){
					result = i*j;
			printf("%d x %d = %d\t", i, j, result);
			result = (i+1)*j;
			printf("%d x %d = %d\t", i+1, j, result);
			
			if((i+2)==10){
				printf("\n");
			}
			else{
				result = (i+2)*j;
				printf("%d x %d = %d\n", i+2, j, result);	
			}
		}
		printf("\n");
		
		
	}
	return 0;
}
