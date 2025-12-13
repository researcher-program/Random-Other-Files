//Global vs Local
#include<stdio.h>
//Global Structure start
struct person
{int age,salary;
};//End global structure
 struct person prsn1,prsn2;//if Out of the main func.,that's why called "Local variable"
int main ()
{
   // struct person prsn1,prsn2;//if under the main func.,that's why called "Local variable"
    prsn1.age=27;prsn1.salary=125000;
    printf("prsn1:\n");printf("Age:%d\n",prsn1.age);printf("Salary:%d\n",prsn1.salary);

    prsn2.age=29;prsn2.salary=155000;
      printf("prsn2:\n");printf("Age:%d\n",prsn2.age);printf("Salary:%d\n",prsn2.salary);
      getch();

}
