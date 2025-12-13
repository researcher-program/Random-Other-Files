    //Create A Digital Watch(Clock)!
#include<stdio.h>
#include<windows.h>
int main ()
{
    int year,month,week,day,hour,min,sec;int d=1000;//I add a delay of 1000 milliseconds & I'll use it in the (time)function sleep...!

    printf("\t\t\t Welcome To My Paradise(Program-Researcher)!!! \n");printf("\t\t\t      ***Create A Digital Clock...!*** \n");
    printf("\n Set Your Timer/Time!  \n");

    printf(" Input Your   Year(Timer) : ");scanf("%d",&year);
    printf(" Input Your  Month(Timer) : ");scanf("%d",&month);
    printf(" Input Your   Week(Timer) : ");scanf("%d",&week);
    printf(" Input Your    Day(Timer) : ");scanf("%d",&day);
    printf(" Input Your   Hour(Timer) : ");scanf("%d",&hour);
    printf(" Input Your Minute(Timer) : ");scanf("%d",&min);
    printf(" Input Your Second(Timer) : ");scanf("%d",&sec);

    if(year>1||month>30||week>7||day>1||hour>24||min>60||sec>60){printf(" Error...! Please try again. \n");exit(0);}

    while(1)//This is a loop & anything inside will repeat itself to infinity.
    {
        sec++;if(sec>59){min++;sec=0;}if(min>59){hour++;min=0;}if(hour>23){day++;hour=1;}if(day>1){week++;day=1;}if(week>6){month++;week=7;}if(month>29){year++;month=30;}if (year>2){year=1;}

        printf("\n Clock : \n");printf("\n %02d:%02d:%02d:%02d:%02d:%02d:%02d",year,month,week,day,hour,min,sec);//It shows the Time-format is :- 00:00:00:00.

        Sleep(d);//This function sleep-down while-loop end & makes it more realistic Clock.

        system("cls");//It clears the screen.
    }
}
