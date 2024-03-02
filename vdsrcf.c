#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void clrscr(void);
void insert_record();
void display_record();
void search_record();
void del_record();
void update_record();
void sort_record();

struct student
{
    int roll;
    char sec[10];
    char name[50];
    int marks;
    float cgpa;
};
struct student s;

int main()
{
    system("COLOR 4");
    int choice;
    void clrscr();

    while (choice != 7)
    {
        printf("\tWelcome to UIU Student Manajment Program\n");
        printf("\t****************************************\t");

        printf("\n\n\tAvalable Functional Items:\n");
        printf("\t\t1: Inseart Student Record\n");
        printf("\t\t2: Display Student Record\n");
        printf("\t\t3: Search Student Record\n");
        printf("\t\t4: Delet Student Record\n");
        printf("\t\t5: Update Student Record\n");
        printf("\t\t6: Sort Student Record\n");
        printf("\t\t7: Exit Student Record\n");

        printf("\n\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_record();
            break;

        case 2:
            display_record();
            break;

        case 3:
            search_record();
            break;

        case 4:
            del_record();
            break;

        case 5:
            update_record();
            break;

        case 6:
            sort_record();
            break;

        case 7:
            exit(1);
            break;
        default:
            printf("\n\tWrong Choice Entered.");
        }

        printf("\n\tPress any key to continue.\n");
        getch();
    }
    return 0;
}

void insert_record()
{
    FILE *fp;

    fp = fopen("stu.txt", "ab+");

    if (fp == NULL)
    {
        printf("\n\tError: Can't open the file!");
        return;
    }

    printf("\n\n\tPrevious Stored Data!!!");
    display_record();

    printf("\n\n\tEnter new student data!!");
    printf("\n\t\tEnter student roll number: ");
    scanf("%d", &s.roll);
    fflush(stdin);
    printf("\t\tEnter student name: ");
    gets(s.name);
    printf("\t\tEnter Section name: ");
    gets(s.sec);
    printf("\t\tEnter student total marks: ");
    scanf("%d", &s.marks);
    printf("\t\tEnter student CGPA: ");
    scanf("%f", &s.cgpa);
    fwrite(&s, sizeof(s), 1, fp);

    printf("\n\n\t\tStudent record inseart successfully!!!");

    fclose(fp);
    printf("\n\n\t\tUpdate Record!!!");
    display_record();
}

void display_record()
{
    FILE *fp;

    fp = fopen("stu.txt", "rb");

    if (fp == NULL)
    {
        printf("\n\tError: Can't oprn the fole.");
        return;
    }

    printf("\n\tStudents ditiles are as follow: ");
    printf("\nRoll No \tName of students \tSection \tMarks \tCGPA\n\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("\t%d \t%s \t%s \t%d \t%.2f", s.roll, s.name, s.sec, s.marks, s.cgpa);
    }
    fclose(fp);
}

void search_record()
{
    int ro, flag = 0;
    FILE *fp;
    fp = fopen("stu.txt", "rb");

    if (fp == NULL)
    {
        printf("Error: Can't open the file.");
        return;
    }

    printf("Enter student roll number which you want to search: ");
    scanf("%d", &ro);

    while (fread(&s, sizeof(s), 1, fp) > 0 && flag == 0)
    {
        if (s.roll == ro)
        {
            flag = 1;
            printf("\n\n\tSearch successfully and student record is as follow: \n\n");
            printf("\nRoll Number \tName of students \tsection \tmarks \tCGPA\n\n");
            printf("\t%d \t%s \t%s \t%d \t%.2f", s.roll, s.name, s.sec, s.marks, s.cgpa);
        }
    }
    if (flag == 0)
    {
        printf("\n\tNo search record fond.");
    }
    fclose(fp);
}

void del_record()
{
    char name[50];
    unsigned flag = 0;
    FILE *fp, *ft;
    fp = fopen("stu.txt", "rb");

    if (fp == NULL)
    {
        printf("\n\tError: Can't open the file.");
        return;
    }
    printf("\n\nPrevious stored data.\n\n");
    display_record();
    printf("\n\nEnter student name which you want to delet: ");
    scanf("%s", name);

    ft = fopen("stu1.txt", "ab+");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (strcmp(name, s.name) != 0)
        {
            printf("\n\tRecord delet successfully.\n");
            fwrite(&s, sizeof(s), 1, ft);
        }
        else
            flag == 1;
    }
    if (flag == 0)
    {
        printf("\n\tNo search record found!!");
    }
    fclose(fp);
    fclose(ft);

    remove("stu.txt");
    rename("stu1.txt", "stu.txt");
    printf("\n\tUpdate record!!");
    display_record();
}

void update_record()
{

    int ro, flag = 0;
    FILE *fp;
    fp = fopen("stu.txt", "rb+");

    if (fp == NULL)
    {
        printf("\n\tError: Can't open the file.");
        return;
    }

    printf("\n\n\tEnter student roll number whose record you want to Update: ");
    scanf("%d", &ro);

    while (fread(&s, sizeof(s), 1, fp) > 0 && flag == 0)
    {
        if (s.roll = ro)
        {
            flag = 1;
            printf("\nRoll Number\tName of students\tsection\tmarks\tgrad\n\n");
            printf("\t%d \t%s \t%s \t%d \t%.2f", s.roll, s.name, s.sec, s.marks, s.cgpa);
            printf("\n\tNow enter the new record.");

            printf("\nUpdate student roll number: ");
            scanf("%d", &s.roll);
            fflush(stdin);
            printf("\t\tUpdate student name: ");
            gets(s.name);
            printf("\t\tUpdate section name: ");
            gets(s.sec);
            printf("\tUpdate student marks: ");
            scanf("%d", &s.marks);
            printf("\tUpdate student grad: ");
            scanf("%f", &s.cgpa);
            fseek(fp, -(long)sizeof(s), 1);
            fwrite(&s, sizeof(s), 1, fp);
            printf("Record update successfully check the display.");
        }
    }
    if (flag == 0)
    {
        printf("Error: Something went wrong!!");
    }
    fclose(fp);
}

void sort_record()
{
    struct student temp;
    struct student arr[50];

    FILE *fp;
    fp = fopen("stu.txt", "rb");
    if (fp == NULL)
    {
        printf("\n\n\tError: Can't open the file!!");
    }
    int i = 0;
    int k;
    while (fread(&arr[i], sizeof(arr[i]), 1, fp) == 1)
    {
        i++;
        k++;
    }

    for (i = 0; i < k; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (arr[j].roll > arr[j + 1].roll)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n\tAfter shorting students ditiles.\n");
    for (i = 0; i < k; i++)
    {
        printf("%d %s %s %d %.2f", arr[i].roll, arr[i].name, arr[i].sec, arr[i].marks, arr[i].cgpa);
    }
    fclose(fp);
}