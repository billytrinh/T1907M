#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap gia tri cho a:\n");
	scanf("%d",&a);
	printf("Nhap gia tri cho b:\n");
	scanf("%d",&b);

	if(a > b && b!= 0 && b!= 1){
		printf("%d / %d = %d\n",a,b,a/b);
	}else if(a >b && b==0){
		printf("Khong the chia cho 0\n");
	}else if((a > b || a < b) && b == 1){
		printf("Nhan/Chia cho 1\n");	
	}else{
		printf("%d * %d = %d\n",a,b,a*b);	
	}
	
}