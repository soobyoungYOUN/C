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
		printf("������ �Է��ϼ��� : ");
		scanf("%d %c %d", &input1, &cal, &input2);
		
		if ((input1==0) && (cal=='+') && (input2==0)){
			stat=0;
			printf("�����մϴ�.");
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
				printf("�ٽ�")	;
				break; 
			}
			printf("%d %c %d = %d �Դϴ�.\n", input1, cal, input2, result);
		}
	}
	return 0;
}
