#include <stdio.h>

bool kiem_tra_so_le(int x){
	int c = 10;
	if(x % 2 != 0){
		return true;
	}
	return false;
}

int main(){
	int n;
	printf("Nhap n =\n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		if(kiem_tra_so_le(i)){
			printf("so le: %d\n",i);
		}
	}
	return 0;
}