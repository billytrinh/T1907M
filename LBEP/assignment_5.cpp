#include <stdio.h>

int main(){
	int m,n,tg=0;
	printf("Nhap n=\n");
	scanf("%d",&n);
	m = n;
	while(m != 0){
		tg = tg*10 + m%10;
		m /= 10;
	}

	if(tg == n){
		printf("%d la so thuan nghich\n",n);
	}else{
		printf("%d khong phai la so thuan nghich\n",n);
	}

	return 0;
}