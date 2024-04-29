#include <stdio.h>

int main()
{
    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Red\n");
        break;
    case 2:
        printf("Black\n");
        break;
    default:
        printf("Invalid\n");
    }

    return 0;
}
