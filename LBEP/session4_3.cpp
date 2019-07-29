#include <stdio.h>

int main(){
	int n=1;S = 0;

	while(n<=1000){
		S += n;
		n++;
	}
	printf("S = %d\n",S);

	return 0;
}