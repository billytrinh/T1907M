#include <stdio.h>

bool kiem_tra_so_nguyen_to(int n){
	if(n <2 ) return false;
	if(n==2) return true;
	for (int i = 2; i <= n/2; ++i)
	{
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		if(kiem_tra_so_nguyen_to(i)){
			printf("%d la so nguyen to\n",i);
		}
	}
	
	if(kiem_tra_so_nguyen_to(n)){
		printf("%d la so nguyen to\n",n);
	}else{
		printf("%d khong phai la so nguyen to\n",n);
	}

	return 0;
}