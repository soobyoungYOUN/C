#include <stdio.h>
int main()
{
	int kor[5];
	int i, j, sum=0;
	float avg;
	
	for(i=0; i<5; i++){
		printf("[%d] �л��� ����: ", i+1);
		scanf("%d", &kor[i]);
		
		sum=sum+kor[i];
	}
	
	avg=(float)sum/5;
	printf("�հ�: %d\n", sum);
	printf("���: %d\n", avg);
	
	return 0;
}
