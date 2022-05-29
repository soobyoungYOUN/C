#include <stdio.h>
int main()
{
	int numArr[10]={11,22,33,44,55,66,77,88,99,110}; // 배열을 생성, 값 할당
	
	printf("%d\n", sizeof(numArr)); // 4바이트의 요소가 10개
	
	printf("%d\n", sizeof(numArr)/sizeof(int)); // 4바이트의 요소가 10개
	
	return 0; 
}
