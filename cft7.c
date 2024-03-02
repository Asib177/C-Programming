#include <stdio.h>
#include<string.h>

typedef struct person
{
    char name[40];
    int age;
    float cgpa;

} PERSON;

int mian()
{
    PERSON P1;
    fgets(P1.name, sizeof(P1.name), stdin);
P1.name[strcspn(P1.name,"\n")]='\0';
    scanf("%d", &P1.age);
    scanf("%f", &P1.cgpa);

printf("\nName: %s", P1.name);
// printf("\nCGPA: ")

    return 0;
}