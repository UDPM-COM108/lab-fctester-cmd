#include <stdio.h>

int main(){
    char name[50];
    int diem, age;
    printf("Nhap ten:");
    //scanf("%s", &name);
    gets(name);
    printf("Nhap diem:");
    scanf("%d", &diem);
    printf("Nhap tuoi:");
    scanf("%d", &age);
    // for (int i=0; i<3; i++){
    //     printf("\n%s", personalInfo[i]);
    // }
    puts(name);
    printf("ten: %s", name);
    printf("\ndiem:%d", diem);
    return 0;
}