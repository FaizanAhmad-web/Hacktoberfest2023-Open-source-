#include<stdio.h>
// Program to print nth term of fibonacci series !
int fib(int n);
int main(){
    int n=4;
    printf("%d \n", fib(n));
    return 0;

}
int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int fibNM1=fib(n-1);
    int fibNM2=fib(n-2);
    int fibn=fibNM1 +fibNM2;
    return fibn;
}
