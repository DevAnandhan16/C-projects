#include<stdio.h>

int main()
{
    int x;
    printf("Enter any number between 1 to 5 : ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Food item - French fries\nPrice - Rs 99");
        break;
    case 2:
        printf("Food item - Pizza\nPrice - Rs 239");
        break;
    case 3:
        printf("Food item - Sandwich\nPrice - Rs 149");
        break;
    case 4:
        printf("Food item - Burger\nPrice - Rs 129");
        break;
    case 5:
        printf("Food item - Pasta\nPrice - Rs 179");
        break;
    default :
        printf("You entered number which is not between 1 to 5");
        break;
    }
    return 0;
}
