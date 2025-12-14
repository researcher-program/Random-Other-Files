#include "myclassdemo.h"
#include <iostream>
using namespace std;
void MyClassDemo::display1() const
{
   cout<<"I'm making a Constant Function."<<endl
   ;
}
void MyClassDemo::display2()
{
   cout<<"I'm making a Non-constant Function.";
}
