#include <stdio.h>
int main()
{
	int kor[5];		// �л� 5�� ���� 
	int rank[5];	// ���� 5�� ���� 
	
	int i, j, sum=0;
	float avg;
	
	for(i=0; i<5; i++){
		printf("[%d] �л��� ����: ", i+1);
		scanf("%d", &kor[i]);

		rank[i]=1;	// ��� �л��� ������ 1�� �ʱ�ȭ 
		
		sum=sum+kor[i];
	}
	avg=(float)sum/5;
	
//	���� ���
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(kor[i]<kor[j]){
				rank[i]++;		// rank[i] = rank[i]+1;
			}
		}
	}
	printf("\n��ȣ\t ����\t ���\n");
	printf("--------------------\n");
	for(i=0; i<5; i++){
		printf("%d\t %d\t %d\n", i+1, kor[i], rank[i]);
	}
	printf("�հ�: %d\n", sum);
	printf("���: %d\n", avg);
	
	return 0;
}
