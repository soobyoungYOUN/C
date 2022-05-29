#include <stdio.h>
int main()
{
	int numArr[10]={11,22,33,44,55,66,77,88,99,110}; // 배열을 생성, 값 할당
	
	for(int i=0; i < sizeof(numArr)/sizeof(int); i++){
		printf("%d\n", numArr[i]); 
	}
	
	return 0; 
}
