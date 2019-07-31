#include<stdio.h>
//#include<math.h>

int main (){
	
	int n, S=0,i;
	printf ("nhap n :\n");
	scanf ("%d",&n);
	for (i = 1; i<= n/2; i++){
		if(n%i == 0){
			S = S + i;
		}
		//i++;
		
	}
	if(S == n){
		printf ("%d la so hoan hao \n ",n);
	}else {
		printf (" %d khong la so hoan hao\n",n);
	}
	return 0;
	
}
