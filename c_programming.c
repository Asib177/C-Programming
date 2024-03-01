#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void clrscr(void);
void put_record();
void view_record();
void search_record();
void del_record();
void update_record();
void pattern_record();

struct member
{
    int code;
    char group[100];
    char name[100];
    int salary;
    float income;
};
struct member m;

int main()
{
    system("COLOR C");
    int choice;
    void clrscr();

    while (choice != 7)
    {
        printf("\n\n\t\t\t\t\t\t\t\tWellness Agro Food & Cosmetics Limited\n");
        printf("\t\t\t\t\t\t\t\t**************************************\t");

        printf("\n\n\t\t\t\tAvailable Functional Items:\n");
        printf("\t\t\t\t\t\t1: Put Your Record\n");
        printf("\t\t\t\t\t\t2: View Record\n");
        printf("\t\t\t\t\t\t3: Search Record\n");
        printf("\t\t\t\t\t\t4: Delete Record\n");
        printf("\t\t\t\t\t\t5: Update Record\n");
        printf("\t\t\t\t\t\t6: Pattern Record\n");
        printf("\t\t\t\t\t\t7: Exit\n");

        printf("\n\n\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            put_record();
            break;

        case 2:
            view_record();
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
            pattern_record();
            break;

        case 7:
            exit(1);
            break;
        default:
            printf("\n\t\t\t\t\tWrong Choice Entered.");
        }

        printf("\n\t\t\t\t\tPress any key to continue.\n");
        getch();
    }
    return 0;
}

void put_record()
{
    FILE *fp;

    fp = fopen("members.txt", "ab+");

    if (fp == NULL)
    {
        printf("\n\t\t\t\t\tError: Can't open the file!");
        return;
    }

    printf("\n\n\t\t\t\t\tPrevious Stored Data!!!");
    view_record();

    printf("\n\n\t\t\t\t\t\tEnter new Member data!!");
    printf("\n\t\t\t\t\tEnter member code number: ");
    scanf("%d", &m.code);
    fflush(stdin);
    printf("\t\t\t\t\tEnter member name: ");
    gets(m.name);
    printf("\t\t\t\t\tEnter group name: ");
    gets(m.group);
    printf("\t\t\t\t\tEnter member salary: ");
    scanf("%d", &m.salary);
    printf("\t\t\t\t\tEnter member per day income: ");
    scanf("%f", &m.income);
    fwrite(&m, sizeof(m), 1, fp);

    printf("\n\t\t\t\t\tPut record successfully!!!");

    fclose(fp);
    printf("\n\n\t\t\t\t\t\t\tUpdate Record!!!");
    view_record();
}

void view_record()
{
    FILE *fp;

    fp = fopen("members.txt", "rb");

    if (fp == NULL)
    {
        printf("\n\tError: Can't open the file.");
        return;
    }

    printf("\n\n\t\t\tMembers ditiles are as follow: ");
    printf("\n\t\t\t\tCode \n\t\t\t\tName of Member \n\t\t\t\tGroup \n\t\t\t\tSalary \n\t\t\t\tPer Day Income\n\n");

    while (fread(&m, sizeof(m), 1, fp) == 1)
    {
        printf("\n\n\t\t\t\t%d\n\t\t\t\t%s\n\t\t\t\t%s\n\t\t\t\t%d\n\t\t\t\t%.2f", m.code, m.name, m.group, m.salary, m.income);
    }
    fclose(fp);
}

void search_record()
{
    int ro, flag = 0;
    FILE *fp;
    fp = fopen("members.txt", "rb");

    if (fp == NULL)
    {
        printf("\t\t\t\t\t\tError: Can't open the file.");
        return;
    }

    printf("\n\t\t\tEnter member code number which you want to search: ");
    scanf("%d", &ro);

    while (fread(&m, sizeof(m), 1, fp) > 0 && flag == 0)
    {
        if (m.code == ro)
        {
            flag = 1;
            printf("\n\n\t\t\tSearch successfully and member record is as follow: \n\n");
            printf("\n\t\t\t\tCode \n\t\t\t\tName of Members \n\t\t\t\tGroup \n\t\t\t\tSalary \n\t\t\t\tPer Day Income\n\n");
            printf("\n\t\t\t\t%d \n\t\t\t\t%s \n\t\t\t\t%s \n\t\t\t\t%d \n\t\t\t\t%.2f", m.code, m.name, m.group, m.salary, m.income);
        }
    }
    if (flag == 0)
    {
        printf("\n\t\t\t\t\tSorry!!!");
    }
    fclose(fp);
}

