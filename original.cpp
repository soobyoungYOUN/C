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
		printf("기준환율 : %.2f / 1000원\n환전결과\n달러 : %.2f 달러\n거스름돈 : %d 원\n", USD, exchange, change);
		break;
		
	case 2 :
		temp = WON/JPY*100;
		exchange = temp/100;
		tempChange = (WON-exchange*JPY)/10;
		change = tempChange*10;
		printf("기준환율 : %.2f / 1000원\n환전결과\n파운드 : %.0f 엔화\n거스름돈 : %d 원\n", JPY, exchange, change);
		break;
	
	case 3 :
		temp = WON/CNY*100;
		exchange = temp/100;
		tempChange = (WON-exchange*CNY)/10;
		change = tempChange*10;
		printf("기준환율 : %.2f / 1000원\n환전결과\n파운드 : %.0f 위안\n거스름돈 : %d 원\n", CNY, exchange, change);
		break;
		
	case 4 :
		temp = WON/EUR*100;
		exchange = temp/100;
		tempChange = (WON-exchange*EUR)/10;
		change = tempChange*10;
		printf("기준환율 : %.2f / 1000원\n환전결과\n파운드 : %.0f 유로\n거스름돈 : %d 원\n", EUR, exchange, change);
		break;
		
	case 5 :
		temp = WON/GBP*100;
		exchange = temp/100;
		tempChange = (WON-exchange*GBP)/10;
		change = tempChange*10;
		printf("기준환율 : %.2f / 1000원\n환전결과\n파운드 : %.0f 파운드\n거스름돈 : %d 원\n", GBP, exchange, change);
		break;
	}
	return 0;
}
