//#include <stdio.h>	//27
//int main()
//{
//	char input;
//	do{
//		printf("���ڸ� �Է��ϼ��� : ");
//		scanf(" %c", &input) ;		// %c ���� ������ �ν��� �̻�����. 
//	}while (input !='q');			// while
//	printf("�����մϴ�.\n");
//	return 0; 
//}

#include <stdio.h>	//27
int main()
{
	char input;
	do{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%c", &input) ;	
		getchar();					// scanf�� ������ �ذ������� q�� �Է��ص� while���� �������� 
	}while (input !='q');			// while
	printf("�����մϴ�.\n");
	return 0; 
}

