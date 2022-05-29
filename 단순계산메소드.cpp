#include <stdio.h>
int mul(int a, int b){
	int result;
	result = a*b;
	return result;
}

int plus(int a, int b){
	int result;
	result = a+b;
	return result;
}

int minus(int a, int b){
	int result;
	result = a-b;
	return result;
}

int divide(int a, int b){
	int result1, result2;
	result1= a/b;
	result2= a%b;
	return result1, result2;
}

int powA(int a, int b){
	int result=a;
	if (1<=b){
		for(int i=1;i<=b;i++){
			result*=a;
		}
	}
	else if(a==0)
		result=a;
	else if(b==0)
		result=1;
	else if(b<0){
		
	}
		
	}
}
