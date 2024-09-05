//Kshitij  23070123075
//construct outside class.
#include<iostream>
using namespace std;

class student
{
    int prn;
    char name[50];
    double fee;

    public:
    student();
    void display();
};

student::student()
{
    cout<<"Enter your prn: ";
    cin>>prn;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your fees: ";
    cin>>fee;
}

void student::display()
{
    cout<<prn<<"\t"<<name<<"\t"<<fee;
}

int main()
{
    student s1;
    s1.display();
}
