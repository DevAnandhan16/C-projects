#include<stdio.h>

int sumofdigits(int n)
{
    static int sum = 0,a,b;
    if(n>0)
    {
       a=n%10;
       sum += a;
       b=n/10;
       sumofdigits(b);
    }
    return sum;
}

int main()
{
    int n,sum;
    printf("Input number: ");
    scanf("%d",&n);
    sum = sumofdigits(n);
    printf("Output number: %d",sum);
    return 0;
}
