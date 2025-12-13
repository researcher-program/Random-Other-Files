#include <iostream>
using namespace std;
int main ()
{
    int n,sum=0;
    cout<<"Enter number of Students : " ;cin>>n;
    int students[n];
    //input
    for(int i=0;i<n;i++){cout<< "Marks for Students " << i+1 <<" = ";cin>> students[i];sum=sum+students[i];}
    cout<<endl;
    cout << "Total marks : "<<sum<<endl; float avg=(float)sum/n;cout<<"Average : "<<avg<<endl;

    //Maximum & Minimum Marks Show:-
    int max = students[0];int min = students[0];
    for(int i=1;i<n;i++){if(max < students [i] ){ max = students [i];}if(min > students[i] ){ min = students [i];}}
    cout<< "Maximum Marks = " << max << endl; cout << "Minimum Marks = "<< min << endl;

    return 0;
}
