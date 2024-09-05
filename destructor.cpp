//Kshitij  23070123075
//destructor
#include<iostream>
using namespace std;
int count=0;
class Student
{
    public: 
    Student()
    {
        count++;
        cout<<"Number of objects created: "<<count<<endl;
    }
    ~Student()
    {
        count--;
        cout<<"No. of objects destroyed: "<<count+1<<endl;
    }
};

int main()
{
    Student aa,bb,cc;
    {
        Student dd;
    }
}

/*
Number of objects created: 1
Number of objects created: 2
Number of objects created: 3
Number of objects created: 4
No. of objects destroyed: 4
No. of objects destroyed: 3
No. of objects destroyed: 2
No. of objects destroyed: 1
*/
