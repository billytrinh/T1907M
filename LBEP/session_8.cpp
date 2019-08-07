#include <stdio.h>

int tinh_tong(int a,int b){
	int c;
	c = a + b;
	return c;
}

void in_ra_binh_phuong(int a){
	int a2 = tinh_tong(a,a);
	printf("binh phuong = %d\n",a2);
}

int main(){
	int x = 10,y= 20;
	int z = tinh_tong(x,y);
	printf("z = %d\n",tinh_tong(x,y));
	in_ra_binh_phuong(z);
	return 0;
}
