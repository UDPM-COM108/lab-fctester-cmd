#include <stdio.h>
// #include <math.h>
#include <stdlib.h>

int main()
{
    int choice;
    do
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
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nNhap vao so nguyen: ");
        }
        break;
        case 2:
        {
            printf("\nNhap vao 2 so nguyen: ");
        }
        break;
        case 3:
        {
            printf("\nNhap vao so gio hat: ");
        }
        break;
        case 4:
        {
            printf("\nNhap vao so kwh tieu thu: ");
        }
        break;
        case 5:
        {
            printf("\nNhap vao so tien can doi: ");
        }
        break;
        case 6:
        {
            printf("\nNhap vao so tien vay: ");
        }
        break;
        case 7:
        {
            printf("\nNhap vao gia tri xe can mua: ");
        }
        break;
        case 8:
        {
            printf("\nNhap vao so luong sinh vien: ");
        }
        break;
        case 9:
        {
            printf("\nChao mung den voi game POLY-LOTT!");
        }
        break;
        case 10:
        {
            printf("\nNhap vao phan so: ");
        }
        break;
        case 0:
        {
            printf("\nBye bye!!!");
            exit(0);
        }
        break;
        default:
        {
            printf("\nLua chon khong hop le. ");
        }
        break;
        }
    } while (choice != 0);

    return 0;
}