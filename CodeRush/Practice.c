#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void menu();
void clearInputBuffer();
void _12HTo24HConvert();
//OJ-000 - Tính tổng 2 số a và b
void sumAB();
//CPOJ00001 - Tính nghiệm phương trình bậc hai
void solveQuadratic();
//COND-M005 - Phân loại ký tự
void categoriseInputtedCharV1();
void categoriseInputtedCharV2();

int main(){
    int choice;
    do
    {
        menu();
        scanf("%d", &choice);
        clearInputBuffer();
        switch (choice)
        {
        case 0:
            printf("Bye bye!\n");
            exit(0);
        case 1:
            _12HTo24HConvert();
            break;
        case 2:
            sumAB();
            break;
        case 3:
            solveQuadratic();
            break; 
        case 4:
            //categoriseInputtedCharV1();
            categoriseInputtedCharV2();
            break;
        default:
            printf("Wrong choice! Choose again.\n");
            break;
        }
    } while (choice!=0);
    
}

void clearInputBuffer(){
    char c;
    while (c = getchar() != '\n' && c != EOF);
}

void menu(){
    printf("\nBig ass menu\n");
    printf("---------------------------------------------------------\n");
    printf("0. Get me out!\n");
    printf("1. E - Đổi giờ 24h → 12h (AM/PM) & kiểm tra hợp lệ\n");
    printf("2. OJ-000 - Tính tổng 2 số a và b\n");
    printf("3. CPOJ00001 - Tính nghiệm phương trình bậc hai\n");
    printf("4. COND-M005 - Phân loại ký tự\n");
    printf("Your choice:");
    //printf("\n");
}

void sumAB(){
    int a, b;
    printf("Nhap a b:");
    scanf("%d %d", &a, &b);
    printf("a+b=%d\n", a+b);
}

void _12HTo24HConvert(){
    int H, M;
    printf("H & M:");
    scanf("%d %d", &H, &M);
    if (H<0 || H>24 || M<0 || M>60){
        printf("INVALID\n");
    } else {
        if (H<12 && H>0){
            printf("%02d:%02d AM\n", H, M);
        } else if ( H==0 || H==24) {
            printf("12:%02d AM\n", H, M);
        } else if (H>=12 && H<13) {
            printf("%d:%02d PM\n", H, M);
        } else {
            printf("%d:%02d PM\n", H-12, M);
        }
    }
}

void solveQuadratic(){
    double a, b, c, s1, s2;
    do {           
        printf("\nInput a b c:");
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("a:%f b:%f c:%f\n", a, b, c);
    } while (a<-1000 || a>1000 || a==0 || b<-1000 || b>1000 || c<-1000 || c>1000);
    s1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    s2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    if (s1!=s1) {
        printf("NO SOLUTION");
    } else if (s1==s2) {
        printf("%.2f", s1);
    } else {
        if (s1>s2){
            printf("%.2f %.2f", s2, s1);
        } else {
            printf("%.2f %.2f", s1, s2);
        }
    }
}

void solveQuadratic_CPOJ00002(){
    double a, b, c, s1, s2;
    do
    {
        printf("\nInput a b c:");
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("a:%f b:%f c:%f\n", a, b, c);
    } while (a>=0);
    s1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    s2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("s1:%.2f s2:%.2f\n", s1, s2);
    if(isnan(s1) || s2!=s2 || s1<0 && s2<0)
        printf("NO SOLUTION\n");
    else if(s1>0 && s2>0) {
        if (s1>s2){
            printf("%.2f %.2f", s2, s1);
        } else {
            printf("%.2f %.2f", s1, s2);
        }
    }
    else if(s1>0 && s2<0)
        printf("%.2f\n", s1);
    else if(s1<0 && s2>0)
        printf("%.2f\n", s2); 
}

void categoriseInputtedCharV1(){
    char c;
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z'){
        printf("INHOA");
    } else if (c >= 'a' && c <= 'z'){
        printf("THUONG");
    } else if (c >= '0' && c <= '9'){
        printf("SO");
    } else {
        printf("KHAC");
    }
}
void categoriseInputtedCharV2(){
    char c;
    scanf(" %c", &c);
    if (isupper((unsigned char)c)){
        printf("INHOA");
    } else if (islower((unsigned char)c)){
        printf("THUONG");
    } else if (isdigit((unsigned char)c)){
        printf("SO");
    } else {
        printf("KHAC");
    }
}

