#include <stdio.h>
#include <string.h>

struct sinhvien
{
    int MaSV;
    char ten[30];
    struct Date
    {
        int ngay, thang, nam;
    } ngaysinh;
} sv1;

void main(){
    sv1.MaSV=101;
    strcpy(sv1.ten, "Phong Tran");
    sv1.ngaysinh.ngay=10;
    sv1.ngaysinh.thang=11;
    sv1.ngaysinh.nam=1998;
    printf("MaSV:%d - TenSV:%s - Ngaysinh(dd/mm/yyyy):%d/%d/%d", sv1.MaSV, sv1.ten, 
        sv1.ngaysinh.ngay, sv1.ngaysinh.thang, sv1.ngaysinh.nam);
}