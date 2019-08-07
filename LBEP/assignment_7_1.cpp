#include <stdio.h>

int main(){
	int mt[4][4];
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("Nhap mt[%d][%d] = \n",i,j );
			scanf("%d",&mt[i][j]);
		}
	}

	int total = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(i == j){
				total += mt[i][j];
			}
		}
	}

	printf("Trung binh: %f\n",(float)total/4);

	return 0;
}