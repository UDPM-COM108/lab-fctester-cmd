#include <stdio.h>
#define M 50
#define N 50
// định nghĩa hàm
void nhapmang2chieu(int a[M][N], int m, int n);
void xuatmang2chieu(int a[M][N], int m, int n);
void xuatchiahet3(int a[M][N],int m, int n);

//trien khai
void nhapmang2chieu(int a[M][N], int m, int n){
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            printf("Nhap phan tu a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]); 
        }
    }
}

void xuatmang2chieu(int a[M][N], int m, int n){
     printf("Xuat mang a[%d][%d]: \n",m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void xuatchiahet3(int a[M][N],int m, int n){
    printf("Xuat phan tu chia het cho 3: ");
    for(int i = 0; i<m; i++){
        for (int j=0; j<n; j++)
        {
            if(a[i][j] % 3 == 0){
                printf("%d ", a[i][j]);
            }
        }
        
    }
}

int main(){
    // khoi tao mang 1 chieu 
    //int a[5]={9,5,7,6,4};
    // nhap mang 2 chieu
    /*int a[3][3];
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap phan tu a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
            
        }
        
        
    }
    
    //duyet mang 1 chieu
    printf("Xuat mang a[3][3] = ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        
      
    }*/
    int a[M][N], m, n;
    printf("Nhap m va n: ");
    scanf("%d %d", &m,&n);

    nhapmang2chieu(a,m,n);
    xuatmang2chieu(a,m,n);
    xuatchiahet3(a,m,n);

    return 0;
}