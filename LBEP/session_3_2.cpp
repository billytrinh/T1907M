#include <stdio.h>

int main(){
	int n;
	printf("Nhap so n:\n");
	scanf("%d",&n);

	switch(n){
		case 2: printf("day la thu 2\n");break;
		case 3: printf("day la thu 3\n");break;
		case 4: printf("day la thu 4\n");break;
		case 5: printf("day la thu 5\n");break;
		case 6: printf("day la thu 6\n");break;
		case 7: printf("day la thu 7\n");break;
		case 8: printf("day la thu 8\n");break;
		default: printf("Khong phai ngay trong tuan\n");
	}

	char c  = 'h';

	switch(c){
		case 'a': printf("Hello a\n");break;
		case 'b': printf("Hello b\n");break;
		case 'h': printf("Hello h\n");break;
		default: printf("hello world\n");
	}



}