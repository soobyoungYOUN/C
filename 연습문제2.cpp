#include <stdio.h>
int main()
{
	int stat =1;
	int input1;
	int input2;
	char cal;
	int result = 0;

	while (stat)	
	{
		printf("수식을 입력하세요 : ");
		scanf("%d %c %d", &input1, &cal, &input2);
		
		if ((input1==0) && (cal=='+') && (input2==0)){
			stat=0;
			printf("종료합니다.");
		}
		else{
			switch(cal){
			case '+':
				result = input1 + input2;
				break;
			case '-':
				result = input1 - input2;
				break;
			case '*':
				result = input1 * input2;
				break;
			case '/':
				result = input1 / input2;
				break;			
			default:
				printf("다시")	;
				break; 
			}
			printf("%d %c %d = %d 입니다.\n", input1, cal, input2, result);
		}
	}
	return 0;
}
