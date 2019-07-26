#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap gia tri cho a:\n");
	scanf("%d",&a);
	printf("Nhap gia tri cho b:\n");
	scanf("%d",&b);
	if(a > b){
		if(b != 0){
			printf("%d / %d = %d\n",a,b,a/b);
		}else{
			printf("Khong the chia cho 0\n");
		}	
	}else{
		printf("%d * %d = %d\n",a,b,a*b);	
	}

	return 0;
}