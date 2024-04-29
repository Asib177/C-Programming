#include <stdio.h>

int main()
{
    printf("Enter Your choice: ");
    char choice;
    scanf("%c", &choice);

    printf("\nEnter Two Numbers: ");

    switch (choice)
    {
        int a, b;
    case '+':
        scanf("%d %d", &a, &b);
        int sum = a + b;
        printf("Sum: %d\n", sum);
        break;
    case '-':
        scanf("%d %d", &a, &b);
        printf("Sub:  %d\n", a - b);
        break;
    case '*':
        scanf("%d %d", &a, &b);
        printf("Multi: %d\n", a * b);
        break;
    case '/':
        scanf("%d %d", &a, &b);
        printf("Div: %d\n", a / b);
        break;
    case '%':
        scanf("%d %d", &a, &b);
        printf("Reminder: %d\n", a % b);
        break;
    default:
        printf("Invalid\n");
    }

    return 0;
}
