#include <stdio.h>

bool kiem_tra_so_hoan_hao(int n){
	int s= 0;
	for (int i = 1; i <= n/2; ++i)
	{
		if(n % i == 0){
			s += i;
		}
	}

	if(n == s){
		return true;
	}
	return false;
}

int tim_so_nghich_dao(int n){
	int s = 0;
	while(n != 0){
		s = s*10 + n%10;
		n /= 10;
	}
	return s;
}

int main(){
	int n = 12345;
	if(kiem_tra_so_hoan_hao(n)){
		printf("%d la so hoan hao\n",n);
	}
	printf("So nghich dao cua %d la %d\n",n,tim_so_nghich_dao(n));
	return 0;
}