#include <stdio.h>

int main()
{
    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    case 8:
        printf("Eight\n");
        break;
    case 9:
        printf("Nine\n");
        break;
    case 10:
        printf("Ten\n");
        break;
    default:
        printf("Invalid\n");
        exit(0);
    }

    main();

    return 0;
}
