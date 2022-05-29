#include <stdio.h>
int main()
{
	int kor[5];
	int i, j, sum=0;
	float avg;
	
	for(i=0; i<5; i++){
		printf("[%d] 학생의 점수: ", i+1);
		scanf("%d", &kor[i]);
		
		sum=sum+kor[i];
	}
	
	avg=(float)sum/5;
	printf("합계: %d\n", sum);
	printf("평균: %d\n", avg);
	
	return 0;
}
