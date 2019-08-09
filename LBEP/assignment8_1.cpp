#include <stdio.h>

int tim_max(int a[],int n){
	int max = a[0];
	for (int i = 0; i < n; ++i)
	{
		if(max < a[i]){
			max = a[i];
		}
	}
	return max;
}

void in_mang_sap_xep(int a[],int n){
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-i-1; ++j)
		{
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	printf("Mang sau khi sap xep:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%3d\t",a[i]);
	}
}

int tim_hang_gia_tri_lon_nhat(int a[][4],int n){
	int max;
	int vi_tri = 0;
	for (int i = 0; i < n; ++i)
	{	
		int tong_hang = 0;
		for (int j = 0; j < 4; ++j)
		{
			tong_hang += a[i][j];
		}
		if(i == 0){
	 		max = tong_hang;
		}
		if(max < tong_hang){
			max = tong_hang;
			vi_tri = i;
		}
	}
	return vi_tri;
}

int tim_n_max(int a[],int n){
	int max = tim_max(a,n);
	int n_max ;
	if(max == a[0]){
		n_max = a[1];
	}else{
		n_max = a[0];
	}

	for (int i = 0; i < n; ++i)
	{
		if(n_max < a[i] && a[i] < max){
			n_max = a[i];
		}
	}

	return n_max;
}

int main(){
	int x[5] = {4,22,8,1,3};
	printf("so lon nhat: %d\n",tim_max(x,5)); 
	printf("so gan lon nhat: %d\n",tim_n_max(x,5)); 
	in_mang_sap_xep(x,5);
	int y[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	printf("\nHang co gia tri lon nhat: %d\n",tim_hang_gia_tri_lon_nhat(y,4));

	return 0;
}