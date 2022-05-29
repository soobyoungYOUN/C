#include <stdio.h>
#include <time.h>													// time 함수가 선언된 헤더 파일 

void selectNumOfPiece{
	do{
		printf("몇 개를 주문하시겠습니까? (최대 10개) ");
		scanf("%d", &count[index]);
		if(count[index] >10 || count[index] < 1){
			printf("ERRORMESSAGE");
			continue;
		}
		countTry=0;
	}while(countTry==1);
}

void selectPriority(int num){
	int a;
	char *s;
	do{
		printf("우대사항을 선택하세요\n");
		printf("1. 없음 (나이 우대는 자동처리)\n2. 장애인\n3. 국가유공자\n4. 다자녀\n5. 임산부\n");
		scanf("%d", &udae[index]);
		switch(udae[index]){
			case 1 :
				stringUdae[index]="우대 적용 없음";
				break;
			case 2 :
				stringUdae[index]="장애인 우대 할인";
				fee=fee * disable;
				break;
			case 3 :
				stringUdae[index]="국가유공자 우대 할인";
				fee=fee * ugong;
				break;
			case 4 :
				stringUdae[index]="다자녀 우대 할인";
				fee=fee * daja;
				break;
			case 5 :
				stringUdae[index]="임산부 우대 할인";
				fee = fee * preg;
				break;
			default :
				printf(ERRORMESSAGE);
				countUdae = 1;
				break;
		}
		countUdae=1;
	}while(countUdae==0);
	return
}

void calculateToday(){
	//	=====================================현재 날짜 보기좋게 출력 
	time_t curTime = time(NULL);									// total sec from 1970.1.1. to present 
	int hoursFrom1970 = curTime/3600,								// convert sec to day
		hoursFrom1970Korea = hoursFrom1970+9,
		daysFrom1970 = hoursFrom1970Korea/24,
		monthDay[11]={31,28,31,30,31,30,31,31,30,31,30},			// each month's days
		month=1, year=1970, day = 0;
	
	while(daysFrom1970>365){
		if(((year%4==0) && (year%100!=0)) || (year%400==0)){		// add year & minus year's day
			daysFrom1970=daysFrom1970-366;							// 윤년 평년 구분 
		}
		else{
			daysFrom1970=daysFrom1970-365;
		}
		++year;
	}
	
	for(int i=0; daysFrom1970>31; i++){								// 현재의 달을 출력 
		if(((year%4==0) && (year%100!=0)) || (year%400==0)){		// print day 
			monthDay[1]=29;											// 윤년 일 때 2월의 일 수 
		} 
		daysFrom1970=daysFrom1970-monthDay[i];
		month++;
	}
	day = daysFrom1970+1; 											// year = 올해, month = 이번 달, day = 오늘 
	
	thisYear[index]=year;										// 현재 시간 구하기 
	thisMonth[index]=month;
	thisDay[index]=day;
	curTime = time(NULL);										
	hours[index] = (curTime%86400)/(3600)+9;							
	minutes[index] = (curTime%86400)%(3600)/60;
}

void calculateAge{										 
	do{
			printf("주민번호 7자리를 입력하세요\n");		// 주민번호 입력 후 요금 결정 	
			scanf("%7d", &id);
			
			pre_id=id/10;	
			id_c = id%10;								// 19c, 20c, 21c 출생연도 확인 
			
			if(id_c == 3 || id_c == 4){
			age= year - (pre_id/10000 + 2000);
			}
			else if(id_c==0 || id_c ==9){
				age= year - (pre_id/10000 + 1800);
			}
			else{
				int century20 = 1900;
				age= year - (pre_id/10000 + 1900);
			}
			if((pre_id)%10000 > month*100 + day){		// 오늘보다 생일이 늦을 때의 만나이 
				age-1;
			}
			if(age-1<0)
				printf(ERRORMESSAGE);
		}while((age)<1);
}

