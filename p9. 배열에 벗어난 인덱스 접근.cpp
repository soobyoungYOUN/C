#include <stdio.h>
int main()
{
	int numArr[10]; 		// 크기가 10인 배열 선언 
	
	numArr[0] = 11; // 인덱스가 0인 배열의 요소에 값 할당 
	numArr[1] = 22; // 인덱스가 1인 배열의 요소에 값 할당 
	numArr[2] = 33; // 인덱스가 2인 배열의 요소에 값 할당 
	numArr[3] = 44; // 인덱스가 3인 배열의 요소에 값 할당 
	numArr[4] = 55; // 인덱스가 4인 배열의 요소에 값 할당 
	numArr[5] = 66; // 인덱스가 5인 배열의 요소에 값 할당 
	numArr[6] = 77; // 인덱스가 6인 배열의 요소에 값 할당 
	numArr[7] = 88; // 인덱스가 7인 배열의 요소에 값 할당 
	numArr[8] = 99; // 인덱스가 8인 배열의 요소에 값 할당 
	numArr[9] = 110; // 인덱스가 9인 배열의 요소에 값 할당 
	
	printf("%d\n", numArr[-1]); // 음수 인덱스 => 오류 
	printf("%d\n", numArr[10]); // 배열에서 벗어난 인덱스 
	printf("%d\n", numArr[20]); // 배열에서 벗어난 인덱스 
	
	return 0; 
}
