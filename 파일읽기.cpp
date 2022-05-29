#include <stdio.h>
int main()
{
	FILE *fp = fopen("c:\\Users\\kopo\\Desktop\\sbsb\\GitTest\\codes\\report.csv", "r");
	const int MAX =200;
	int seq =0;
	int totalArr[MAX][10]={0};
	long long int copyArr[MAX][7]={0};
	
		// 파일내용의 라인의 수를 읽는 작업 
	while( fscanf(fp, "%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", 						// 파일의 내용을 모두 불러오기
			&totalArr[seq][0],&totalArr[seq][1],&totalArr[seq][2],&totalArr[seq][3],&totalArr[seq][4],&totalArr[seq][5],&totalArr[seq][6],&totalArr[seq][7],&totalArr[seq][8] ,&totalArr[seq][9])!=-1) {
		seq++;
	}
	
	for(int i=0; i<=seq;i++){
		copyArr[i][0]=(long long int)totalArr[i][0]*10000+totalArr[i][1]*100+totalArr[i][2];// 연 월 일로 되었는 걸 연월일로 수정, 시 분 -> 시분. 
		copyArr[i][1]=totalArr[i][3]*100+totalArr[i][4];
		copyArr[i][2]=totalArr[i][5];
		copyArr[i][3]=totalArr[i][6];
		copyArr[i][4]=totalArr[i][7];
		copyArr[i][5]=totalArr[i][8];
		copyArr[i][6]=totalArr[i][9];
	}
	
// 연도, 월, 일 오름차순 정렬 
	long long int temp[7]={0};												// 정렬 파트 수정할 차례 20220324 2350 
	temp[0]=copyArr[0][0];
	int repeat=5;															// 연월일의 오름차순 정렬, 이 작업을 기본 5회 반복하지만 자리 변환이 있을 때마다, repeat의 값을 추가하면서 정렬이 완전해 질 때까지 반복 
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
	
	
	
	FILE *filePointer = fopen("report_sort.csv", "w");		// report_sort.csv 파일에 입력 정보를 저장 
//	csv 파일을 10000 x 10 행렬로 변환 하여 데이터 저장 
	for(int hang=0; hang<=seq;hang++)
		fprintf(filePointer, "%d, %d, %d, %d, %d, %d, %d\n",copyArr[hang][0],copyArr[hang][1],copyArr[hang][2],copyArr[hang][3],copyArr[hang][4],copyArr[hang][5],
																		copyArr[hang][6]);
	
	
	// 월간 판매 현황 
	
	
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
//	printf("=================일간 매출==================\n");
//	
//	printf("%d-%d-%d, %d원", thisYear, thisMonth, thisDay, preSum);
//	for(int i=1; i<=12;i++){
//		if(thisMonth[i]==i)
//			printf("%d월, 노인: %d, 대인: %d, 청소년: %d, 소인: %d, 유아: %d, 총 매출: %d원\n", i, groupSumArr[i][1], groupSumArr[i][2], groupSumArr[i][3], groupSumArr[i][4], groupSumArr[i][5],  saleArr[i]); 
//	}
//	
	return 0;
}

