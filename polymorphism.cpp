#include<iostream>
#include<string>
using namespace std;

class Motor
{
public:
    virtual void show()
    {
        cout<<"general class of motor"<<endl;
    }

    virtual void set_rpm(int a)=0; //pure virtual function for abstract class
};

class servo : public Motor
{
public:
    void show()
    {
        cout<<"servo motor"<<endl;
    }

    void set_rpm(int a)
    {
        cout<<"rpm of servo motor is "<<a<<endl;
    }
};



class induction : public Motor
{
public:
    void show()
    {
        cout<<"induction motor"<<endl;
    }

    void set_rpm(int a)
    {
        cout<<"rpm of induction motor is "<<a<<endl;
    }
};

int main()
{
    //Motor m1;  // objects of abstract classes can't be defined
    servo s1;
    induction I1;


    Motor *m2 = &I1;
    m2->show();
    m2->set_rpm(50);
    //m1.show();

    I1.show();
}
