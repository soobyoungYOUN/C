#include <stdio.h>
int main()
{
	int numArr[3][4] = {	// ���� ũ�� 3, ���� ũ�� 4�� int�� 2���� ��� ���� 
	{11,22,33,44},
	{55,66,77,88},
	{99,110,121,132}
	};
	
	int col =sizeof(numArr[0])  / sizeof(int);	// 4: 2���� �迭�� ���ο�� ������ ũ�⸦ ���� ��
												// ���� �� ���� ũ�⸦ ����� ũ��� ������ 
	int row =sizeof(numArr) / sizeof(numArr[0]) ;	// 3: 2���� �迭�� ���ο�� ������ ���� ���� 
										// �迭�� �����ϴ� ��ü ������ ���� �� ���� ũ��� ������ 
	for(int i=0; i<row;i++) {
		for(int j=0; j<col; j++){
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
	return 0; 
}


