#include <stdio.h> 
#define MAX 3
int main()
{
	int std[MAX][3]; // 5명의 학생의 국어, 영어, 수학
	int sum[MAX];
	float avg[MAX];
	char grade[MAX];
	int rank[MAX];
	int i,j;
	
	// 학생 국, 영, 수 입력
	for(i=0; i<MAX;i++) {
		rank[i]=1;	// 각 학생의 석차를 1등으로 초기화
		printf("[%d] 학생의 국어, 영어, 수학 입력: ", i+1);
		scanf("%d %d %d", &std[i][0], &std[i][1], &std[i][2]);
		
		sum[i]=std[i][0] + std[i][1] + std[i][2];
		avg[i]=(float)sum[i]/3;
		
		// 학점 계산
		if(avg[i] >=90){
			grade[i]='A';
		} 
		else if(avg[i]>=80){
			grade[i]='B';
		}
		else if(avg[i]>=70){
			grade[i]='C';
		}
		else if(avg[i]>=60){
			grade[i]='D';
		}
		else{
			grade[i]='B';
		}
	}
	
	// 석차 계산 
	for(i=0; i<MAX; i++) {
		for(j=0; j<MAX; j++){
			if(avg[i]<avg[j]){
				rank[i]++; 	// rank[i] = rank[i]+1
			}
		}
	}
		// 출력
	printf("\m==========성적표==========\n");
	printf("\n--------------------------\n");
	printf("번호\t 국어\t 영어\t 수학\t 합계\t 학점\t 평균\n 석차\n");
	for(i=0; i<MAX; i++) {
		printf("%d\t %d\t %d\t %d\t %d\t %.2f\n %c\t %d\t", i+1, 
		std[i][0], std[i][1], std[i][2], sum[i], avg[i], grade[i], rank[i]);
	}
	return 0;
}