void ageGroup{
	if (age>=65){										// 주간 요금							
		group[index] = 1; 
		stringGroup[i]="노인";
	}
	else if(age<3){								// 유아 요금 
		group[index] = 5;
		stringGroup[i]="유아";
	}
	else{										
		if(age<=64 && age>=19){
			group[index] = 2;
			stringGroup[i]="대인";
		}
		else if(age<=18 && age>=13){			//	청소년 주간 요금 
			group[index] = 3; 
			stringGroup[i]="청소년";
		}	
		else{									//	소인 주야 요금 
			group[index] =4;
			stringGroup[i]="소인";
		}
	}
}

void daynNight(int num){
	int jugan;
	switch(num){										// 주야 & 나이에 따른 금액 구분 
		case 1 :
			jugan =1;
			break;
		case 2 :
			jugan=2;
			break;
		default :
			printf("ERRORMESSAGE");
			break;
	}
}

int main()	
{
//	======================================입장권 구매 파트  
	const int MAX = 100;
	int jugan[MAX], group[MAX], count[MAX], udae[MAX], finalSum, again, start=1,		// 주야, 주야 숫자로 구분, 티켓 수, 우대할인 여부, 종료여부, 총액 
		id, pre_id, age, id_c,								// 주민번호 입력 및 나이 
		fee = 0, index=0, countTry=1, countUdae=0;					// 요금, 저장소 넘버, 목표 티켓수 입력 횟수, 우대정보 입력횟수 
	
	char *stringJugan[MAX], *stringGroup[MAX], *stringUdae[MAX];
	
	const int FARE[2][5]={											
						{44000,56000,47000,44000,0},				// 주간요금 : 노인, 대인, 청소년, 소인, 아이 
						{37000,46000,40000,37000,0}					// 야간요금 : 노인, 대인, 청소년, 소인, 아이 
					   };
	const float disable = 0.6, ugong = 0.5, daja = 0.8, preg = 0.85;	// 우대 할인율 			  
	const char *ERRORMESSAGE ="잘못된 입력입니다. 다시하세요\n";

	// 티켓 구매정보를 저장하기 위한 배열 변수
	int preSum[MAX], 
		thisYear[MAX], thisMonth[MAX], thisDay[MAX], hours[MAX], minutes[MAX];

	do{	
		printf("권종을 선택하세요.\n");								// 주야 구분 
		printf("1. 주간권\n2. 야간권\n");
		scanf("%1d", &jugan[index]);

//	=====================================구매자의 만 나이 확인 

		preSum[index] = fee * count[index];								// 입장권 소계 
		printf("가격은 %d원입니다.\n", preSum[index]);
		
		printf("계속 발권 하시겠습니까?\n1. 티켓 발권\n2. 종료\n"); 
		scanf("%d",&again);
		
		switch (again){
			case 1:													// 추가 구매 
				index++;
				break;
			case 2:													// 영수증 출력 파트 
				printf("티켓 발권을 종료합니다. 감사합니다.\n");
				printf("===================================\n");
				FILE *filePointer = fopen("report.csv", "a");		// report.csv 파일에 입력 정보를 저장 
				for(int i=0;i<=index;i++){
					switch(jugan[i]){								// 주간을 문자로 표현하기 
						case 1:
							stringJugan[i]="주간권";
							break;
						case 2:
							stringJugan[i]="야간권";
							break;
					}
					
					printf("%s %s\t %d매 %d원\t%s\n", stringJugan[i], stringGroup[i], count[i], preSum[i], stringUdae[i]);
					finalSum+=preSum[i];
					fprintf(filePointer, "%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", 
							  thisYear[i], thisMonth[i], thisDay[i], hours[i], minutes[i], 
							  jugan[i], group[i], count[i], preSum[i], udae[i]);
				}
				fclose(filePointer);
				printf("입장료 총액은 %d원입니다.\n", finalSum);
				printf("===================================\n");
				printf("입장권을 받아 주십시오. 감사합니다.\n");
				index=0;
				break;
		}
	}while(start==1);
	return 0;
}
