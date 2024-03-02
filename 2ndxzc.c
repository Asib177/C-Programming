#include <stdio.h>

typedef struct student
{
    char name[100];
    int age;
    float cgpa;
    char fname[50];
} STU;

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    STU s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of person %d: \n", i + 1);
        printf("Name: ");
        gets(s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
        getchar();
        printf("Father name: ");
        gets(s[i].fname);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nPerson %d: ", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nCGPA: %.2f", s[i].cgpa);
        printf("\nFather name: %s", s[i].fname);
        printf("\n\n");
    }

    return 0;
}