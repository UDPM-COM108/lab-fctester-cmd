#include <stdio.h>
void nhapmang(int a[5][5]);
void xuatmang(int a[5][5]);

int main(){
    /*// khoi tao mang 1 chieu
    //int a[4] = {1400,1450,1500,1550};
    int a[4];
    // nhap mang 1 chieu 
    for (int i = 0; i < 4; i++)
    {
        printf("Nhap mang a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    // duyet mang va xuat mang 1 chieu
    for(int i = 0; i<4; i++){
        printf("Mang a bao gom %d \n",a[i]);
    }*/
    
    int b[3][3];
    // ham nhap mang
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Nhap mang 2 chieu b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
            
        }
        
        
    }
    // ham xuat mang
    for (int t = 0; t < 3; t++)
    {
        for (int z = 0; z < 3; z++)
        {
            printf("\nXuat ra mang 2 chieu %d",b[t][z]);
        }
        
    }
    
    return 0;
}