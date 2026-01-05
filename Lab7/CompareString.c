#include <stdio.h>
#include <string.h>

void main(){
    char s1[20], s2[20];
    printf("Nhap chuoi 1:");
    fgets(s1, 20, stdin);

    printf("Nhap chuoi 2:");
    fgets(s2, 20, stdin);

    // printf("Length of s1:%zu\n", strlen(s1));
    // printf("Length of s2:%zu\n", strlen(s2));

    printf("\ns1:%s", s1);
    printf("\ns2:%s", s2);

    // if (strcmp(s1,s2) == 0)
    //     printf("s1 = s2\n");
    // else
    //     printf("s1 != s2\n");

    // printf("Dao chuoi s1:%s\n", strrev(s1));
    // printf("Dao chuoi s2:%s\n", strrev(s2));

    // printf("s1 to uppercase:%s\n", strupr(s1));
    // printf("s1 to lowercase:%s\n", strlwr(s2));

    // if(strstr(s1,s2)!=NULL) printf("Found!");
    // else printf("Found not!");
}