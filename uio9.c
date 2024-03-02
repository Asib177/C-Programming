#include <stdio.h>
#include <math.h>
float CalcMean(float arr[], int num_of_elem);
float Calc_Std_deviation(float arr[], int num_of_elem);
int main()
{
    int n;

    scanf("%d", &n);
    float arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    printf("%0.2f", Calc_Std_deviation(arr, n));
}

float Calc_Std_deviation(float arr[], int num_of_elem)
{
    float mean = CalcMean(arr, num_of_elem);
    float arr_square_distance[num_of_elem];
    float sum = 0;
    float div_sum_by_num_elem = 0;
    float root_last;

    for (int i = 0; i < num_of_elem; i++)
    {
        arr_square_distance[i] = pow(arr[i] - mean, 2);

        sum += arr_square_distance[i];
    }

    for (int i = 0; i < num_of_elem; i++)
    {
        printf("%0.2f ", arr_square_distance[i]);
    }
    printf("\nsum %0.2f \n", sum);

    div_sum_by_num_elem = sum / num_of_elem;
    root_last = sqrt(div_sum_by_num_elem);

    return root_last;
}

float CalcMean(float arr[], int num_of_elem)
{
    float sum = 0;
    for (int i = 0; i < num_of_elem; i++)
    {
        sum += arr[i];
    }

    return sum / num_of_elem;
}
