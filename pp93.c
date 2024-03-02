#include<stdio.h>

void swap(int *a, int *b){
    printf("Address of a: %d | Value of a: %d\n", &a, a);
    printf("Address of b: %d | Value of b: %d\n", &b, b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
void swap2(int a, int b){
    printf("Address of a: %d | Value of a: %d\n", &a, a);
    printf("Address of b: %d | Value of b: %d\n", &b, b);
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("Address of a: %d | Value of a: %d\n", &a, a);
    printf("Address of b: %d | Value of b: %d\n", &b, b);
}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    printf("Address of n: %d | Value of n: %d\n", &n, n);
    printf("Address of m: %d | Value of m: %d\n", &m, m);
    swap(&n,&m);
    // swap2(n,m);

    printf("Address of n: %d | Value of n: %d\n", &n, n);
    printf("Address of m: %d | Value of m: %d\n", &m, m);


}