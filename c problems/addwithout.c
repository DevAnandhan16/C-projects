#include<stdio.h>
void main(){
    int a,b,sum,carry;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    while(b!=0){
        sum = a^b;
        carry = (a&b)<<1;
        a = sum;
        b = carry;
    }
    printf("The sum = %d",a);
}