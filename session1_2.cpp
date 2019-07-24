#include <stdio.h>

int main(){
	int x,y;
	printf("Nhap x=\n");
	scanf("%d",&x);
	printf("Nhap y=\n");
	scanf("%d",&y);
	
	if(x>y){
		printf("So lon: %d\n",x);		
	}else{
		printf("So lon: %d\n",y);	
	}

	return 0;
}