#include <stdio.h>
#include <string.h>
typedef struct SinhVien
{
	char ten_sv[50];
	int tuoi;
	char sdt[15];
	int diem_thi;
}SV;


int main(){
	struct SinhVien sv2;
	sv2.tuoi = 20;
	strcpy(sv2.ten_sv,"nguyenVanAnh");
	printf("ten sv: %s\n",sv2.ten_sv );
	printf("tuoi sv: %d\n",sv2.tuoi );

	SV sv_arr[25];

	for (int i = 0; i < 25; ++i)
	{
		printf("Nhap ten sinh vien:\n");
		scanf("%s",sv_arr[i].ten_sv);
		printf("Nhap tuoi sinh vien:\n");
		scanf("%d",&sv_arr[i].tuoi);
		printf("Nhap sdt:\n");
		scanf("%s",sv_arr[i].sdt);
		printf("Nhap diem thi:\n");
		scanf("%d",&sv_arr[i].diem_thi);
	}
	
	for (int i = 0; i < 25; ++i)
	{
		printf("%s - %d - %s - %d\n",sv_arr[i].ten_sv,
			sv_arr[i].tuoi,sv_arr[i].sdt,sv_arr[i].diem_thi );
	}

	return 0;
}