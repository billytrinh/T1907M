#include <stdio.h>

int main(){
	int ar[5] = {6,7,8,9,10};

	printf("ar[2] = %d\n",ar[2]);
	printf("ar[2] = %d\n",*(ar+2));

	printf("ar[0] = %d\n",*ar);

	char s[10];
	scanf("%s",s);

	printf("chuoi vua nhap: %s\n",s);

	return 0;
}