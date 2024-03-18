#include<stdio.h>

int sum = 0;

int recur1(int a, int mul){
    // printf("I am recur1(%d)\n",a);
    // Base Call
    if(a==1){
        printf("%d ",a);
        mul = a;
        // printf("mul = %d\n", mul);
        // printf("Base call activated | Ending recur1(%d)\n",a);
        return mul;
    }
    // Recursive Call
    int chk = recur1(a-1, mul);
    if(a%2==0){
        printf("* %d ",a);
        mul = a* chk;
        sum+=mul;
        // printf("mul = %d\n", mul);
    }
    else{
        printf("+ %d ",a);
        mul = a;
        // printf("mul = %d\n", mul);
    }
    // printf("Ending recur1(%d)\n", a);
    return mul;

}

int main(){
    int n;
    scanf("%d", &n);
    int result = recur1(n,0);
    if(n%2==0)
    printf(" = %d", sum);
    else
    printf(" = %d", sum+result);


}