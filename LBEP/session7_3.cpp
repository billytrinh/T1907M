#include <stdio.h>

int main(){
	int a[7] = {2,1,6,22,9,12,4};

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6-i; ++j)
		{
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < 7; ++i)
	{
		printf("%3d",a[i]);
	}

	return 0;
}