#include<stdio.h>

int min(int a , int b)
{
    if(a <= b)
        return a;
    else
        return b;
}

int lcm(int a , int b)
{
    static int mul = 1,x = 2;
    if(x > min(a,b) || a== 1 || b == 1)
    {
        for(int i = 2; i <= min(a,b) ; i++)
        {
            if((a%i == 0) && (b%i == 0))
            {
                mul *= i;
                a = a/i;
                b = b/i;
            }
        }
        return mul*a*b;
    }
    else
    {
        if((a%x == 0) && (b%x == 0))
        {
            mul *= x;
            a = a/x;
            b = b/x;
        }
        x++;
        lcm(a,b);
    }
}

int main()
{
    int a,b,c;
    printf("Input first number: ");
    scanf("%d",&a);
    printf("Input second number: ");
    scanf("%d",&b);
    c = lcm(a,b);
    printf("LCM of %d and %d = %d",a,b,c);
    return 0;
}
