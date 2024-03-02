#include<stdio.h>

void reverseArray(int *ptr, int size){
    for(int i=0; i<size; i++){
        // printf("value of array[%d] is %d\n", i, *ptr);
        printf("%d ",*ptr);
        ptr--;
    }
}

void reverseArray2(int array[], int size){
    for(int i=size-1; i>=0; i--){
        printf("%d ", array[i]);
    }
}

int* multiplier ( int array[], int size){
    for(int i=size-1; i>=0; i--){
        array[i] *= 2;
    }
    return array;
}

void printArray(int *ptr, int size){


    for(int i=0; i<size; i++){
        printf("%d ", *(ptr+i));
        // ptr++;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n;i++){
        scanf("%d", &array[i]);
    }

    // printArray(&array[0], n);
    // reverseArray(&array[n-1], n);
    // reverseArray2(array, n);
    int *ptr;
    ptr = multiplier(array, n);

    for(int i =0; i<n; i++){
        printf("%d ", array[i]);
        // ptr++;
    }


}