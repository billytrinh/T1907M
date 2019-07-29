#include <stdio.h>

int main(){
	int T = 1000,S = 8,n=0;

	// while(T<2000){
	// 	T = T + S*T/100;
	// 	n++;
	// }

	do{
		T = T+ S*T/100;
		n++;		
	}while(T<2000);

	printf("So nam can gui: %d\n",n);

	return 0;
}