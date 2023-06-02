#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 12

void main(){
    srand(time(0));
    int number1 = (rand()%N)+1;
    int number2 = (rand()%N)+1;
    int number3 = (rand()%N)+1;
    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%d\n",number3);
}