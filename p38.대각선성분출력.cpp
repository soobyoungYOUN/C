#include <stdio.h>
int main()
{
	// 8x8 행렬 생성 
	int k=0, i=1;
	int matrix[8][8]={ 0, };
	
	for(int j=0;j<8;j++){
		for(i; i<=64;k++, i++){
			
			matrix[j][k]= i;
			printf("%d\n",matrix[j][k] );
			if(k==8)
				continue;
		}
		i=i+8;
		k=0;	
	}
	
	// 대각 요소만 출력
	for(int index1=0, index2=0; index1<=7; index1++, index2++){
		printf("%d ",matrix[index1][index2]);
	}
	return 0;
}
