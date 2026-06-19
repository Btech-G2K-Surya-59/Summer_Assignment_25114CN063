#include<stdio.h>
int fibo(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else return fibo(n-1) + fibo(n-2);
}
int main(){

    int x;
    printf("Enter a nth number :");
    scanf("%d",&x);
    int result = fibo(x);
        printf("The %d fibonacci term is %d",x,result);


    return 0;
}