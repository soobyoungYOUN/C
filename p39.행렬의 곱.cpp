#include <stdio.h>
//행렬의 곱 계산 
int main()
{
	int a=0;
	int A[2][2] = {
		{3,4},
		{5,6}
	};
	int B[2][2] = {
		{1,5},
		{3,2}
	};
	int AB[2][2]={0,};
	
	//원소의 곱셈부터
	for(int i=0;i<2;i++){		
		for(int j=0;j<2;j++){
			for(int k=0; k<2; k++){
				AB[i][k]+=A[i][j]*B[j][k];
			}
		}
	}
	for(int a=0;a<2;a++){		
		for(int b=0;b<2;b++){
			printf("%d\n",AB[a][b]);
		}
	}
	
	return 0;
}
