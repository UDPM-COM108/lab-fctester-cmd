#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NHANVIEN
{
    char maNV[15];
    char tenNV[50];
    int luong;
};


void bai1();
void bai2();
void bai3();
void bai4();
void clearInputtedBuffer(){
    //Giong giong getchar()
    int c;
    while (c = getchar() != '\n' && c != EOF);
}
void removeNewline (char *s){
    s[strcspn(s, "\n")]='\0';
}
char *getString(char *input, int size){
    if (fgets(input, size, stdin)){
            removeNewline(input);
            return input;
    }
    return NULL;
}

int main(){
    int choice;
    do{
        printf("\n1. Bai 1");
        printf("\n2. Bai 2");
        printf("\n3. Bai 3");
        printf("\n4. Bai 4");
        printf("\n0. Thoat");
        printf("\nLua chon:");
        scanf("%d", &choice);
        clearInputtedBuffer();
    switch (choice) {
    case 1:
        bai1();
        break;
    case 2:
        bai2();
        break;
    case 3:
        bai3();
        break;
    case 4:
        bai4();
        break;
    case 0:
        printf("Bye!");
        exit(0);
        break;
    default:
        printf("Chon sai roi. Chon lai di\n");
        break;
    }
} while (choice !=0);
    return 0;
}

void bai1(){
    int n=0;
    do
    {
        printf("Nhap so nguyen duong >0:");
        scanf("%d", &n);
    } while (n<=0);
    printf("Cac uoc cua n: ");
    for (int i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }
}

void bai2(){
    int n;
    printf("Nhap so luong phan tu cua mang:");
    scanf("%d", &n);
    int *a=malloc(n*sizeof(int));

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Phan tu %d:", i+1);
        scanf("%d", &a[i]);
    }

    int x;
    printf("nhap 1 so bat ky:");
    scanf("%d", &x);

    printf("Cac so trong mang ma lon hon %d la: ", x);
    for (int i = 0; i < n; i++)
    {
        if(x<a[i]){
            printf("%d ", a[i]);
        }
    }
    
}

void bai3(){
    int n;
    printf("Nhap so nguyen duong n:");
    scanf("%d",&n);
    char s[n][100];
    getchar();
    printf("Nhap vao %d chuoi:\n", n);
    for(int i=0; i<n;i++){
        printf("Chuoi %d: ", i+1);
        fgets(s[i], 100, stdin);
        s[i][strcspn(s[i], "\n")]='\0';
    }
    for(int i=0; i<n;i++){
        printf("\nChuoi %d: %s", i+1, s[i]);
    }
}

void bai4(){
    int n;
    printf("Nhap so nhan vien:");
    scanf("%d", &n);
    clearInputtedBuffer();

    //Nhap n nhan vien
    struct NHANVIEN nv[n];
    printf("Nhap danh sach %d nhan vien:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhan vien %d:\n",i+1);
        printf("MaNV: ");
        fgets(nv[i].maNV, sizeof(nv[i].maNV), stdin);
        nv[i].maNV[strcspn(nv[i].maNV, "\n")]='\0';
        printf("TenNV: ");
        fgets(nv[i].tenNV, sizeof(nv[i].tenNV), stdin);
        nv[i].tenNV[strcspn(nv[i].tenNV, "\n")]='\0';
        printf("Luong NV: ");
        scanf("%d", &nv[i].luong);
        clearInputtedBuffer();
    }

    //Tim nhan vien voi so luong cao nhat
    int index=0, max=nv[0].luong;
    for (int i = 1; i < n; i++)
    {
        if(max<nv[i].luong){
            max=nv[i].luong;
            index=i;
        }
    }
    printf("\nNhan vien co muc luong cao nhat:\n");
    printf("MaNV:%5s - TenNV:%9s - Luong:%d\n", 
        nv[index].maNV, nv[index].tenNV, nv[index].luong);

    //Danh sach cac nhan vien voi so luong be hon x
    int x;
    int flag=0;
    printf("Nhap 1 so nguyen bat ky:");
    scanf("%d", &x);
    printf("Danh sach nhan vien co luong be hon %d\n", x);
    for (int i = 0; i < n; i++)
    {
        if(nv[i].luong<x){
            printf("MaNV:%5s - TenNV:%9s - Luong:%d\n", 
                nv[i].maNV, nv[i].tenNV, nv[i].luong);
            if(flag==0){
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("Tất cả nhân viên đều có mức lương cao hơn %d", x);
    }
    
}