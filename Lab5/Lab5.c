#include <stdio.h>

int findMax(int a, int b, int c)
{
    int max = a;
    if (a < b)
        max = b;
    if (max < c)
        max = c;
    return max;
}

int checkLeapYear(int year)
{
    int flag = 0;
    if (year % 400 == 0)
        flag = 1;
    if (year % 4 == 0 && year % 100 != 0)
        flag = 1;
    return flag;
}

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a, b, c;
    printf("\nNhap a, b, c:");
    scanf("%d %d %d", &a, &b, &c);
    printf("Gia tri lon nhat giua a, b, c la %d", findMax(a, b, c));

    int year;
    printf("\nNhap nam:");
    scanf("%d", &year);
    if (checkLeapYear(year))
        printf("%d la nam nhuan.", year);
    else
        printf("%d khong la nam nhuan.", year);

    int x, y;
    printf("\nNhap x va y:");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("Hoan doi x & y:%d %d", x, y);
    return 0;
}