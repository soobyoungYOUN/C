//#include <stdio.h>	//4
//int main()
//{
//	int i =0;
//	while (i < 100)	// i�� 100���� ���� �� �ݺ�. 0���� 99���� �����ϸ鼭 100�� �ݺ� 
//	{
//		printf("hello world!\n");
//		i++;		// i�� 1�� ���� 
//	}
//	return 0;
//}

//#include <stdio.h> //6
//int main()
//{
//	int i =1;
//	while (i <= 100)	// i�� 100���� ���� �� �ݺ�.
//	{				// 1���� 100���� �����ϸ鼭 100�� �ݺ� 
//		printf("hello world!\n");
//		i++;		// i�� 1�� ���� 
//	}
//	return 0;
//}

//#include <stdio.h>	//7
//int main()			// �ʱ갪�� ũ�� �ְ�, ������ ���ҽ�Ű�鼭 �ݺ� ���� 
//{
//	int i =100;
//	while (i > 0)	// i�� 0���� Ŭ �� �ݺ�. 100���� 1���� �����ϸ鼭 100�� �ݺ� 
//	{
//		printf("hello world!\n");	//Hello, world!�� i�� ���� �Բ� ��� 
//		i--;						// i�� 1�� ���� 
//	}
//	return 0;
//}

//#include <stdio.h>	//8
//int main()
//{
//	int i =0;
//	while (i < 100); // �����ݷ� ���� 
//	{
//		printf("hello world!\n");
//		i++;	
//	}
//	return 0;
//}

//#include <stdio.h>	//9
//int main()
//{
//	int count;
//	scanf("%d", &count);// �� �Է¹��� 
//	
//	int i = 0;
//	while (i < count)	// i�� count���� ���� �� �ݺ�
//	{
//		printf("hello world! %d\n", i);
//		i++;		// i�� 1�� ���� 
//	}
//	return 0;
//}

//#include <stdio.h>	//10
//int main()
//{
//	int count;
//	scanf("%d", &count);// �� �Է¹��� 
//	
//	while (count>0)	// count�� 0���� Ŭ �� �ݺ�
//	{
//		printf("hello world! %d\n", count);
//		count--;		
//	}
//	return 0;
//}

//#include <stdio.h>	//11
//#include <stdlib.h>	// srand, rand �Լ��� ����� ��� ���� 
//#include <time.h> 	// time �Լ��� ����� ��� ����
//int main()
//{
//	srand(time(NULL));	// ���� �ð������� �õ� ���� - �õ� : �����߻� ���� ����� �����ϴ� �� 
//	
//	int i = 0;
//	while(i !=3){
//		i = rand() %10;	// rand �Լ��� ����Ͽ� �������� ������ ������ �� 10 �̸��� ���ڷ� ���� 
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>	//14
//int main()
//{
//	while(1){		// while�� 1�� �����ϸ� ���� ���� 
//		printf("Hello world!\n");
//	}
//	return 0;
//}

//#include <stdio.h>	//16
//#include <stdbool.h>// bool, true, false�� ���ǵ� ������� 
//int main()
//{
//	while(true){		// while�� true�� �����ϸ� ���� ���� 
//		printf("Hello world!\n");
//	}
//	return 0;
//}

//#include <stdio.h> //21
//int main()
//{
//	int i =0;
//	do			// ó�� �� ���� �Ʒ� �ڵ尡 ����� 
//	{
//		printf("Hello world! %d\n", i);	// Hello world1 �� i�� ���� �Բ� ���
//		i++;							// i�� 1�� ������Ŵ 
//	}while(i<100);						// i�� 100���� ���� ��, �ݺ�. 0���� 99���� �����ϸ鼭 100���ݺ� 
//	return 0;
//}

//#include <stdio.h> //23
//int main()
//{
//	int i =0;
//
//	printf("Hello world! %d\n", i);	//do�� �ش��ϴ� �κ�  
//	i++;
//	
//	while(i<100){						
//		printf("Hello world! %d\n", i);	// Hello world1 �� i�� ���� �Բ� ���
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h> 	//24
//int main()
//{
//	int count;
//	scanf("%d", &count);
//	
//	do{
//		printf("Hello world! %d\n", count);
//		count--;
//	}while (count >0);
//	return 0;
//}

//#include <stdio.h>	//26
//#include <stdlib.h>	// srand, rand �Լ��� ����� ��� ���� 
//#include <time.h> 	// time �Լ��� ����� ��� ����
//int main()
//{
//	srand(time(NULL));	// ���� �ð������� �õ� ���� - �õ� : �����߻� ���� ����� �����ϴ� �� 
//	
//	int i = 0;
//	
//	do{
//		i = rand() %10;	// rand �Լ��� ����Ͽ� �������� ������ ������ �� 10 �̸��� ���ڷ� ���� 
//		printf("%d\n", i);
//	}while(i !=3);
//	
//	return 0;
//}

//#include <stdio.h>	//27
//int main()
//{
//	do{
//		printf("Hello, world!\n");
//	}while (0);			// while�� 0�� �����ϸ� �ڵ尡 �� ���� ����� 
//	return 0; 
//}
