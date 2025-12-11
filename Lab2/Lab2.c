#include <stdio.h>
#include <math.h>
#define PI 3.14

// #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
// Input: Nhập vào 2 số nguyên x và y
// Output: Hiển thị ra màn hình tổng, hiệu 2 số nguyên
/*int main(){
    int a, b, tong, hieu;
    printf("\nNhap a va b:");
    scanf("%d %d", &a, &b);
    tong=a+b;
    hieu=a-b;
    printf("a=%d & b=%d", a, b);
    return 0;
}*/

// #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
// Input: Nhập vào cdai và crong
// Output: Hiển thị ra màn hình chuvi và dientich của hình chữ nhật
/*int main(){
    int cdai, crong, chuvi, dientich;
    printf("\nNhap cdai va crong:");
    scanf("%d %d", &cdai, &crong);
    dientich=cdai*crong;
    chuvi=2*(cdai+crong);
    printf("\nchuvi hcm=%d\ndientich hcm=%d", chuvi, dientich);
    return 0;
}*/

// #Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
// Input: Nhập vào từ bàn phím bán kính
// Output: Hiển thị ra màn hình chuviHT và dientichHT của hình tròn
/*int main(){
    double bkinh, chuvi, dientich;

    printf("\nNhap bkinh cua hinh tron:");
    scanf("%lf", &bkinh);
    printf("bkinh:%f",bkinh);
    chuvi=2*PI*bkinh;
    dientich=bkinh*bkinh*PI;
    printf("\nChuvi=%.2f\nDientich=%.4f2", chuvi, dientich);
    return 0;
}*/

//Bai 4: tinh diem trung binh 3 mon toan ly hoa
int main(){
    float toan, ly, hoa, avg;
    printf("\nNhap diem toan ly hoa:");
    scanf("%f %f %f", &toan, &ly, &hoa);
    avg=(toan*3 + ly*2 + hoa*1)/6;
    printf("\nDiem trung binh 3 mon:%.2f", avg);
}
