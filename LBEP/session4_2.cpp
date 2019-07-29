#include <stdio.h>

int main(){
	int n;

	// printf("Nhap so n=\n");
	// scanf("%d",&n);

	// while(n>10 || n<0){
	// 	printf("Nhap so n=\n");
	// 	scanf("%d",&n);
	// }
	do{
		printf("Nhap so n=\n");
		scanf("%d",&n);
	}while(n> 10 || n < 0);

	printf("Hoan thanh\n");

	return 0;
}