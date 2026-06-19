#include<stdio.h>
int main(){
int i , n ,d , sum, m;
printf("Enter a range :");
scanf("%d",&n);
for(i=1;i<=n;i++){
    m = i;
    sum = 0;
    while(m>0){
        d = m % 10;
        sum = sum +  d * d * d;
        m = m / 10;
    }
    if(sum==i){
        printf("%d\n",i);
    }
}




    return 0;
}