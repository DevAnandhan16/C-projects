#include<stdio.h>

int main()
{
    int arr[3][3];
    int *p = *arr;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",p);
            p++;
        }
    }
    p = *arr;
    printf("\nThe matrix is :\n");
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            printf("%d  ",*p);
            p++;
        }
        printf("\n");
    }
    p = *arr;
    printf("\n");
    int sum = 0;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            if(i==j)sum += *p;
            p++;
        }
    }
    printf("The sum of the diagonal elements = %d",sum);
    return 0;
}
