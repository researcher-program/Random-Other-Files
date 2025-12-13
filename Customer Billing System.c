#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define GOTOXY(x,y) printf("\033[%d,%df]",y,x)
void delay(int time)
{
    int milli = 1000 * time;clock();while(clock()<milli);
}
void input();void writefile();void search();void output();
struct data
{
    int day,month,year;
};
struct account
{
    int number,acct_no;
      char name[100],street[100],city[100],acct_type;
        float mobile_no,oldbalance,newbalance,payment;
    struct datelastpayment

}customer;
int tl,sl,ts;
void main ()
{
    int i,n;char ch;system("clear");

    printf("   \n\n<~~~~~~~~>CUSTOMER BILLING SYSTEM<~~~~~~~~>\n\n");
      printf("   \n\n============================\n");
       printf("1.Add Account on List\n");
        printf("2.Search Customer Account \n");
         printf("3.Exit\n");printf("=====================");
    do
    {
        printf("\n Select What You Want To Do ?\n");ch=getchar();
    }while(ch<='0'||ch>'3');switch(ch)
    {
    case '1':
        system("clear");printf("\n How many Customer Accounts : ");scanf("%d",&n);getch();
        for(i=0;i<n;i++)
            {
                if(customer.payment >0.0)
                {customer.acct_type=(customer.payment<customer.oldbalance)?'0':'D';}
        else
            {customer.acct_type=(customer.oldbalance>0) ? 'D' : 'C';
            customer.newbalance=customer.oldbalance-customer.payment;}
            writefile();
        }
        main();
        case '2':getchar();system("clear");
        printf("Search what you want ?\n");
        printf("1.____Search Customer's Number!\n");
        printf("2.____Search Customer's Name!\n");
        search();ch=getchar();
       main();
       case '3' : system("clear");delay(500);GOTOXY(10,25);
       printf("A Project by :AL-ARAFAT(YEASH) \n");
       delay(1500);exit(1);
    }
}
void input()
{
    FILE *fp=fopen("file.txt","ab+");fseek(fp,0,SEEK_END);tl=ftell(fp);sl=sizeof(customer);ts=tl/sl;
    fseek(fp,(ts-1)*sl,SEEK_SET);fread(&customer,sizeof(customer),1,fp);

    printf("\n customer No. :%d \n",++customer.number);fclose(fp);
    printf("  Account Number: ");scanf("%d",&customer.acct_no);getchar();
    printf("\n  Name:");scanf("%s",&customer.name);getchar();
    printf("\n  Mobile No. :");scanf("%f",&customer.mobile_no);getchar();
    printf("\n  Street : ");scanf("%s",&customer.street);getchar();
    printf("\n  City :");scanf("%s",&customer.city);getchar();
    printf("\n Previous Balance :");scanf("%f",&customer.oldbalance);getchar();
    printf("\n Current Payment :");scanf("%f",&customer.payment);getchar();
    printf("   Payment Date(dd/mm/yy):");
    scanf("%d/%d/%d",&customer.lastpayment.day,&customer.lastpayment.month,&customer.lastpayment.year);
    getchar();
}
void writefile()
{
    FILE *fp;fp=fopen("file.txt","ab+");fwrite(&customer,sizeof(customer),1,fp);fclose(fp);return;
}
void search()
{
    char ch;char nam[100];int n,i,m=1;FILE *fp;fp=fopen("file.txt","r+");
    do{printf("\n Enter Your Choice :");ch=getchar();}while(ch!='1' && ch!='2');switch(ch)
        {
            case '1' :fseek(fp,0,SEEK_END);tl=ftell(fp);sl=sizeof(customer);ts=tl/sl;
            do
            {printf("\n Choose Customer Number :");scanf("%d",&n);if(n<=0||n>ts)printf("\n Enter Correct Number...!!!");
            else
                {
                    fseek(fp,(n-1)*sl,SEEK_SET);fread(&customer,sl,1,fp);output();
                }
                printf("\n\n Again,Please!(y/n)");ch=getchar();}
            while(ch=='y');fclose(fp);break;
            case '2' : fseek(fp,0,SEEK_END);tl=ftell(fp);sl=sizeof(customer);ts=tl/sl;fseek(fp,(ts-1)*sl,SEEK_SET);
            fread(&customer,sizeof(customer),1,fp);n=customer.number;

            do
            {printf("\n  Enter the Name : ");scanf("%s",&nam);fseek(fp,0,SEEK_SET);
            for(i=1;i<=n;i++){fread(&customer,sizeof(customer),1,fp);if(strcmp(customer.name,nam)==0){output();m=0;break;}
            }
            if(m!=0){printf("\n\n Doesn't Exist! \n");printf("\n\n Choose Another ?(y/n)");ch=getchar();}
            }
            while(ch=='y');fclose(fp);}
        return;
}
void output()
{
    printf("\n\n Customer No. :%d \n",customer.number);
    printf("  Name :%s \n",customer.name);
    printf(" Mobile No. :%.f \n",customer.mobile_no);
    printf("  Account Number :%d \n",customer.acct_no);
    printf("  Street :%s \n",customer.street);
    printf(" City :%s \n",customer.city);
    printf("  Old Balance :%.2f \n",customer.oldbalance);
    printf(" Current Payment :%.2f \n",customer.payment);
    printf("  New Balance :%.2f \n",customer.newbalance);
    printf(" Payment Date :%d/%d/%d \n\n",customer.lastpayment.day,customer.lastpayment.month,customer.lastpayment.year);
    printf("      Account Status:");
    switch(customer.acct_type)
    {
        case'C' :printf(" CURRENT \n\n");break;
        case'O' :printf(" OVERDUE \n\n");break;
        case'D' :printf(" DELINQUENT \n\n");break;
        default:
            printf("ERROR \n\n");
    }
    return;
}
