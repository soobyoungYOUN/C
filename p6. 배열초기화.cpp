#include <stdio.h> // 배열 초기화 
int main()
{
	int numArr[10]={0, }; // 배열을 생성, 값 할당
	
	printf("%d\n", numArr[0]); // 0: 배열의 첫 번째(인덱스 0번) 요소 출력 
	printf("%d\n", numArr[5]); // 0: 배열의 여섯 번째(인덱스 5번) 요소 출력
	printf("%d\n", numArr[9]); // 0: 배열의 열 번째(인덱스 9번) 요소 출력
	
	return 0; 
} 
