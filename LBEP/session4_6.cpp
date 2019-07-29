#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);

	int dem_so_luong_uoc = 0;
	for (int i = 1; i <= n; ++i)
	{
		if(n%i == 0){
			dem_so_luong_uoc++;
		}
	}

	if(dem_so_luong_uoc == 2){
		printf("n la so nguyen to\n");
	}else{
		printf("n khong phai so nguyen to\n");
	}

	return 0;
}