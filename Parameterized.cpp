//Kshitij  23070123075
//parameterized
#include<iostream>
using namespace std;

class Pconstruct
{
    int a,b;
    public:
        Pconstruct(int m,int n)
        {
            a = m;
            b = n;
        }
    void putdata()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b;
    }
};

int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    Pconstruct p1(x,y);
    p1.putdata();
}

/*
Enter two numbers: 4 5
a = 4
b = 5
*/
