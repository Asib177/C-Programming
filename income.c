#include <stdio.h>

int main()
{
    char category;
    int work_experience;
    int family_member;
    float family_income;
    scanf("%c %d %d %f", &category, &work_experience, &family_member, &family_income);

    if ((work_experience >= 12 && family_member > 5) || family_income < 1000.50)
    {
        printf("Will Receive the Bonus");
    }
    else if ((category == 'Y' || category == 'Z') && family_member > 8 && family_income < 1100.78)
    {
        printf("Will Receive the Bonus");
    }
    else if (category == 'X' && family_member > 5)
    {
        printf("Will Receive the Bonus");
    }
    else
    {
        printf("Will not Recive the Bonus");
    }
    return 0;
}