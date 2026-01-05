#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Student {
    char name[50];
    int id;
    float gpa;
};

struct Point
{
    int x,y;
};

struct Time
{
    int hours, minutes, seconds;
};


void exercise1();
void exercise2();
void exercise3();
void exercise4();
float distance(struct Point p1, struct Point p2);

void main() {
    exercise3();
}

void exercise1(){
    struct Student std1;
    scanf("%s %d %f", &std1.name, &std1.id, &std1.gpa);
    printf("Name: %s\nID: %d\nGPA: %.2f", std1.name, std1.id, std1.gpa);
}

void exercise2(){
    int n, index;
    float best_gpa;
    scanf("%d",&n);
    struct Student *std = malloc(n*sizeof(struct Student));
    if (!std) {
    perror("malloc failed");
    return;
    }
    for (int i=0; i<n; i++){
        scanf("%s %d %f", &std[i].name, &std[i].id, &std[i].gpa);
        if(i==0) {
            best_gpa=std[i].gpa;
            index=i;
        } else if (best_gpa<std[i].gpa) {
            best_gpa=std[i].gpa;
            index=i;
        }
    }
    printf("Highest GPA Student: %s %d %.2f", std[index].name, std[index].id, 
        std[index].gpa);
}

void exercise3(){
    struct Point p1,p2;
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);
    float dist=distance(p1,p2);
    printf("Distance: %.2f", dist);
}

float distance(struct Point p1, struct Point p2){
    return sqrtf(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
}