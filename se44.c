#include <stdio.h>

int isPrime(int num);
void printPrimes(int lower, int upper);

int main()
{
    int lower, upper;

    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lower, &upper);

    printPrimes(lower, upper);

    return 0;
}

void printPrimes(int lower, int upper)
{
    printf("List of prime numbers between %d to %d are: ", lower, upper);

    while (lower <= upper)
    {
        if (isPrime(lower))
        {
            printf("%d ", lower);
        }

        lower++;
    }
}

int isPrime(int num)
{
    int i;

    for (i = 2; i <= num / 2; i++)
    {

        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}