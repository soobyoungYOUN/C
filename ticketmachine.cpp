#include <stdio.h>
#include <time.h>													// time �Լ��� ����� ��� ���� 

void selectNumOfPiece{
	do{
		printf("�� ���� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��) ");
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
		printf("�������� �����ϼ���\n");
		printf("1. ���� (���� ���� �ڵ�ó��)\n2. �����\n3. ����������\n4. ���ڳ�\n5. �ӻ��\n");
		scanf("%d", &udae[index]);
		switch(udae[index]){
			case 1 :
				stringUdae[index]="��� ���� ����";
				break;
			case 2 :
				stringUdae[index]="����� ��� ����";
				fee=fee * disable;
				break;
			case 3 :
				stringUdae[index]="���������� ��� ����";
				fee=fee * ugong;
				break;
			case 4 :
				stringUdae[index]="���ڳ� ��� ����";
				fee=fee * daja;
				break;
			case 5 :
				stringUdae[index]="�ӻ�� ��� ����";
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
	//	=====================================���� ��¥ �������� ��� 
	time_t curTime = time(NULL);									// total sec from 1970.1.1. to present 
	int hoursFrom1970 = curTime/3600,								// convert sec to day
		hoursFrom1970Korea = hoursFrom1970+9,
		daysFrom1970 = hoursFrom1970Korea/24,
		monthDay[11]={31,28,31,30,31,30,31,31,30,31,30},			// each month's days
		month=1, year=1970, day = 0;
	
	while(daysFrom1970>365){
		if(((year%4==0) && (year%100!=0)) || (year%400==0)){		// add year & minus year's day
			daysFrom1970=daysFrom1970-366;							// ���� ��� ���� 
		}
		else{
			daysFrom1970=daysFrom1970-365;
		}
		++year;
	}
	
	for(int i=0; daysFrom1970>31; i++){								// ������ ���� ��� 
		if(((year%4==0) && (year%100!=0)) || (year%400==0)){		// print day 
			monthDay[1]=29;											// ���� �� �� 2���� �� �� 
		} 
		daysFrom1970=daysFrom1970-monthDay[i];
		month++;
	}
	day = daysFrom1970+1; 											// year = ����, month = �̹� ��, day = ���� 
	
	thisYear[index]=year;										// ���� �ð� ���ϱ� 
	thisMonth[index]=month;
	thisDay[index]=day;
	curTime = time(NULL);										
	hours[index] = (curTime%86400)/(3600)+9;							
	minutes[index] = (curTime%86400)%(3600)/60;
}

void calculateAge{										 
	do{
			printf("�ֹι�ȣ 7�ڸ��� �Է��ϼ���\n");		// �ֹι�ȣ �Է� �� ��� ���� 	
			scanf("%7d", &id);
			
			pre_id=id/10;	
			id_c = id%10;								// 19c, 20c, 21c ������� Ȯ�� 
			
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
			if((pre_id)%10000 > month*100 + day){		// ���ú��� ������ ���� ���� ������ 
				age-1;
			}
			if(age-1<0)
				printf(ERRORMESSAGE);
		}while((age)<1);
}

void ageGroup{
	if (age>=65){										// �ְ� ���							
		group[index] = 1; 
		stringGroup[i]="����";
	}
	else if(age<3){								// ���� ��� 
		group[index] = 5;
		stringGroup[i]="����";
	}
	else{										
		if(age<=64 && age>=19){
			group[index] = 2;
			stringGroup[i]="����";
		}
		else if(age<=18 && age>=13){			//	û�ҳ� �ְ� ��� 
			group[index] = 3; 
			stringGroup[i]="û�ҳ�";
		}	
		else{									//	���� �־� ��� 
			group[index] =4;
			stringGroup[i]="����";
		}
	}
}

void daynNight(int num){
	int jugan;
	switch(num){										// �־� & ���̿� ���� �ݾ� ���� 
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
//	======================================����� ���� ��Ʈ  
	const int MAX = 100;
	int jugan[MAX], group[MAX], count[MAX], udae[MAX], finalSum, again, start=1,		// �־�, �־� ���ڷ� ����, Ƽ�� ��, ������� ����, ���Ῡ��, �Ѿ� 
		id, pre_id, age, id_c,								// �ֹι�ȣ �Է� �� ���� 
		fee = 0, index=0, countTry=1, countUdae=0;					// ���, ����� �ѹ�, ��ǥ Ƽ�ϼ� �Է� Ƚ��, ������� �Է�Ƚ�� 
	
	char *stringJugan[MAX], *stringGroup[MAX], *stringUdae[MAX];
	
	const int FARE[2][5]={											
						{44000,56000,47000,44000,0},				// �ְ���� : ����, ����, û�ҳ�, ����, ���� 
						{37000,46000,40000,37000,0}					// �߰���� : ����, ����, û�ҳ�, ����, ���� 
					   };
	const float disable = 0.6, ugong = 0.5, daja = 0.8, preg = 0.85;	// ��� ������ 			  
	const char *ERRORMESSAGE ="�߸��� �Է��Դϴ�. �ٽ��ϼ���\n";

	// Ƽ�� ���������� �����ϱ� ���� �迭 ����
	int preSum[MAX], 
		thisYear[MAX], thisMonth[MAX], thisDay[MAX], hours[MAX], minutes[MAX];

	do{	
		printf("������ �����ϼ���.\n");								// �־� ���� 
		printf("1. �ְ���\n2. �߰���\n");
		scanf("%1d", &jugan[index]);

//	=====================================�������� �� ���� Ȯ�� 

		preSum[index] = fee * count[index];								// ����� �Ұ� 
		printf("������ %d���Դϴ�.\n", preSum[index]);
		
		printf("��� �߱� �Ͻðڽ��ϱ�?\n1. Ƽ�� �߱�\n2. ����\n"); 
		scanf("%d",&again);
		
		switch (again){
			case 1:													// �߰� ���� 
				index++;
				break;
			case 2:													// ������ ��� ��Ʈ 
				printf("Ƽ�� �߱��� �����մϴ�. �����մϴ�.\n");
				printf("===================================\n");
				FILE *filePointer = fopen("report.csv", "a");		// report.csv ���Ͽ� �Է� ������ ���� 
				for(int i=0;i<=index;i++){
					switch(jugan[i]){								// �ְ��� ���ڷ� ǥ���ϱ� 
						case 1:
							stringJugan[i]="�ְ���";
							break;
						case 2:
							stringJugan[i]="�߰���";
							break;
					}
					
					printf("%s %s\t %d�� %d��\t%s\n", stringJugan[i], stringGroup[i], count[i], preSum[i], stringUdae[i]);
					finalSum+=preSum[i];
					fprintf(filePointer, "%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", 
							  thisYear[i], thisMonth[i], thisDay[i], hours[i], minutes[i], 
							  jugan[i], group[i], count[i], preSum[i], udae[i]);
				}
				fclose(filePointer);
				printf("����� �Ѿ��� %d���Դϴ�.\n", finalSum);
				printf("===================================\n");
				printf("������� �޾� �ֽʽÿ�. �����մϴ�.\n");
				index=0;
				break;
		}
	}while(start==1);
	return 0;
}
