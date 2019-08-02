#include <stdio.h>

int main(){
	int  n;
	printf("Nhap so phan tu n=\n");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu:\n");
		scanf("%d",&a[i]);
	}

	int max,min,n_max,n_min;
	max = a[0];
	min = a[0];

	for (int i = 0; i < n; ++i)
	{
		if(max < a[i]){
			max = a[i];
		}
		if(min > a[i]){
			min = a[i];
		}
	}
	n_max = a[0];
	n_min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if(max == a[0]){
			n_max = a[1];
		}
		if(min == a[0]){
			n_min = a[1];
		}

		if(n_max < a[i] && a[i] < max){
			n_max = a[i];
		}
		if(n_min > a[i] && a[i] > min){
			n_min = a[i];
		}
	}

	printf("gia tri lon nhat: %d\n",max);
	printf("gia tri nho nhat: %d\n",min);

	printf("gia tri gan lon nhat: %d\n",n_max);
	printf("gia tri gan nho nhat: %d\n",n_min);

	return 0;
}