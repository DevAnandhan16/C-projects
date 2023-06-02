#include<stdio.h>
void main(){
    int n,temp,r,fact=1,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(temp != 0){
        r = temp%10;
        for(int i = 1;i<=r;i++){
            fact *= i;
        }
        sum += fact;
        fact = 1;
        temp /= 10;
    }
    if(sum==n)
    printf("%d is a strong number",n);
    else
    printf("%d is not a strong number",n);
}