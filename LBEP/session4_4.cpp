#include <stdio.h>

int main(){
	int S = 0;

	for (int i = 1; i <= 1000; ++i)
	{
		S += i;
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("S = %d\n",S);
	}
	//printf("S = %d\n",S);

	return 0;
}