void del_record()
{
    char name[100];
    unsigned flag = 0;
    FILE *fp, *ft;
    fp = fopen("members.txt", "rb");

    if (fp == NULL)
    {
        printf("\n\t\t\t\tError: Can't open the file.");
        return;
    }
    printf("\n\n\t\t\tPrevious stored data.\n\n");
    view_record();
    printf("\n\n\t\t\tEnter member name which you want to delete: ");
    scanf("%s", name);

    ft = fopen("members1.txt", "ab+");

    while (fread(&m, sizeof(m), 1, fp) == 1)
    {
        if (strcmp(name, m.name) != 0)
        {
            printf("\n\t\t\t\tRecord delete successfully.\n");
            fwrite(&m, sizeof(m), 1, ft);
        }
        else
            flag == 1;
    }
    if (flag == 0)
    {
        printf("\n\t\t\t\tNo search record found!!");
    }
    fclose(fp);
    fclose(ft);

    remove("members.txt");
    rename("members1.txt", "members.txt");
    printf("\n\t\t\t\tUpdate record!!");
    view_record();
}

void update_record()
{

    int cd, flag = 0;
    FILE *fp;
    fp = fopen("members.txt", "rb+");

    if (fp == NULL)
    {
        printf("\n\t\t\t\tError: Can't open the file.");
        return;
    }

    printf("\n\n\t\t\t\tEnter member code number whose record you want to Update: ");
    scanf("%d", &cd);

    while (fread(&m, sizeof(m), 1, fp) > 0 && flag == 0)
    {
        if (m.code = cd)
        {
            flag = 1;
            printf("\n\t\t\tCode \n\t\t\tName of Members \n\t\t\tGroup \n\t\t\tSalary \n\t\t\tPer Day Income\n");
            printf("\n\t\t\t%d \n\t\t\t%s \n\t\t\t%s \n\t\t\t%d \n\t\t\t%.2f", m.code, m.name, m.group, m.salary, m.income);
            printf("\n\tNow enter the new record.");

            printf("\n\t\t\tUpdate member code number: ");
            scanf("%d", &m.code);
            fflush(stdin);
            printf("\t\t\tUpdate Member Name: ");
            gets(m.name);
            printf("\t\t\tUpdate Group Name: ");
            gets(m.group);
            printf("\t\t\tUpdate Member Salary: ");
            scanf("%d", &m.salary);
            printf("\t\t\tUpdate Member Per Day Income: ");
            scanf("%f", &m.income);
            fseek(fp, -(long)sizeof(m), 1);
            fwrite(&m, sizeof(m), 1, fp);
            printf("\n\n\t\t\tRecord update successfully check the display.");
        }
    }
    if (flag == 0)
    {
        printf("\n\t\t\t\t\tError: Something went wrong!!");
    }
    fclose(fp);
}

void pattern_record()
{
    struct member temp;
    struct member arr[100];

    FILE *fp;
    fp = fopen("members.txt", "rb");
    if (fp == NULL)
    {
        printf("\n\n\t\t\t\tError: Can't open the file!!");
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
            if (arr[j].code > arr[j + 1].code)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n\t\t\t\tAfter pattern members ditiles.");
    for (i = 0; i < k; i++)
    {
        printf("\n\t\t\t%d \n\t\t\t%s \n\t\t\t%s \n\t\t\t%d \n\t\t\t%.2f", arr[i].code, arr[i].name, arr[i].group, arr[i].salary, arr[i].income);
    }
    fclose(fp);
}
