#include <stdio.h>
int main()
{
	int num, count, udae, end=1, totalSum, preSum;
	long long int jumin;
	const int adultDay = 56000, adultNight = 46000, adoleDay = 47000, adoleNight = 40000;
	const int kidDay = 44000, kidNight = 37000, oldDay = 44000, oldNight = 37000, baby=0;
	const int max=10, min=1;

	int fee = 0, usage =0;

	char *save;
	char *group, *report; 
	char *day = "주간권";							// 주야 구분 

	const float jangae = 0.6, ugong = 0.5, daja = 0.8, preg = 0.85;		// 우대 할인율 


	do{										// 금액입력 반복 작업 
		printf("권종을 선택하세.요\n");
		printf("1. 주간권\n2. 야간권\n");
		scanf("%1d", &num);
		switch(num){
			case 1 : 
				day="주간권";
				break;
			case 2 :
				day="야간권";
				break;
			default :
				printf("잘못 입력했습니다.\n");
				continue;
		}									// 주야 구분 


		printf("주민번호를 입력하세요\n");	// 주민번호 입력 후 요금 결정 
		scanf("%13d", &jumin);
		int age = (int)(123-(jumin/100000000000));		// 나이 
		if (num==1){
			if(age<=64 && age>=19){		// 성인 주야 요금 
				fee = adultDay, group = "대인";
			}
		}
		else if(day=="야간권" && age<=64 && age>=19){
			fee = adultNight, group = "대인";
		}	

		else if(day=="주간권" && age<=18 && age>=13){	//	청소년 주야 요금 
			fee = adoleDay, group = "청소년"; 
		}	
		else if(day=="야간권" && age<=18 && age>=13){
		fee = adoleNight, group = "청소년"; 
		}

		else if(day=="주간권" && age<=3 && age>=12){	//	소인 주야 요금 
			fee = kidDay, group ="소인";
		}
		else if(day=="야간권" && age<=3 && age>=12){
			fee = kidNight, group ="소인"; 
		}

		else if(day=="주간권" && age>=65){	//	노인 주야 요금 
			fee = oldDay, group ="경로"; 
		}
		else if(day=="야간권" && age>=65){
		fee = oldNight, group ="경로"; 
		}

		else{
			fee = baby, group = "유아";
		}

		printf("몇 개를 주문하시겠습니까? (최대 10개)\n");
		scanf("%d", &count);

		if(count >10 || count < 1){
			printf("잘못 입력하였습니다.\n");
			continue;
		}

		printf("우대사항을 선택하세요\n");
		printf("1. 없음 (나이 우대는 자동처리)\n2. 장애인\n3. 국가유공자\n4. 다자녀\n5. 임산부\n");
		scanf("%d", &udae);
		switch(udae){
			case 1 :
				report = "우대적용 없음";
				break;
			case 2 :
				fee=fee * jangae;
				report ="장애인 우대적용";
				break;
			case 3 :
				fee=fee * ugong;
				report ="국가유공자 우대적용";
				break;
			case 4 :
				fee=fee * daja;
				report ="다자녀 우대적용";
				break;
			case 5 :
				fee = fee * preg;
				report ="임산부 우대적용";
				break;
		}

		preSum = fee * count;

		save[usage]=printf("%s %s x\t%d\t%d원 *%s\n", day, group, count, preSum, report);
		++usage;

		printf("가격은 %d원 입니다.\n감사합니다.\n", preSum);
		printf("계속 발권 하시겠습니까?\n1. 티켓 발권\n2. 종료\n"); 
		scanf("%d",&end);

		switch (end){
			case 1:

			case 2:
				printf("티켓 발권을 종료합니다. 감사합니다.");
				printf("=========== 에버랜드 ==========\n");
			for (int i=0;i<=usage;i++){

			}
			printf("입장료 총액은 %d원 입니다.", totalSum);
			printf("===============================\n");

			printf("계속 진행(1: 새로운 주문, 2: 프로그램 종료) : ");
			scanf("%d", &end);
			if (end ==1)
				end=1;
		}
	}while (end == 1);
	return 0;
}
