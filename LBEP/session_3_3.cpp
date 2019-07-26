#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("Nhap so a:\n");
	scanf("%d",&a);
	printf("Nhap so b:\n");
	scanf("%d",&b);
	printf("Nhap so c:\n");
	scanf("%d",&c);

	// if( !(a+c <= c || a+c <= b || b+c <= a)){		
	// } 

	if(a+b > c && a+c > b && b+c > a){
		int C = a + b +c;
		double P = (double)C/2;
		double S;
		S =  sqrt(P*(P-a)*(P-b)*(P-c));
		printf("Day la 3 canh 1 tam giac\n");
		printf("Dien tich: %lf\n",S );
		printf("Chu vi: %d\n",C );
	}else{
		printf("Khong phai 3 canh tam giac\n");	
	}


}