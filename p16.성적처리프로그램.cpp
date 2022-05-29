#include <stdio.h>
int main()
{
	int subject;
	int student;
	int score_sub;
	
	printf("과목 수 입력 : ");
	scanf("%d", &subject);
		
	printf("학생 수 입력 : ");
	scanf("%d", &student);
	
	int score[student][subject+3]={0};
	int sum[student]={0};
	float average[student]={0};
	
	for(int i=0; i<student;i++){
		printf("Koposw%d 학생의 점수 %d개를 차례대로 입력하세요 : ", i+1,subject);
		score[i][0] = i+1;

		for(int j=1; j<=subject;j++){
			scanf("%d", &score_sub);
			score[i][j] = score_sub;
			sum[i]+=score[i][j];
		}
		average = (float)sum[i]/(float)subject;
		
		score[i][subject+1]=sum[i];
		score[i][subject+2]=average;
	}
	for(int k =0; k<student; k++){
		printf("Koposw%d 학생의 과목 총점은 %d, 평균은 %d입니다.\n", score[k][0], score[k][subject+1],score[k][subject+2]);
	}
	
	return 0; 
}
