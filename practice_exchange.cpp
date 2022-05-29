#include <stdio.h> 
int main()
{
	int WON;
	int num;
	const float USD = 1233.08;
	const float JPY = 105.92;
	const float CNY = 194.06;
	
	const float EUR = 1356.23;
	const float GBP = 1614.53;
		
	printf("원하는 금액(원화) : ");
    scanf("%d", &WON);
    printf("환전할 외화 선택: 1.USD, 2.JPY, 3.CNY 4.EUR, 5.GBP \n");
    scanf("%d", &num);
		
	int temp;
	float exchange;
	int tempChange;
	int change;
	int change500;
	int change500_rest = change500 % 500;
	int change100;
	int change100_rest = change100 % 100;
	int change50;
	int change50_rest = change50 % 50;
	int change10;
	
	
//	switch 적용 
	switch (num)
	{
	case 1 : 
		temp = WON/USD*100;
		exchange = temp/100;
		tempChange = (WON-exchange*USD)/10;
		change = tempChange*10;
		printf("기준환율 : %.2f / 1000원\n	환전결과\n 달러 : %.2f 달러\n 거스름돈 : %d 원\n", USD, exchange, change);
		
//		잔돈 구분하기 
		if (change >= 500) 										// 500원 거스른 후에 잔 
		{
			change500 = change / 500;
			
			if ((change500_rest <100) && (change500_rest)>=50 ) // 잔돈 = 580원 
			{
				change50 = change500_rest / 50;
				change10 = change50_rest / 10;
			}
			else if (change500_rest < 50)						// 잔돈 = 530원 일 때 
			{
				change10 = change500_rest/ 10;
			}
			else												// 500원 거르고 남은 잔돈 백원 단위 
			{
				change100 = change500_rest/100;					
				if (change100_rest < 50)						// 잔돈 410원 일 때 
				{
					change10 = change100_rest /10;
				}
				else											
				{
					change50 = change100_rest/50;
					change10 = change50_rest / 10;	
				}	
			}
		}
		else if ((change <500) && (change >= 100)) 				// 100 <= 잔돈 < 500 
		{
			change100 = change/100;
			if (change100_rest < 50)							// 110 원일 때 
			{
				change10 = change100_rest / 10;		
			}
			else
			{
				change50 = change100_rest / 50;
				change10 = change50_rest / 10;
			}
		}
		else if ((change <100) && (change >= 50))				// 50 <= 잔돈 < 100 
		{
			change50 = change /50;
			change10 =  change50_rest / 10;
		}
		else													// 잔돈이 50원 미만 
		{
			change10 = change / 10;
		}
		printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개", change500, change100, change50, change10);
		break;
		
	case 2 :
		temp = WON/JPY*100;
		exchange = temp/100;
		tempChange = (WON-exchange*JPY)/10;
		change = tempChange*10;
		printf("기준환율 : %.2f / 1000원\n	환전결과\n 엔화 : %.0f 엔\n 거스름돈 : %d 원\n", JPY, exchange, change);
		break;
	
	case 3 :
		temp = WON/CNY*100;
		exchange = temp/100;
		tempChange = (WON-exchange*CNY)/10;
		change = tempChange*10;
		printf("기준환율 : %.2f / 1000원\n	환전결과\n 위안 : %.0f 위안\n 거스름돈 : %d 원\n", CNY, exchange, change);
	}
	return 0;
}
