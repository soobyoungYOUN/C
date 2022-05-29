//#include <stdio.h>	//27
//int main()
//{
//	char input;
//	do{
//		printf("문자를 입력하세요 : ");
//		scanf(" %c", &input) ;		// %c 띄어쓰기 없으면 인식이 이상해짐. 
//	}while (input !='q');			// while
//	printf("종료합니다.\n");
//	return 0; 
//}

#include <stdio.h>	//27
int main()
{
	char input;
	do{
		printf("문자를 입력하세요 : ");
		scanf("%c", &input) ;	
		getchar();					// scanf의 오류를 해결하지만 q를 입력해도 while문에 갖혀있음 
	}while (input !='q');			// while
	printf("종료합니다.\n");
	return 0; 
}

