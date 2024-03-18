#include<stdio.h>

int main(){
    int a =5;
    int *ptr;
    int **pptr;

    ptr = &a;
    pptr = &ptr;

    printf("The value of a is %d\n", a);
    printf("The address of a is %d\n", &a);
    printf("The value of ptr is %d\n", ptr);
    printf("The address of ptr is %d\n", &ptr);
    printf("The value of the variable pointed by ptr is %d\n", *ptr);

    printf("The value of pptr is %d\n", pptr);
    printf("The address of pptr is %d\n", &pptr);
    printf("The value of the pointer pointed by pptr is %d\n", *pptr);
    printf("The value of the variable pointed by pptr is %d\n", **pptr);
}