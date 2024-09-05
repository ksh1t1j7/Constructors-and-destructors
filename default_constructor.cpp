//Kshitij  23070123075
//Default constructor
#include<iostream>
using namespace std;

class construct
{
    int a,b;
    public:
        construct()
        {
            a=10;
            b=30;
        }
    void putdata()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b;
    }
};

int main()
{
    construct c1;
    c1.putdata();
}

/*
a = 10
b = 30
*/
