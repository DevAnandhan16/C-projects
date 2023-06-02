#include<stdio.h>

enum bool{False,True};
enum day{Sun = 1,Mon,Tue,Wed,Thur,Fri,Sat};

void main(){
    enum bool var = True;
    enum day var1 = Thur;
    if(var1 == Sun || var1 == Sat)
    printf("\nToday Holiday\n");
    else
    printf("\nSorry.....no holiday today\n");
    printf("var = %d\n",var);
}