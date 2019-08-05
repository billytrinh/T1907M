#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap phan tu arr[%d] = \n",	i);
		scanf("%d",&arr[i]);
		int j=0;
		while(j < i){
			if(arr[j] == arr[i]){
				printf("Nhap lai phan tu arr[%d] = \n",	i);
				scanf("%d",&arr[i]);
				j = -1;
			}
			j++;
		}
		
	}

	return 0;
}