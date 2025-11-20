#include <stdio.h>

void tinhTBT();
void tinhSNT();
void tinhSCP();
void helloWorld();

int main()
{
    int choice;
    do
    {
        printf("\n++-------------------------------------++");
        printf("\n|Chuc nang 1: Tinh trung binh tong      |");
        printf("\n|Chuc nang 2: Tinh so nguyen to         |");
        printf("\n|Chuc nang 3: Tinh so chinh phuong      |");
        printf("\n|Chuc nang 4: Thoat                     |");
        printf("\n++-------------------------------------++");
        printf("\nXin moi chon chuc nang(1, 2, 3, 4):");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            tinhTBT();
            // printf("1");
            break;
        case 2:
            // int x, count = 0;
            // printf("\nNhap vao so x:");
            // scanf("%d", &x);
            // for (int i = 2; i < x; i++)
            // {
            //     if (x % i == 0)
            //         count++;
            // }
            // if (count == 0)
            //     printf("%d la so nguyen to.", x);
            // else
            //     printf("%d khong phai la so nguyen to.", x);
            tinhSNT();
            // printf("\n2");
            break;
        case 3:
            tinhSCP();
            // printf("3");
            break;
        case 4:
            printf("Bye bye!");
            break;
        default:
            printf("Lua chon khong hop le.");
            break;
        }
    } while (choice != 4);
    return 0;
}

void tinhSNT()
{
    int x, count = 0;
    printf("\nNhap vao so x:");
    scanf("%d", &x);
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            count++;
    }
    if (count == 0)
        printf("%d la so nguyen to.", x);
    else
        printf("%d khong phai la so nguyen to.", x);
}

void tinhTBT()
{
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;
    printf("\nNhap 2 giap tri min & max:");
    scanf("%d %d", &min, &max);

    i = min;
    // printf("min:%d, max:%d i:%d", min, max, i);

    while (i <= max)
    {
        if (i % 2 == 0)
        {
            tong += i;
            bienDem++;
        }
        i++;
    }
    trungBinh = tong / bienDem;
    printf("\nTrung binh tong:%.2f", trungBinh);
}

void tinhSCP()
{
    int x, count = 0;
    printf("\nNhap so tu nhien bat ky:");
    scanf("%d", &x);
    for (int i = 1; i < x; i++)
    {
        if (i * i == x)
        {
            printf("\n%d la so chinh phuong.", x);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("\n%d khong la so chinh phuong.", x);
    }
}

void helloWorld()
{
    printf("Hello world!");
}