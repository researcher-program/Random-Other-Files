//Project Guessing Game
#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main ()
{
    while(1)
    {
        int guessNumber;
        cout<<"Enter Your Guess between 1 to 5 : ";cin>>guessNumber;

        int randomNumber = 1+rand() % 5;

        if(guessNumber == randomNumber){cout<<" You have won the Imaginary Game! "<<endl<<endl;}
        else
        {
          cout<<"You have lost the Imaginary Game!"<<endl<<endl;
        cout<<" Don't worry,try again ^_^ "<<endl<<endl;
        cout<<" Your Guess(Random) Number was =  "<<randomNumber<<endl<<endl;
          }
    }
    getch();
}
