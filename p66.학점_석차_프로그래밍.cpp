#include <stdio.h> 
#define MAX 3
int main()
{
	int std[MAX][3]; // 5���� �л��� ����, ����, ����
	int sum[MAX];
	float avg[MAX];
	char grade[MAX];
	int rank[MAX];
	int i,j;
	
	// �л� ��, ��, �� �Է�
	for(i=0; i<MAX;i++) {
		rank[i]=1;	// �� �л��� ������ 1������ �ʱ�ȭ
		printf("[%d] �л��� ����, ����, ���� �Է�: ", i+1);
		scanf("%d %d %d", &std[i][0], &std[i][1], &std[i][2]);
		
		sum[i]=std[i][0] + std[i][1] + std[i][2];
		avg[i]=(float)sum[i]/3;
		
		// ���� ���
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
	
	// ���� ��� 
	for(i=0; i<MAX; i++) {
		for(j=0; j<MAX; j++){
			if(avg[i]<avg[j]){
				rank[i]++; 	// rank[i] = rank[i]+1
			}
		}
	}
		// ���
	printf("\m==========����ǥ==========\n");
	printf("\n--------------------------\n");
	printf("��ȣ\t ����\t ����\t ����\t �հ�\t ����\t ���\n ����\n");
	for(i=0; i<MAX; i++) {
		printf("%d\t %d\t %d\t %d\t %d\t %.2f\n %c\t %d\t", i+1, 
		std[i][0], std[i][1], std[i][2], sum[i], avg[i], grade[i], rank[i]);
	}
	return 0;
}
