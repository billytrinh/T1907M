#include <stdio.h>

int main(){

	for (int i = 0; i < 10; ++i)
	{
		printf("Bat dau lau san tang thu %d\n",i);
		if(i==6){
			//break;
			continue;
		}	
		printf("Lau xong san tang thu %d\n",i);
	}


	return 0;
}