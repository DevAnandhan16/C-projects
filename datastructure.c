#include<stdio.h>
#include<stdlib.h>

struct employee{
    char empname[50];
    int age;
    long long int empno;
    int salary;
};

struct employee emp[20];
int n = 0,i = 0,j,wait;

void display()
{
    printf("Name\tAge\tPhone number\tSalary\n");
    for(int x = 0;x < i;x++)
    {
        printf("%s\t",emp[x].empname);
        printf("%d\t",emp[x].age);
        printf("%lld\t",emp[x].empno);
        printf("%d\t",emp[x].salary);
        printf("\n");
    }
    printf("\nEnter any number to continue.....");
    scanf("%d",&wait);
}


int main()
{
    while(1)
    {
        printf("Enter 1 to insert the employee details\nEnter 2 to display the employee details\nEnter 3 to exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                do{
                    printf("Enter employee [%d] name = ",i+1);
                    scanf(" %s",&emp[i].empname);
                    printf("Enter employee [%d] age = ",i+1);
                    scanf("%d",&emp[i].age);
                    printf("Enter employee [%d] phone number = ",i+1);
                    scanf("%lld",&emp[i].empno);
                    printf("Enter employee [%d] salary = ",i+1);
                    scanf("%d",&emp[i].salary);
                    printf("Enter 1 to insert one more employee details\nEnter 2 to exit\n");
                    scanf("%d",&j);
                    i++;
                }while(j == 1);
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;

        }
        system("cls");
    }
}
