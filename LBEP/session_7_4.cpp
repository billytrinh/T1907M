#include <stdio.h>

int main(){
	int a[7] = {2,1,6,22,9,12,4};

	for (int i = 0; i < 7; ++i)
	{	
		int	j = i - 1;
		int tmp = a[i];
		while( (j >= 0) && (tmp < a[j])){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
	}

	for (int i = 0; i < 7; ++i)
	{
		printf("%3d",a[i]);
	}
}