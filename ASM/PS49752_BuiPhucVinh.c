#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char hoTen[50];
    float diem;
    char hocLuc[50];
};

int cpm_desc(const void *a, const void *b){
    const struct Student *s1 = (const struct Student *)a;
    const struct Student *s2 = (const struct Student *)b;
    if(s1->diem > s2->diem) return -1;
    if(s1->diem < s2->diem) return 1;
    return 0;
}

int main(){
    int n;
    printf("Nhap vao so SV:");
    scanf("%d", &n);
    struct Student std[n];
    for (int i=0; i<n; i++){
        printf("Nhap thong tin cua SV%d\n", i+1);
        printf("Ho Ten SV:");
        scanf("%s", std[i].hoTen);
        printf("Diem SV:");
        scanf("%f", &std[i].diem);
        if (std[i].diem >= 9.0) {
            strcpy(std[i].hocLuc, "Xuat sac");
        } else if (std[i].diem >= 8.0) {
            strcpy(std[i].hocLuc, "Gioi");
        } else if (std[i].diem >= 6.5) {
            strcpy(std[i].hocLuc, "Kha");
        } else if (std[i].diem >= 5.0) {
            strcpy(std[i].hocLuc, "Trung binh");
        } else {
            strcpy(std[i].hocLuc, "Yeu");
        }
    }
    qsort(std, n, sizeof(struct Student), cpm_desc);
    printf("Danh sach sinh vien theo diem giam dan:\n");
    for (int i = 0; i < n; i++){
        printf("Sv%d - Hoten:%6s - Diem:%.2f - HocLuc:%9s\n", 
        i+1, std[i].hoTen, std[i].diem, std[i].hocLuc);
    }
    return 0;
}