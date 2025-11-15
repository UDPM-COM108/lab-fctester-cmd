#include <stdio.h>
#include <math.h>

int main()
{
    /*# Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
    Input: Nhập vào dtb của Sinh Viên từ 0 đến 10
    Output: Xuất ra màn hình Học lực của Sinh Viên
    Nếu dtb>=9 -> Học Lực Xuất Sắc
    Nếu dtb>=8 và dtn<9 -> Học Lực Giỏi
    Nếu dtb>=6.5 và dtn<8 -> Học Lực Khá
    Nếu dtb>=5 và dtn<6.5 -> Học Lực Trung Bình
    Ngược lại Học Lực Yếu*/
    // double dtb;
    // printf("\nNhap diem trung binh:");
    // scanf("%lf", &dtb);
    // if (dtb >= 9)
    // {
    //     printf("Hoc luc xuat sac");
    // }
    // else if (dtb >= 8)
    // {
    //     printf("Hoc luc gioi");
    // }
    // else if (dtb >= 6.5)
    // {
    //     printf("Hoc luc kha");
    // }
    // else if (dtb >= 5)
    // {
    //     printf("Hoc luc trung binh");
    // }
    // else
    // {
    //     printf("Hoc luc yeu");
    // }

    /*# Bài 2: Giải phương trình bậc nhất
    Phương trình có dạng ax + b = 0
    Input: nhập vào từ bàn phím giá trị của a, b
    Output: Hiển thị nghiệm của phương trình
    Nếu a==0
        Nếu b==0
        Phương trình VSN
        Nếu b!=0
        Phương trình Vô Nghiệm
    Ngược lại
       Phương trình có 1 nghiệm: x=-b/a*/
    float a, b, c, x;
    // printf("\nGiai phuong trinh bat nhat ax + b = 0."
    //        "\nNhap a va b:");
    // scanf("%f %f", &a, &b);
    // if (a == 0)
    // {
    //     if (b == 0)
    //     {
    //         printf("PTVSN.");
    //     }
    //     else
    //     {
    //         printf("PTVN.");
    //     }
    // }
    // else
    // {
    //     x = (-b) / a;
    //     printf("PT co nghiem x=-b/a=%.2f", x);
    // }

    /*# Bài 3: Giải Phương trình bậc 2
    Phương trình có dạng: ax2 + bx + c = 0
    Input: Nhập vào từ bàn phím: a, b, c
    Output: Nghiệm của phương trình
    Nếu a == 0
        Phương trình thành bx + c = 0
    Ngược lại nếu a != 0
       Tính delta
       Nếu delta < 0
        Phương trình vô nghiệm
       Nếu delta == 0
        Phương trình có nghiệm kép x = -b/(2*a)
       Nếu delta > 0
        Phương trình có 2 nghiệm riêng biệt
        X1 = (-b + căn(delta))/(2*a)
        X2 = (-b – căn(delta))/(2*a)*/
    // float delta;
    // printf("\nPhương trình có dạng: ax2 + bx + c = 0"
    //        "\nNhap a b c:");
    // scanf("%f %f %f", &a, &b, &c);
    // if (a == 0)
    // {
    //     if (b == 0)
    //     {
    //         if (c == 0)
    //         {
    //             printf("PTVSN.");
    //         }
    //         else
    //         {
    //             printf("PTVN.");
    //         }
    //     }
    //     else
    //     {
    //         x = (-c) / b;
    //         printf("PT co nghiem x=-c/b=%.2f", x);
    //     }
    // }
    // else
    // {
    //     delta = pow(b, 2) - 4 * a * c;
    //     printf("Delta = %.2f\n", delta);
    //     if (delta < 0)
    //     {
    //         printf("PTVN");
    //     }
    //     else if (delta == 0)
    //     {
    //         printf("Phương trình có nghiệm kép x = -b/(2*a)=%.2f",
    //                (-b) / (2 * a));
    //     }
    //     else
    //     {
    //         printf(" Phương trình có 2 nghiệm riêng biệt."
    //                "\nX1=%.2f\nX2=%.2f",
    //                ((-b + sqrtf(delta)) / (2 * a)), ((-b - sqrtf(delta)) / (2 * a)));
    //     }
    // }

    /*BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN
    Input: Nhập vào số điện tiêu thụ hàng tháng
    Output: Hiển thị số tiền cần phải đóng
    Biết rằng:
    TT      Số kWh sử dụng          Giá bán điện (đồng/kWh)
    Bậc 1   Cho kWh từ 0 - 50       1.678
    Bậc 2   Cho kWh từ 51 - 100     1.734
    Bậc 3   Cho kWh từ 101 - 200    2.014
    Bậc 4   Cho kWh từ 201 - 300    2.536
    Bậc 5   Cho kWh từ 301 - 400    2.834
    Bậc 6   Cho kWh từ 401 trở lên  2.927 */
    float dtt;
    printf("\nNhập vào số điện tiêu thụ hàng tháng(kWh):");
    scanf("%f", &dtt);
    if (dtt <= 50)
    {
        printf("Bậc 1: %.4f", dtt * 1.678);
    }
    else if (dtt <= 100)
    {
        printf("Bậc 2: %.4f", dtt * 1.734);
    }
    else if (dtt <= 200)
    {
        printf("Bậc 3: %.4f", dtt * 2.014);
    }
    else if (dtt <= 300)
    {
        printf("Bậc 4: %.4f", dtt * 2.536);
    }
    else if (dtt <= 400)
    {
        printf("Bậc 5: %.4f", dtt * 2.834);
    }
    else
    {
        printf("Bậc 6: %.4f", dtt * 2.927);
    }

    return 0;
}