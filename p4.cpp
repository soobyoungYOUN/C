//#include <stdio.h>	//4
//int main()
//{
//	int i =0;
//	while (i < 100)	// i가 100보다 작을 때 반복. 0에서 99까지 증가하면서 100번 반복 
//	{
//		printf("hello world!\n");
//		i++;		// i를 1씩 증가 
//	}
//	return 0;
//}

//#include <stdio.h> //6
//int main()
//{
//	int i =1;
//	while (i <= 100)	// i가 100보다 작을 때 반복.
//	{				// 1에서 100까지 증가하면서 100번 반복 
//		printf("hello world!\n");
//		i++;		// i를 1씩 증가 
//	}
//	return 0;
//}

//#include <stdio.h>	//7
//int main()			// 초깃값을 크게 주고, 변수를 감소시키면서 반복 가능 
//{
//	int i =100;
//	while (i > 0)	// i가 0보다 클 때 반복. 100에서 1까지 증가하면서 100번 반복 
//	{
//		printf("hello world!\n");	//Hello, world!와 i의 값을 함께 출력 
//		i--;						// i를 1씩 감소 
//	}
//	return 0;
//}

//#include <stdio.h>	//8
//int main()
//{
//	int i =0;
//	while (i < 100); // 세미콜론 생략 
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
//	scanf("%d", &count);// 값 입력받음 
//	
//	int i = 0;
//	while (i < count)	// i가 count보다 작을 때 반복
//	{
//		printf("hello world! %d\n", i);
//		i++;		// i를 1씩 증가 
//	}
//	return 0;
//}

//#include <stdio.h>	//10
//int main()
//{
//	int count;
//	scanf("%d", &count);// 값 입력받음 
//	
//	while (count>0)	// count가 0보다 클 때 반복
//	{
//		printf("hello world! %d\n", count);
//		count--;		
//	}
//	return 0;
//}

//#include <stdio.h>	//11
//#include <stdlib.h>	// srand, rand 함수가 선언된 헤더 파일 
//#include <time.h> 	// time 함수가 선언된 헤더 파일
//int main()
//{
//	srand(time(NULL));	// 현재 시간값으로 시드 설정 - 시드 : 랜덤발생 때의 기록을 저장하는 곳 
//	
//	int i = 0;
//	while(i !=3){
//		i = rand() %10;	// rand 함수르 사용하여 무작위로 정수를 생성한 뒤 10 미만의 숫자로 만듦 
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>	//14
//int main()
//{
//	while(1){		// while에 1을 지정하면 무한 루프 
//		printf("Hello world!\n");
//	}
//	return 0;
//}

//#include <stdio.h>	//16
//#include <stdbool.h>// bool, true, false가 정의된 헤더파일 
//int main()
//{
//	while(true){		// while에 true를 지정하면 무한 루프 
//		printf("Hello world!\n");
//	}
//	return 0;
//}

//#include <stdio.h> //21
//int main()
//{
//	int i =0;
//	do			// 처음 한 번은 아래 코드가 실행됨 
//	{
//		printf("Hello world! %d\n", i);	// Hello world1 와 i의 값을 함께 출력
//		i++;							// i를 1씩 증가시킴 
//	}while(i<100);						// i가 100보다 작을 때, 반복. 0부터 99까지 증가하면서 100번반복 
//	return 0;
//}

//#include <stdio.h> //23
//int main()
//{
//	int i =0;
//
//	printf("Hello world! %d\n", i);	//do에 해당하는 부분  
//	i++;
//	
//	while(i<100){						
//		printf("Hello world! %d\n", i);	// Hello world1 와 i의 값을 함께 출력
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
//#include <stdlib.h>	// srand, rand 함수가 선언된 헤더 파일 
//#include <time.h> 	// time 함수가 선언된 헤더 파일
//int main()
//{
//	srand(time(NULL));	// 현재 시간값으로 시드 설정 - 시드 : 랜덤발생 때의 기록을 저장하는 곳 
//	
//	int i = 0;
//	
//	do{
//		i = rand() %10;	// rand 함수르 사용하여 무작위로 정수를 생성한 뒤 10 미만의 숫자로 만듦 
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
//	}while (0);			// while에 0을 지정하면 코드가 한 번만 실행됨 
//	return 0; 
//}
