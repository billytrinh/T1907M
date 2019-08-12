#include <stdio.h>

int main(){
	int x,y;
	int *p,*q;

	p = &x;
	q = &y;

	printf("Nhap x =\n");
	scanf("%d",p); // scanf("%d",&x);

	printf("Nhap y =\n");
	scanf("%d",q); // scanf("%d",&y);

	printf("x + y = %d\n",*p + *q );
	printf("x - y = %d\n",*p - *q );

	return 0;
}