#include<stdio.h>
void main(){
    int n,num = 1;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= i;j++){
            printf("%d ",num++);
        }
        printf("\n");
    }
}