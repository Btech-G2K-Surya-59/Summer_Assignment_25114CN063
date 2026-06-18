#include<stdio.h>
int  gcd(int a,int b){
    if(b==0)
    return a;
    else {
        return gcd(b,a%b);
    }}

int  main(){
    int  num1 , num2 , result;

    printf("Enter two number");
    scanf("%d %d",&num1,&num2);

    result = gcd(num1,num2);
    printf("the gcd is %d",result);

    return 0;
}