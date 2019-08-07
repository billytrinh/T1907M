#include <stdio.h>

int main(){
	int mt1[4][3],mt2[3][4];

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("Nhap mt1[%d][%d] = \n",i,j );
			scanf("%d",&mt1[i][j]);
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			mt2[i][j] = mt1[j][i];
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%3d", mt1[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%3d", mt2[i][j]);
		}
		printf("\n");
	}
}