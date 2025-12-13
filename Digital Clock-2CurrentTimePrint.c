#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
    time_t s,val=1;
    struct tm* current_time;
    //Time in Second
    s=time(NULL);
    //to get current time
current_time=localtime(&s);
//print time in minus
//hours and seconds
printf("%2d:%2d:%2d",current_time ->tm_hour,current_time ->tm_min,current_time ->tm_sec);
getch();
}
