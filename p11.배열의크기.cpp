#include <stdio.h>
int main()
{
	int numArr[10]={11,22,33,44,55,66,77,88,99,110}; // �迭�� ����, �� �Ҵ�
	
	printf("%d\n", sizeof(numArr)); // 4����Ʈ�� ��Ұ� 10��
	
	printf("%d\n", sizeof(numArr)/sizeof(int)); // 4����Ʈ�� ��Ұ� 10��
	
	return 0; 
}
