//Kshitij 23070123075
//copy constructor.
#include<iostream>
using namespace std;

class wall
{
    double length;
    double height;

    public:
    wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    wall(wall &obj)             //copy constructor
    {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea()
    {
        return length*height;
    }
};

int main()
{
    wall wall1(10.5,8.6);
    wall wall2 = wall1;

    cout<<"Area of wall 1: "<<wall1.calculateArea()<<endl;
    cout<<"Area of wall 2: "<<wall2.calculateArea()<<endl;
}

/*
Area of wall 1: 90.3
Area of wall 2: 90.3
*/
