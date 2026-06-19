#include<stdio.h>
int fibo(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else return fibo(n-1) + fibo(n-2);
}
int main(){
    int term , i ;
    printf("Enter a term :");
    scanf("%d",&term);
    printf("Fibonacci term :");
    for(i=0;i<term;i++){
        printf("%d\n",fibo(i));
    }

    return 0;
    
}