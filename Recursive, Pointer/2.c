#include<stdio.h>
// 769 --> 0 ----> 9
// 76 ---> 9 -----> 9*10 + 6 =96
// 7 ---> 96 ----> 96*10 + 7 =967

int reverse1(int a){
    static int REVERSE = 0; //0
    int digit;// 0
    digit = a%10;
    
    if(a==0)
    {
        return REVERSE;
    }
    REVERSE = REVERSE * 10 + digit;
    return reverse1(a/10);
}



int reverse2(int a, int rev){
    int REVERSE = rev; //0
    int digit;// 0
    digit = a%10;
    if(a==0)
    {
        return REVERSE;
    }
    REVERSE = REVERSE * 10 + digit;
    return reverse2(a/10, REVERSE);
}

int main(){
    int n;
    scanf("%d", &n);
    // int result = reverse2(n, 0);
    int result = reverse1(n);
    printf("%d",result);

}