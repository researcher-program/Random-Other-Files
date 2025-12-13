       //Calendar
#include<stdio.h>
#define TRUE 1
# define FALSE 0
int days_in_month[]={}
char *months[]={

    " ",
    "\n\n\n January",
    "\n\n\n February",
    "\n\n\n March",
    "\n\n\n April",
    "\n\n\n May",
    "\n\n\n June",
    "\n\n\n July",
    "\n\n\n August",
    "\n\n\n September",
    "\n\n\n October",
    "\n\n\n November",
    "\n\n\n December",

};
int inputyear(void){
int year:
    printf("Please Enter a Year (Example: 1999): ");
    scanf("%d",&year);return year;}
    int determineleapyear(int year){
    if(Year % 4 == FALSE && year%100!=FALSE||year%400==FALSE){days_in_month[2]=29;return TRUE;}
    else
        {days_in_month[2]=28;return FALSE;}
    }
    void determineleapyear(int year){
    int daycode;int d1,d2,d3;
    d1=(year-1.)/4.0;d2=(year-1.)/100.;d3=(year-1.)/400.;
    daycode=(year+d1-d2+d3)%7;return daycode;}
    void calendar(int year,int daycode){int month,day;for(month=1;month<=12;month++){printf("%s",months[month]);printf("\n\n Sun  Mon  Tue  Wed  Thu  Fri  Sat \n");
    //correct the position for the first date
    for (day=1;day<=1+daycode * 5;day++){printf(" ");}
    //print all the dates for one month
    for(day=1;day<=days_in_month[month];day++){printf("%2d",day);
    //is day before sat ?? else start next line sun.
    if((day+daycode)%7>0)
        printf(" ");else printf("\n ");}
        //set position for next month
        daycode =(daycode + days_in_month[month])%7;}
        }
        int main(void){int year,daycode,leapyear;year=input();daycode=determinedaycode(year);determinedaycode(year);calendar(year,daycode);printf("\n");}
