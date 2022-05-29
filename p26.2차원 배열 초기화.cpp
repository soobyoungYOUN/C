#include <stdio.h>
int main()
{
	int numArr[3][4] = { 0, };
	
						//↓세로 인덱스 
	printf("%d\n", numArr[0][0]);	// 11 : 세로 인덱스 0, 가로 인덱스 0인 요소 출력 
	printf("%d\n", numArr[1][2]);	// 77 : 세로 인덱스 1, 가로 인덱스 2인 요소 출력
	printf("%d\n", numArr[2][0]);	// 99 : 세로 인덱스 2, 가로 인덱스 0인 요소 출력
	printf("%d\n", numArr[2][3]);	// 132 : 세로 인덱스 2, 가로 인덱스 2인 요소 출력
						   //↑가로인덱스 
	return 0; 
}


