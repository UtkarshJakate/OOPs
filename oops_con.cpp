#include<iostream>
#include<string>
using namespace std;


class Motor {
    public:
        string name; // No initialization allowed in Class declaration
        int speed;
        float radius_of_wheel;
    public:

        Motor()  //default constructor
        {
            name = "DC";
            speed = 10;
            radius_of_wheel = 2.5;
        }

        Motor(string s1,int a,int b) // parameter constructor
        {
            name = s1;
            speed = a;
            radius_of_wheel = b;
        }
        Motor(const Motor &m) //copy constructor
        {
            name = m.name;
            speed = m.speed;
            radius_of_wheel = m.radius_of_wheel;
        }

        void getData();
        void printData();
};

int main()
{
    Motor m1;
    cout<< m1.name <<endl;
    Motor m2("induction",10,2.5);
    cout<< m2.name <<endl;
    Motor m3 = m2;
    cout<<m2.name<<endl;




}
