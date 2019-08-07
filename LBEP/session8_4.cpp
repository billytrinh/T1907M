#include <stdio.h>

void in_mang(int x[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",x[i]);
	}
}

void in_ma_tran(int mt[][3],int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%3d",mt[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int a[5] = {2,3,41,8,1};
	in_mang(a,5);
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	in_mang(b,10);
	int mt1[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
	in_ma_tran(mt1,4);
	int mt2[2][3] = {1,2,3,4,5,6};
	in_ma_tran(mt2,2);
	return 0;
}