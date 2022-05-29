#include <stdio.h>
int main()
{
	int numArr[10]={11,22,33,44,55,66,77,88,99,110}; // 배열을 생성, 값 할당
	
	for(int i= sizeof(numArr)/sizeof(int)-1; i>=0; i--){	// 마지막 배열부터 출력 
		printf("%d\n", numArr[i]); 
	}
	return 0; 
}
