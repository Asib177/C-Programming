#include <stdio.h>

typedef struct student
{
    char name[100];
    int age;
    float cgpa;
} STU;

int main()
{
    STU s;
    printf("Name: ");
    gets(s.name);
    printf("Age: ");
    scanf("%d", &s.age);
    printf("CGPA: ");
    scanf("%f", &s.cgpa);

    printf("\nName: %s", s.name);
    printf("\nAge: %d", s.age);
    printf("\nCGPA: %.2f", s.cgpa);

    return 0;
}