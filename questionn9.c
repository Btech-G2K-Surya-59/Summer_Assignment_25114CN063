#include<stdio.h>
int main(){
int i , n , a = 0;
printf("Enter a Number:");
scanf("%d",&n);
for(i=2;i<=n-1;i++){
    if(n%i==0){
        a = 1;
        break;
    }
}if(n==1){
    printf("1 is not prime number");
}
else if(a==0){
    printf("The %d is prime number",n);
}
else{
    printf("The number is not prime number");
}




    return 0;
}