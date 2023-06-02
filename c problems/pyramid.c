#include <stdio.h>
void main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j<2*n;j++){
            if(j>=n-i && j<=n+i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}