#include <stdio.h> 
int main()
{
	int decimal =0;
	int binary[4] = {1,1,0,1};
	int temp=0;
	decimal += binary[3];
	for(int i=1; i>=0; i--){
		temp=1;
		for(int j=0; j<=2-i; j++){
			temp*=2;
		}
		decimal+=temp;
	}
	
	printf("%d\n", decimal);
	return 0;
}
