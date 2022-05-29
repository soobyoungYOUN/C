#include <stdio.h>
#include <time.h>
int main()
{
	//	=====================================현재 시간 보기좋게 출력 
	time_t curTime = time(NULL);										// 현재 시간 값 받기 
	int daysFrom1970 = curTime/24/60/60, i=0;
	
	int mon1=31, mon2=28, mon3=31, mon4=30, mon5=31, mon6=30;
	int mon7=31, mon8=31, mon9=30, mon10=31, mon11=30, mon12=31;
	int year1970=1970, month=1, days=1;
	
	for(days; days<=daysFrom1970; days++){
		switch(month){
			case 1:
				i++;
				break;
		}
	}
	printf("%d. %d. %d.", year1970, month, days);
	return 0;
}

//		if(month==1&&i==31){
//			month++;
//			i=1;
//		}
//		else if(month==2 && i==29){
//			month++;
//			i=1;
//		}
//		else if(month==3 && i==31){
//			month++;
//			i=1;
//		}
//		else if(month==4 && i==30){
//			month++;
//			i=1;
//		}
//		else if(month==5 && i==31){
//			month++;
//			i=1;
//		}
//		else if(month==6 && i==30){
//			month++;
//			i=1;
//		}
//		else if(month==7 && i==31){
//			month++;
//			i=1;
//		}
//		else if(month==8 && i==31){
//			month++;
//			i=1;
//		}
//		else if(month==9 && i==30){
//			month++;
//			i=1;
//		}
//		else if(month==10 && i==31){
//			month++;
//			i=1;
//		}
//		else if(month==11 && i==30){
//			month++;
//			i=1;
//		}
//		else if(month==12 && i==31){
//			month=1;
//			i=1;
//			year1970++;
//		}
