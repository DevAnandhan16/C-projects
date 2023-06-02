#include<stdio.h>
void main(){
    int n,p=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 2;i<n;i++ ){
        if(n%i == 0){
            p = 0;
            break;
        }
    }
    if(n<1){
        printf("Only positive non-zero integers");
    }
    else if(n != 1 && p != 0){
        printf("%d is a prime number",n);
    }
    else
    printf("%d is not a prime number",n);
}