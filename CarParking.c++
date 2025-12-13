#include<iostream>
using namespace std;
main()
{
cout<<"\t\t \t C A R   P A R K I N G \n"<<endl;
int enter;int car=0,bike=0,rickshaw=0;
cout<<"Users are Just entering(1~6),otherwise,Invalid Input!\n"<<endl;
while(true)
{
cout<<"Press 1 to enter Car"<<endl;
cout<<"Press 2 to enter Bike"<<endl;
cout<<"Press 3 to enter Rickshaw"<<endl;
cout<<"Press 4 to show the Records"<<endl;
cout<<"Press 5 to delete the Records"<<endl;
cout<<"Press 6 to Exit"<<endl;

cin>>enter;

if(enter==1){car++;system("cls");cout<<"Car is Added"<<endl;}
else if(enter==2){bike++;system("cls");cout<<"Bike is Added"<<endl;}
else if(enter==3){rickshaw++;system("cls");cout<<"Rickshaw is Added"<<endl;}
else if(enter==4){cout<<"Car = "<<car<<endl;cout<<"Bike = "<<bike<<endl;cout<<"Rickshaw = "<<rickshaw<<endl;}
else if(enter==5){car=0,bike=0,rickshaw=0;system("cls");cout<<"All the records are deleted successfully...!"<<endl;}
else if(enter==6){exit(0);}
else
{cout<<"Invalid Input"<<endl;}
}
}
