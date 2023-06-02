#include<stdio.h>
void main(){
    int n,a = 0,b = 1,temp = 0;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(int i = 0;i < n;i++ ){
        printf("%d ",a);
        temp = a+b;
        a = b;
        b = temp;
    }
}