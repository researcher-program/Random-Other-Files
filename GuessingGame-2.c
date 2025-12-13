#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int num,guess,tries = 0;srand(time(0));num=rand()%50+1;
    printf("Guess My Number Game! \n \n");
    do{
        printf("Enter a guess between 1 and 50:");
        scanf("%d",&guess);tries++;
        if(guess>num)
        {
            printf("Too High! \n");
        }
        else if(guess<num)
        {
            printf("Too Low! \n");
        }
        else
        {
            printf("\n Correct you got it in %d guesses \n",tries);
        }
    }

while(guess!=num);
getch();
}

