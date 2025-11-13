#include <stdio.h>

int main()
{
    /*double dtb;
    printf("Nhap diem trung binh:");
    scanf("%lf", &dtb);
    if (dtb >= 9)
    {
        printf("Xuat sac");
    }
    else if (dtb >= 8)
    {
        printf("Gioi");
    }
    else if (dtb >= 7)
    {
        printf("Kha");
    }
    else if (dtb >= 5)
    {
        printf("trung binh");
    }
    else
    {
        printf("Yeu");
    }*/
    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi ban chon dap an (a,b,c,d): ");
    char dapAn;
    scanf("%s", &dapAn);
    switch (dapAn)
    {
    case 'a':
        printf("Ban da chon sai\n");
        break;
    case 'b':
        printf("Ban da chon sai\n");
        break;
    case 'c':
        printf("Ban da chon dung\n");
        break;
    case 'd':
        printf("Ban da chon sai\n");
        break;
    default:
        printf("Ban chon khong dung bo dap an (a,b,c,d)");
        break;
    }
    //return 0;
}