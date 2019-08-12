#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ar;	
	//ar = (int *)malloc(5 * sizeof(int));
	ar = (int *)calloc(5,sizeof(int));
	for (int i = 0; i < 5; ++i)
	{
		*(ar+i) = i + 10;//ar[i] = i+10;
	}

	for (int i = 0; i < 5; ++i)
	{
		//printf("%3d ",ar[i]);
		printf("%5d",*(ar+i));
	}

	ar = (int *)realloc(ar,10*sizeof(int));

	for (int i = 5; i < 10; ++i)
	{
		*(ar+i) = i + 10;
	}

	printf("\n");
	for (int i = 0; i < 10; ++i)
	{
		//printf("%3d ",ar[i]);
		printf("%5d",*(ar+i));
	}

	return 0;
}