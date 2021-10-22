#include<stdio.h>

int prime(int n)
{
    static int x = 2,i = 1;
    if((x < n) && (n%x == 0))
    {
       i = 0;
    }
    else if(x<n)
    {
        x++;
        prime(n);
    }
    return i;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x == 1)
    {
        printf("1 is not a prime number");
        return 0;
    }
    int n = prime(x);
    if(n == 1)
    {
        printf("%d is a prime number",x);
    }
    else
    {
        printf("%d is not a prime number",x);
    }
    return 0;
}
