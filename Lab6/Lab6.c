#include <stdio.h>
#include <stdlib.h>

int sort_desc(const void *, const void *);

int main()
{
    // BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
    int size;
    printf("\nNhap kich co cua mang 1 chieu:");
    scanf("%d", &size);
    printf("Size:%d", size);
    int *a = calloc(size, sizeof(int));
    if (a == NULL)
    {
        printf("Co van de khi gan kich thuc cho mang");
        exit(1);
    }

    printf("\nNhap cac phan tu cua mang\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }
    float sum = 0, avg = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 3 == 0)
        {
            // printf("\na[%d]:%d", i,a[i]);
            sum += a[i];
            count++;
        }
    }
    printf("\nSum:%f", sum);
    printf("\ncount:%d", count);
    avg = sum / count;
    printf("\nTrung binh tong cua cac so chia het cho 3 trong mang:%f", avg);

    // BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
    int min = a[0], max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("\nGia tri min cua mang:%d", min);
    printf("\nGia tri max cua mang:%d", max);

    // BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("\nVi tri thu a[%d] la : %d \n", i, a[i]);
    }

    free(a);
    a = NULL;

    // BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU
    int rows = 3, columns = 3;
    int b[3][3];
    printf("\nNhap cac phan tu cua mang 2 chieu b[%d][%d].", rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\nNhap a[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nXuat mang binh phuong.\n");
    tmp = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (tmp == i)
            {
                printf("%d ", b[i][j]*b[i][j]);
                //tmp++;
            }
            else
            {
                printf("\n%d ", b[i][j]*b[i][j]);
                tmp++;
            }
        }
    }
    return 0;
}