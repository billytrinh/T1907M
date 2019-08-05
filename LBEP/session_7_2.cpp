#include <stdio.h>

int main(){
	int ar[4][3];

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Nhap ar[%d][%d]=\n",i,j);
			scanf("%d",&ar[i][j]);
		}
	}

	int max = 0,x = 0;

	for (int i = 0; i < 4; ++i)
	{	int tong = 0;
		for (int j = 0; j < 3; ++j)
		{
			tong += ar[i][j];
		}
		if(i == 0){
			max  = tong;
		}
		if(max < tong){
			max = tong;
			x = i;
		}
	}

	printf("Max = %d cua hang thu %d\n",max,x);

	return 0;
}