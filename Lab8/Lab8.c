#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien
{
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
} mangSV[50];

void bai1();
void bai2();
void bai3();
int cmp_desc(const void *a, const void *b);

int main()
{
    int i, n;
    printf("Nhap so sinh vien moi them: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap thong tin cua sing vien %d\n", i + 1);
        printf("MssV:");
        scanf("%s", mangSV[i].mssv);
        getchar();
        printf("TenSV:");
        scanf("%s", mangSV[i].tenSV);
        getchar();
        printf("NganhHoc:");
        scanf("%s", mangSV[i].nganhHoc);
        printf("Diem:");
        scanf("%f", &mangSV[i].diemTB);
    }
    qsort(mangSV, n, sizeof(struct SinhVien), cmp_desc);
    for (i = 0; i < n; i++)
    {
        printf("SV%d\n", n + 1);
        printf("MssV:%5s - TenSV:%8s - NganhHoc:%8s - Diem:%.2f\n",
               mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
    char mssv[10];
    printf("\nNhap mssv can tim:");
    scanf("%s", mssv);
    for (i = 0; i < n; i++)
    {
        if (strcmp(mssv, mangSV[i].mssv) == 0)
        {
            printf("\nMssV:%5s - TenSV:%8s - NganhHoc:%8s - Diem:%.2f",
                   mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            break;
        }
    }
}

void bai()
{
    int i, n;
    printf("Nhap so sinh vien moi them: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap thong tin cua sing vien %d\n", n + 1);
        printf("MssV:");
        scanf("%d", mangSV[i].mssv);
        getchar();
        printf("TenSV:");
        scanf("%s", mangSV[i].tenSV);
        getchar();
        printf("NganhHoc:");
        scanf("%s", mangSV[i].nganhHoc);
        printf("Diem:");
        scanf("%f", &mangSV[i].diemTB);
    }
    for (i = 0; i < n; i++)
    {
        printf("SV%d\n", n + 1);
        printf("MssV:%5s - TenSV:%8s - NganhHoc:%8s - Diem:%.2f",
               mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void bai2()
{
    int i, n;
    printf("Nhap so sinh vien moi them: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap thong tin cua sing vien %d\n", n + 1);
        printf("MssV:");
        scanf("%d", mangSV[i].mssv);
        getchar();
        printf("TenSV:");
        scanf("%s", mangSV[i].tenSV);
        getchar();
        printf("NganhHoc:");
        scanf("%s", mangSV[i].nganhHoc);
        printf("Diem:");
        scanf("%f", &mangSV[i].diemTB);
    }
    qsort(mangSV, n, sizeof(struct SinhVien), cmp_desc);
    for (i = 0; i < n; i++)
    {
        printf("SV%d\n", n + 1);
        printf("MssV:%5s - TenSV:%8s - NganhHoc:%8s - Diem:%.2f",
               mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

int cmp_desc(const void *a, const void *b)
{
    const struct SinhVien *s1 = (const struct SinhVien *)a;
    const struct SinhVien *s2 = (const struct SinhVien *)b;
    if (s1->diemTB > s2->diemTB)
        return -1;
    if (s1->diemTB < s2->diemTB)
        return 1;
    return 0;
}

void bai3()
{
    int i, n;
    printf("Nhap so sinh vien moi them: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Nhap thong tin cua sing vien %d\n", n + 1);
        printf("MssV:");
        scanf("%d", mangSV[i].mssv);
        getchar();
        printf("TenSV:");
        scanf("%s", mangSV[i].tenSV);
        getchar();
        printf("NganhHoc:");
        scanf("%s", mangSV[i].nganhHoc);
        printf("Diem:");
        scanf("%f", &mangSV[i].diemTB);
    }
    qsort(mangSV, n, sizeof(struct SinhVien), cmp_desc);
    for (i = 0; i < n; i++)
    {
        printf("SV%d\n", n + 1);
        printf("MssV:%5s - TenSV:%8s - NganhHoc:%8s - Diem:%.2f",
               mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
    char mssv[10];
    int flag=1;
    printf("Nhap mssv can tim:");
    scanf("%s", mssv);
    for (i = 0; i < n; i++)
    {
        if (strcmp(mssv, mangSV[i].mssv) == 0)
        {
            printf("MssV:%5s - TenSV:%8s - NganhHoc:%8s - Diem:%.2f",
                   mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            break;
        }
    }
}