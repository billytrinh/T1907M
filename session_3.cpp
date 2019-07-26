#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n:\n");
	scanf("%d",&n);
	if(n>=2 && n<=7){
		printf("Day la thu %d\n",n);
	}else if(n == 8){
		printf("Day la chu nhat\n");
	}else{
		printf("Khong phai ngay trong tuan\n");
	}

	return 0;
}