#include <stdio.h>
void characterFunc(char);
void intigerFunc(int);

int main()
{
    int n1, n2;
    scanf("%d %c", &n1, &n2);

    intigerFunc(n1);
    characterFunc(n2);
    return 0;
}
void characterFunc(char a)
{
    printf("Value recieved from main: %c\n", a);
}
void intigerFunc(int a)
{
    printf("Value recieved from main: %d\n", a);
}