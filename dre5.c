#include <stdio.h>

void printevenodd(int cur, int limit);

int main()
{
    int lowerLimit, upperLimit;

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printevenodd(lowerLimit, upperLimit);

    return 0;
}

void printevenodd(int cur, int limit)
{
    if (cur > limit)
        return;

    printf("%d, ", cur);

    printevenodd(cur + 2, limit);
}