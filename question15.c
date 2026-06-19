#include<stdio.h>
int main(){
    int n , d , sum = 0 ,temp;
    printf("Enter a number :");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        d = n % 10;
        sum = sum + d * d * d;
        n = n / 10;
    }
    if(temp==sum){
        printf("The  given number  is armstrong number");
    }
    else{
        printf("The given number is not armstrong number");
    }



    return 0;
}