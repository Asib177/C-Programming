#include <stdio.h>

int main()
{

    int m, n, p;
    scanf("%d%d%d", &m, &n, &p);
    float mat1[m][n];
    float mat2[n][p];
    float mat3[m][p];

    // Fill Output Matrix with 0
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            mat3[i][j] = 0;
        }
    }

    // input for mat1
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &mat1[i][j]);
        }
    }

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d-", mat1[i][j]);
    //     }
    //     printf("\n");
    // }

    // input for mat2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%f", &mat2[i][j]);
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < p; j++)
    //     {
    //         printf("%d-", mat2[i][j]);
    //     }
    //        printf("\n");
    // }

    // mat3 = mat1 x mat2
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // display output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {

            printf("%0.1f ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}