////Evaluation 02

#include <stdio.h>
#define N 1000

int main()
{
    int i, j, k, a, n;
    int array[N];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        a = 1;
        for (j = i + 1; j < n; j++)
        {
            if (array[i] = array[j])
                for (k = 1; k < n - 1; k++)
                {
                    array[k]=array[k+1];
                }
                n--;
                j--;
                a=0;
        }
    }

    return 0;
}