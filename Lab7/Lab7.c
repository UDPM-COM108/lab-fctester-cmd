#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bai1();
void bai2();
void bai3();

void main(){
    bai1();
    bai2();
    bai3();
}

void bai1(){
    char s[100];
    printf("Input string:");
    //getchar();
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] ='\0';
    printf("String s:%s\n", s);
    int i=0, n=0, p=0;
    while (s[i++] != '\0'){
        if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o') {
            n++;
        } else {
            p++;
        }
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, n, p); 
}

void bai2(){
    char userSys[] = "admin";
    int passSys = 12345;
    char user[100];
    int pass;
    printf("nhap username:");
    if(fgets(user, sizeof(user), stdin) != NULL){
        user[strcspn(user, "\n")] = '\0';
    }
    printf("Nhap password:");
    scanf("%d", &pass);
    if (strcmp(user, userSys) == 0 && pass == passSys) {
        printf("Login successfully.");
    } else {
        printf("Login failed.");
    }
}

void bai3(){
    char s[5][20];
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("Nhap s[%d]:", i);
        if (fgets(s[i], sizeof(s[i]), stdin) != NULL){
            s[i][strcspn(s[i], "\n")] = '\0';
        }
    }
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (strcmp(s[j - 1], s[j]) > 0) {
                char temp[20];
                strcpy(temp, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("s[%d]:%s\n", i, s[i]);
    }
}