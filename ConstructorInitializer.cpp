#include<iostream>
using namespace std;

class student
{
public:
    const int admissionFee,examFee;int id;
    student(int x,int y,int z): admissionFee(x),examFee(y)
    {
        cout<<" Admission Fees = "<<admissionFee<<endl;
                cout<<" Exam Fees = "<<examFee<<endl;
                id = z;
                        cout<<" ID : "<<id<<endl;
    }
};
int main ()
{
    student s1(15000,500,101);
}
