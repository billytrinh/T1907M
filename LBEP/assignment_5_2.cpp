#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);

	for (int i = 1; i < n; ++i)
	{
		int tg = i;
		int kq= 0;
		for (int j = 0; tg != 0 ; tg/=10)
		{
			kq = kq* 10 + tg%10;
		}
		if(kq == i){
			printf("%d la so thuan nghich\n",i);
		}
	}
	return 0;
}