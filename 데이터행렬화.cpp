#include <stdio.h>
int main()
{
	FILE *fp = fopen("c:\\Users\\kopo\\Desktop\\sbsb\\GitTest\\codes\\report.csv", "r");
	const int MAX =10000;
	int seq =0, big=0, small=0;
	int totalArr[MAX][10]={0},
		thisYear[MAX]={0}, thisMonth[MAX]={0}, thisDay[MAX]={0}, hours[MAX]={0}, minutes[MAX]={0}, 
		jugan[MAX]={0}, group[MAX]={0}, count[MAX]={0}, preSum[MAX]={0}, udae[MAX]={0},
		sortDate[MAX+1]={0};
	
//	int saleArr[32]={0}, prioritySaleArr[5]={0},
//		monthTicketsArr[13]={0}, groupSumArr[13][6]={0};										// ��, ��, �׷� �� �迭�� 0�ڸ��� ���� �򰥸� 
		
		// ���ϳ����� ������ ���� �д� �۾� 
	while( fscanf(fp, "%d, %d, %d, %d, %d, %d, %d, %d, %d, %d,", 						// ������ ������ ��� �ҷ����� �ִ� 100�� 
			&thisYear[seq], &thisMonth[seq], &thisDay[seq], &hours[seq], &minutes[seq], 
			&jugan[seq], &group[seq], &count[seq], &preSum[seq], &udae[seq]) !=-1) {
		seq++;
	}
	
	FILE *filePointer = fopen("report_sort.csv", "w");		// report_sort.csv ���Ͽ� �Է� ������ ���� 
//	csv ������ 10000 x 10 ��ķ� ��ȯ �Ͽ� ������ ���� 
	for(int hang=0; hang<=seq;hang++){
		totalArr[hang][0]=thisYear[hang];
		totalArr[hang][1]=thisMonth[hang];
		totalArr[hang][2]=thisDay[hang];
		totalArr[hang][3]=hours[hang];
		totalArr[hang][4]=minutes[hang];
		totalArr[hang][5]=jugan[hang];
		totalArr[hang][6]=group[hang];
		totalArr[hang][7]=count[hang];
		totalArr[hang][8]=preSum[hang];
		totalArr[hang][9]=udae[hang];
		fprintf(filePointer, "%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n",totalArr[hang][0],totalArr[hang][1],totalArr[hang][2],totalArr[hang][3],totalArr[hang][4],totalArr[hang][5],
																		totalArr[hang][6],totalArr[hang][7],totalArr[hang][8],totalArr[hang][9]);
	}
	fclose(fp);
	return 0;
}
