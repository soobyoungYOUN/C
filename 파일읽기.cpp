#include <stdio.h>
int main()
{
	FILE *fp = fopen("c:\\Users\\kopo\\Desktop\\sbsb\\GitTest\\codes\\report.csv", "r");
	const int MAX =200;
	int seq =0;
	int totalArr[MAX][10]={0};
	long long int copyArr[MAX][7]={0};
	
		// ���ϳ����� ������ ���� �д� �۾� 
	while( fscanf(fp, "%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", 						// ������ ������ ��� �ҷ�����
			&totalArr[seq][0],&totalArr[seq][1],&totalArr[seq][2],&totalArr[seq][3],&totalArr[seq][4],&totalArr[seq][5],&totalArr[seq][6],&totalArr[seq][7],&totalArr[seq][8] ,&totalArr[seq][9])!=-1) {
		seq++;
	}
	
	for(int i=0; i<=seq;i++){
		copyArr[i][0]=(long long int)totalArr[i][0]*10000+totalArr[i][1]*100+totalArr[i][2];// �� �� �Ϸ� �Ǿ��� �� �����Ϸ� ����, �� �� -> �ú�. 
		copyArr[i][1]=totalArr[i][3]*100+totalArr[i][4];
		copyArr[i][2]=totalArr[i][5];
		copyArr[i][3]=totalArr[i][6];
		copyArr[i][4]=totalArr[i][7];
		copyArr[i][5]=totalArr[i][8];
		copyArr[i][6]=totalArr[i][9];
	}
	
// ����, ��, �� �������� ���� 
	long long int temp[7]={0};												// ���� ��Ʈ ������ ���� 20220324 2350 
	temp[0]=copyArr[0][0];
	int repeat=5;															// �������� �������� ����, �� �۾��� �⺻ 5ȸ �ݺ������� �ڸ� ��ȯ�� ���� ������, repeat�� ���� �߰��ϸ鼭 ������ ������ �� ������ �ݺ� 
	for(int k=0;k<repeat;k++){
		for(int i=1;i<=seq;i++){
			if(temp[0]>copyArr[i][0]){
				for(int j=0;j<7;j++){
					temp[j]=copyArr[i-1][j];
					copyArr[i-1][j]=copyArr[i][j];
					copyArr[i][j]=temp[j];
					repeat++;
				}
			}
		}	
	}
	
	printf("%d\n", sizeof(copyArr)/sizeof(int));
	
//	for(int i=0;i<sizeof(copyArr[]))
//	if(copyArr[0]) 
	
	
	
	FILE *filePointer = fopen("report_sort.csv", "w");		// report_sort.csv ���Ͽ� �Է� ������ ���� 
//	csv ������ 10000 x 10 ��ķ� ��ȯ �Ͽ� ������ ���� 
	for(int hang=0; hang<=seq;hang++)
		fprintf(filePointer, "%d, %d, %d, %d, %d, %d, %d\n",copyArr[hang][0],copyArr[hang][1],copyArr[hang][2],copyArr[hang][3],copyArr[hang][4],copyArr[hang][5],
																		copyArr[hang][6]);
	
	
	// ���� �Ǹ� ��Ȳ 
	
	
//	for(int index=0; index<=seq; index++){
//		printf("%d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d,\t %d\n", thisYear[index], thisMonth[index], thisDay[index], hours[index], minutes[index], 
//			jugan[index], group[index], count[index], preSum[index], udae[index]);
//		switch(thisMonth[index]){
//			case 1:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//				
//			case 2:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 3:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 4:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 5:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 6:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 7:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 8:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 9:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 10:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 11:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//			case 12:
//				saleArr[thisMonth[index]]+=preSum[index];
//				if(group[index]==1)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==2)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==3)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else if(group[index]==4)
//					groupSumArr[thisMonth[index]][group[index]]+=count[index];
//				else 
//					groupSumArr[thisMonth[index]][group[index]]+=count[index]; 
//				break;
//		}
//	}
//	printf("=================�ϰ� ����==================\n");
//	
//	printf("%d-%d-%d, %d��", thisYear, thisMonth, thisDay, preSum);
//	for(int i=1; i<=12;i++){
//		if(thisMonth[i]==i)
//			printf("%d��, ����: %d, ����: %d, û�ҳ�: %d, ����: %d, ����: %d, �� ����: %d��\n", i, groupSumArr[i][1], groupSumArr[i][2], groupSumArr[i][3], groupSumArr[i][4], groupSumArr[i][5],  saleArr[i]); 
//	}
//	
	return 0;
}

