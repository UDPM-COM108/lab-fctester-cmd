#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void menu();
void clearInputBuffer();
// B1: Kiểm tra số nguyên
void bai1();
void test();
// B2: Tìm Ước số chung và bội số chung của 2 số
void bai2();
// B3: Chương trình tính tiền cho quán Karaoke
void bai3();
// B4: Tính tiền điện
void bai4();
// B5: Chức năng đổi tiền
void bai5();

int main()
{
    int choice;
    do
    {
        menu();       
        scanf("%d", &choice);
        clearInputBuffer();
        switch (choice)
        {
        case 1:
            // test();
            bai1();
            // printf("\nNhap vao so nguyen: ");
            break;
        case 2:
            bai2();
            //printf("\nNhap vao 2 so nguyen: ");
            break;
        case 3:
            bai3();
            //printf("\nNhap vao so gio hat: ");
            break;
        case 4:
            bai4();
            //printf("\nNhap vao so kwh tieu thu: ");
            break;
        case 5:
            bai5();
            //printf("\nNhap vao so tien can doi: ");
            break;
        case 6:
            printf("\nNhap vao so tien vay: ");
            break;
        case 7:
            printf("\nNhap vao gia tri xe can mua: ");
            break;
        case 8:
            printf("\nNhap vao so luong sinh vien: ");
            break;
        case 9:
            printf("\nChao mung den voi game POLY-LOTT!");
            break;
        case 10:
            printf("\nNhap vao phan so: ");
            break;
        case 0:
            printf("\nBye bye!!!");
            exit(0);
            break;
        default:
            printf("\nLua chon khong hop le. ");
            break;
        }
    } while (choice != 0);

    return 0;
}

void menu()
{
    printf("\n_________________________________________");
    printf("\n|WELCOME TO Bui Phuc Vinh Assigment     |");
    printf("\n*****************************************");
    printf("\n1. Kiêm tra số nguyên");
    printf("\n2. Tìm Ước số chung & bội số chung của 2 số");
    printf("\n3. Tính tiền cho quán Karaoke");
    printf("\n4. Tính tiền điện");
    printf("\n5. Chức năng đổi tiền");
    printf("\n6. Tính lãi suất va ngân hàng vay trả góp");
    printf("\n7. Vay tiền mua xe");
    printf("\n8. Sắp xếp thông tin sinh viên");
    printf("\n9. Game POLY-LOTT");
    printf("\n10. Tính toán phân số");
    printf("\n------------------------------");
    printf("\n0. Thoát");
    printf("\nNhap vao 1-10 de su dung chuong trinh: ");
}

void bai1()
{
    float x;
    int flag = 0;
    do
    {
        printf("Nhap so nguyen x:");
        scanf("%f", &x);
        clearInputBuffer();
        if (x != ceil(x))
        {
            flag = 0;
            printf("%.1f khong phai la so nguyen.\n", x);
        }
        else
        {
            flag = 1;
            printf("%d la so nguyen.\n", (int)x);
        }
    } while (flag != 1);

    if (x < 2)
    {
        printf("%d khong phai la so nguyen to.\n", x);
    }
    else
    {
        int c = 1;
        for (int i = 2; i <= sqrt(x); i++)
        {
            if ((int)x % i == 0)
            {
                printf("%d khong phai la so nguyen to.\n", (int)x);
                c = 0;
                break;
            }
            if (c == 1)
            {
                printf("%d la so nguyen to.\n", (int)x);
            }
        }
    }

    // Kiem tra chinh phuong
    if (x < 0)
    {
        printf("%d khong phai la so chinh phuong.\n");
    }
    else
    {
        int n = sqrt(x);
        if (n * n == x)
        {
            printf("%d la so chinh phuong.\n", (int)x);
        }
        else
        {
            printf("%d khong phai la so chinh phuong.\n", (int)x);
        }
    }
}

void clearInputBuffer()
{
    int c;
    while (c = getchar() != '\n' && c != EOF)
        ;
}

void bai2()
{
    int x, y, min = 0, max = 0, gcd = 0, lcm = 0;
    printf("Nhap x & y:");
    scanf("%d %d", &x, &y);
    clearInputBuffer();
    if (x > y)
    {
        max = x;
        min = y;
    }
    else if (x < y)
    {
        max = y;
        min = x;
    }
    else
    {
        gcd = x;
    }
    if (gcd == 0)
    {
        /* Cach cu
        for (int i = min; i > 0; i--)
        {
            if (x % i == 0 && y % i == 0)
            {
                gcd = i;
                break;
            }         
        }*/
        int a = x, b = y, tmp;
        while (b!=0){
            tmp=a%b;
            a=b;
            b=tmp;
        }
        gcd=a;
    }
    printf("Uoc so chung lon nhat cua %d & %d: %d\n", x, y, gcd);
    lcm = (x * y) / gcd;
    printf("Boi so chung nho nhat cua %d & %d: %d\n", x, y, lcm);
}

void bai3(){
    int x, y, gia=150000;
    double tongTien;
    do{
        printf("Nhập vào giờ bắt đầu x, giờ kết thúc y (Từ 12h->23h):");
        scanf("%d %d", &x, &y);
        clearInputBuffer();
        if (x>y || x<12 || x>23 || y<12 || y>23){
            printf("Nhập sai rồi bạn ơi. Nhập lại đi.\n");
        }
    } while (x>y || x<12 || x>23 || y<12 || y>23);
    int tongGio=y-x;
    if (tongGio<=3){
        tongTien=tongGio*gia;
    } else if (tongGio>3){
        tongTien=3*gia;
        tongTien+=(tongGio-3)*(gia*0.7);
    }
    if(x>=14 && x<=17){
        tongTien=tongTien*0.9;
    }
    printf("Gia tien can thanh toan:%.3f", tongTien);
}

void bai4(){
    int x;
    double price;
    const double mucGia1=50*1.678;
    const double mucGia2=50*1.734;
    const double mucGia3=100*2.014;
    const double mucGia4=100*2.536;
    const double mucGia5=100*2.834;
    printf("Nhập vào số (kwh) điện sử dụng:");
    scanf("%d", &x);
    clearInputBuffer();
    if(x<=50 && x>0){
        price=x*1.678;
    } else if(x<=100){
        price=mucGia1;
        price+=(x-50)*1.734;
    } else if(x<=200){
        price=mucGia1+mucGia2;
        price+=(x-100)*2.014;
    } else if(x<=300){
        price=mucGia1+mucGia2+mucGia3;
        price+=(x-200)*2.536;
    } else if(x<=400){
        price=mucGia1+mucGia2+mucGia3+mucGia4;
        price+=(x-300)*2.834;
    } else {
        price=mucGia1+mucGia2+mucGia3+mucGia4+mucGia5;
        price+=(x-400)*2.927;
    }
}

void bai5(){
    int x, a[9]={500,200,100,50,20,10,5,2,1};
    int remainder;
    printf("Mệnh giá tiền gồm có: ");
    for (int i=0; i<sizeof(a)/sizeof(int); i++){
        printf("%d ", a[i]);
    }
    printf("\nNhập vào số tiền cần đổi: ");
    scanf("%d", &x);
    clearInputBuffer();
    remainder=x;
    while (remainder!=0){
        int c;
        printf("Các mệnh giá tiền được đổi ra: ");
        for (int i=0; i<sizeof(a)/sizeof(int); i++){
            if(remainder<a[i]){
                continue;
            } else if (remainder>a[i] || remainder==1) {
                c=remainder/a[i];
                remainder=remainder%a[i];
                printf("%dx%d ", a[i], c);
            }
        }
    }
}