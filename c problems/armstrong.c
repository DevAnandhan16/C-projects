#include<stdio.h>
void main(){
    int n,temp,c=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        c++;
        temp/=10;
    }
    int mul=1,sum=0,r;
    temp = n;
    while(temp!=0){
        r = temp%10;
        for(int i =0;i<c;i++){
            mul *= r;
        }
        sum += mul;
        mul = 1;
        temp /= 10;
    }
    if(sum==n)
    printf("%d is a armstrong",n);
    else
    printf("%d is not an armstrong",n);
}