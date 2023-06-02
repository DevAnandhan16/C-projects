#include<stdio.h>
void main(){
    int n,temp,r,res =0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        r = temp%10;
        res = res*10 + r;
        temp /= 10;
    }
    if(res==n)
    printf("%d is palindrome",n);
    else
    printf("%d is not a palindrome",n);
}