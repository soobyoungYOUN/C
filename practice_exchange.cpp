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
		
	printf("���ϴ� �ݾ�(��ȭ) : ");
    scanf("%d", &WON);
    printf("ȯ���� ��ȭ ����: 1.USD, 2.JPY, 3.CNY 4.EUR, 5.GBP \n");
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
	
	
//	switch ���� 
	switch (num)
	{
	case 1 : 
		temp = WON/USD*100;
		exchange = temp/100;
		tempChange = (WON-exchange*USD)/10;
		change = tempChange*10;
		printf("����ȯ�� : %.2f / 1000��\n	ȯ�����\n �޷� : %.2f �޷�\n �Ž����� : %d ��\n", USD, exchange, change);
		
//		�ܵ� �����ϱ� 
		if (change >= 500) 										// 500�� �Ž��� �Ŀ� �� 
		{
			change500 = change / 500;
			
			if ((change500_rest <100) && (change500_rest)>=50 ) // �ܵ� = 580�� 
			{
				change50 = change500_rest / 50;
				change10 = change50_rest / 10;
			}
			else if (change500_rest < 50)						// �ܵ� = 530�� �� �� 
			{
				change10 = change500_rest/ 10;
			}
			else												// 500�� �Ÿ��� ���� �ܵ� ��� ���� 
			{
				change100 = change500_rest/100;					
				if (change100_rest < 50)						// �ܵ� 410�� �� �� 
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
		else if ((change <500) && (change >= 100)) 				// 100 <= �ܵ� < 500 
		{
			change100 = change/100;
			if (change100_rest < 50)							// 110 ���� �� 
			{
				change10 = change100_rest / 10;		
			}
			else
			{
				change50 = change100_rest / 50;
				change10 = change50_rest / 10;
			}
		}
		else if ((change <100) && (change >= 50))				// 50 <= �ܵ� < 100 
		{
			change50 = change /50;
			change10 =  change50_rest / 10;
		}
		else													// �ܵ��� 50�� �̸� 
		{
			change10 = change / 10;
		}
		printf("500�� %d��, 100�� %d��, 50�� %d��, 10�� %d��", change500, change100, change50, change10);
		break;
		
	case 2 :
		temp = WON/JPY*100;
		exchange = temp/100;
		tempChange = (WON-exchange*JPY)/10;
		change = tempChange*10;
		printf("����ȯ�� : %.2f / 1000��\n	ȯ�����\n ��ȭ : %.0f ��\n �Ž����� : %d ��\n", JPY, exchange, change);
		break;
	
	case 3 :
		temp = WON/CNY*100;
		exchange = temp/100;
		tempChange = (WON-exchange*CNY)/10;
		change = tempChange*10;
		printf("����ȯ�� : %.2f / 1000��\n	ȯ�����\n ���� : %.0f ����\n �Ž����� : %d ��\n", CNY, exchange, change);
	}
	return 0;
}
