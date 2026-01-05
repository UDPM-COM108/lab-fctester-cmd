#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LopHoc
{
    char MaLop[10];
    char TenLop[15];
    int SiSo;
};


void bai1();
void bai2();
void bai3();
void bai4();
void clearInputBuffer();

int main(){
    //bai1();
    //bai2();
    //bai3();
    bai4();
    return 0;
}

void clearInputBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void bai1(){
    //a
    int n;
    printf("Nhap vao 1 so nguyen:");
    scanf("%d", &n);
    printf("Cac so duong le, nho hon %d: ", n);
    for (int i = 1; i < n; i++)
    {
        if(i%2!=0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    //b
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (i%7==0){
            sum+=i;
        }
    }
    printf("\nTrung bình cộng các số dương chia hết cho 7 nhỏ hơn %d: %d", n, sum);   
    printf("\n"); 
}

void bai2(){
    int M[100], n;
    do
    {
        printf("Nhập số phần tử sẽ sử dụng:");
        scanf("%d", &n);
        clearInputBuffer();
    } while (n<0 || n>100);


    printf("\nNhap cac phan tu cho mang:");
    for (int i = 0; i < n; i++)
    {
        printf("\nPhần tử %d: ", i+1);
        scanf("%d", &M[i]);
        clearInputBuffer();
    }
    

    printf("\nXuat mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nPhần tử %d: %d", i+1, M[i]);
    }
}

void bai3(){
    int M[100], n;
    do
    {
        printf("Nhập số phần tử sẽ sử dụng:");
        scanf("%d", &n);
        clearInputBuffer();
    } while (n<0 || n>100);


    printf("\nNhap cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Phần tử %d: ", i+1);
        scanf("%d", &M[i]);
        clearInputBuffer();
    }
    

    printf("\nXuat mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", M[i]);
    }


    int x;
    printf("\nNhap 1 so nguyen tu ban phim: ");
    scanf("%d", &x);
    printf("\nCac so trong mang ma nho hon %d: ", x);
    for (int i = 0; i < n; i++)
    {
        if(M[i]<x){
            printf("%d ", M[i]);
        }
    }

    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0 && M[i]>0){
            //if(i>0){
                sum=sum + M[i];
                //clearInputBuffer();
            //}
        }
    }
    printf("\nTổng các phần tử dương chẵn trong mảng: %d", sum);

    int index=0, flag=0;
    for (int i = 0; i < n; i++){
        if(M[i]==x){
            index=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nVị trí đầu tiên của giá trị %d trong mảng M: M[%d]", x, index);
    } else {
        printf("\nGia tri %d khong co trong mang M: x");
    }
}

void bai4(){
    int n;
    printf("\nNhap so lop hoc:");
    scanf("%d", &n);
    clearInputBuffer();
    struct LopHoc class[n];
    printf("\nNhap thong tin cua %d lop hoc:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Lop %d:\n", i+1);
        printf("MaLop:");
        fgets(class[i].MaLop, sizeof(class[i].MaLop), stdin);
        class[i].MaLop[strcspn(class[i].MaLop, "\n")]='\0';
        printf("TenLop:");
        fgets(class[i].TenLop, sizeof(class[i].TenLop), stdin);
        class[i].TenLop[strcspn(class[i].TenLop, "\n")]='\0';
        printf("SiSo:");
        scanf("%d", &class[i].SiSo);
        clearInputBuffer();
    }

    int max=class[0].SiSo;
    for (int i = 1; i < n; i++)
    {
        if(max<class[i].SiSo){
            max=class[i].SiSo;
        }
    }
    printf("\nThong tin cac lop co si so dong nhat:\n");
    for (int i = 0; i < n; i++){
        if(class[i].SiSo==max){
            printf("Lop %d:\n", i+1);
            printf("MaLop:%5s - TenLop:%6s - SiSo:%2d\n", 
            class[i].MaLop, class[i].TenLop, class[i].SiSo);
        }
    }
}