#include<stdio.h>

void main()
{
    int n, sum=0;

    scanf("%d", &n);

    int ar[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==n/2 || j==n/2) sum+=ar[i][j];
            else if(i==0 && j<=n/2) sum+=ar[i][j];
            else if(i==n-1 && j>=n/2) sum+=ar[i][j];
            else if(j==n-1 && i<=n/2) sum+=ar[i][j];
            else if(j==0 && i>=n/2) sum+=ar[i][j];
        }
    }
    printf("Sum = %d", sum);
}