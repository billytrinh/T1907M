#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap so a:\n");
	scanf("%d",&a);
	printf("Nhap so b:\n");
	scanf("%d",&b);
	printf("Nhap so c:\n");
	scanf("%d",&c);

	if(a > b){
		if(b > c){
			printf("Max: %d, Min: %d\n",a,c);
		}else{
			if(a > c){
				printf("Max: %d, Min: %d\n",a,b);
			}else{
				printf("Max: %d, Min: %d\n",c,b);
			}
		}
	}else{
		if(a > c){
			printf("Max: %d, Min: %d\n",b,c);
		}else{
			if(b > c){
				printf("Max: %d, Min: %d\n",b,a);
			}else{
				printf("Max: %d, Min: %d\n",c,a);
			}
		}
	}

	return 0;
}