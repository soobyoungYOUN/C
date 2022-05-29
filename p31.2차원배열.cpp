#include <stdio.h>
int main()
{
	int numArr[3][4];
	
	numArr[0][0] = 11;
	numArr[0][1] = 22;
	numArr[0][2] = 33;
	numArr[0][3] = 44;
	numArr[1][0] = 55;
	numArr[1][1] = 66;
	numArr[1][2] = 77;
	numArr[1][3] = 88;
	numArr[2][0] = 99;
	numArr[2][1] = 110;
	numArr[2][2] = 121;
	numArr[2][3] = 132;

	printf("%d\n", numArr[-1][-1]);	// 다른 값 출력 
	printf("%d\n", numArr[0][4]);	// 의도하지 않은 값 출력 
	printf("%d\n", numArr[4][4]);	// 의도하지 않은 값 출력
	printf("%d\n", numArr[5][5]);	// 의도하지 않은 값 출력
	
	return 0; 
}

