#include<stdio.h>
struct user
{
    char name[30];
    int age;
    long int phno;
    int salary;
}a[20];
int main()
{
    int n;
    printf("enter the numeber of employees u want to add?: ");
    scanf("%d",&n);
    int i=0,j=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter details of the employee in the order(name,age,phone number,salary): ");
        scanf(" %s%d%ld%d",a[i].name,&a[i].age,&a[i].phno,&a[i].salary);
    }
    printf("NAME\tAGE\tPHONENUMBER\tSALARY\n");
    for(j=0;j<n;j++)
    {
        printf("%s\t%d\t%ld\t\t%d\n",a[j].name,a[j].age,a[j].phno,a[j].salary);
    }

}
