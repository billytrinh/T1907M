#include <stdio.h>

int main(){
	int ar[3][4];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("Nhap ar[%d][%d]=\n",i,j);
			scanf("%d",&ar[i][j]);
		}
	}

	// for (int i = 0; i < 3; ++i)
	// {
	// 	for (int j = 0; j < 4; ++j)
	// 	{
	// 		if( i == 1){
	// 			ar[i][j]++;
	// 		}
	// 	}
	// }

	for (int i = 0; i < 4; ++i)
	{
		ar[1][i]++;
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%5d",ar[i][j]);	
		}
		printf("\n");
	}	
	return 0;
}