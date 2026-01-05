#include <stdio.h>
// dn struct
struct SINHVIEN
{
    int MASV;
    char hoten[50];
    float diem;
};

void inputSV(struct SINHVIEN s[], int n){
	for (int i=0; i<0; i++){
		printf("");
		scanf("%d", &s->MASV);
		printf("");
		scanf("%s", &s->hoten);
		printf("");
		scanf("%f", &s->diem);
	}
}

void outputSV(struct SINHVIEN s[], int n){
	
}


int main(){
	struct SINHVIEN sv1;// goi dt sv1
	struct SINHVIEN sv2={2, "Viet", 10};
	struct SINHVIEN dssv[5]={
		{1, "Teo", 6}, 
		{2, "Ty", 8}, 
		{3, "Lionel", 7}, 
		{4, "CR7", 10},
		{5, "Tester", 10}
	};
	int size = sizeof(dssv)/sizeof(dssv[0]);
	for(int i=0; i<size; i++){
		printf("\nMASV:%d - Hoten:%s - Diem:%.2f", 
			dssv[i].MASV, dssv[i].hoten, dssv[i].diem);
	}
	struct SINHVIEN SD21303[38];
    // xuat sinh vien
    printf("\nMASV: %d",sv2.MASV);
    printf("\nHoten: %s",sv2.hoten);
    printf("\nDiem: %f", sv2.diem);
    return 0;
}

