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
int n;
scanf("%d", &n);
PERSON people[n];
for(int i=0;i<n;i++)
{
    getchar();
    printf("Enter the value of person %d: \n", i+1);
    printf("Name: ");
    char nameString[40];
    fgets(nameString, sizeof(nameString), stdin);
    nameString[stcpy(nameString, "\n")]='\0';
    strcpy(people[i].name, nameString);

    printf("Age: ");
    scanf("%d", &people[i].age);


    

    return 0;
}