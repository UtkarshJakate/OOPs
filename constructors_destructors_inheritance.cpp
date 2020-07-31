#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"base class constructor"<<endl;
    }
    ~base()
    {
        cout<<"base class destructor"<<endl;
    }
};

class base_2
{
public:
    base_2()
    {
        cout<<"base 2 class constructor"<<endl;
    }
    ~base_2()
    {
        cout<<"base 2 class destructor"<<endl;
    }
};
class derived:public base_2, public base
{
public:
    derived()
    {
        cout<<"derived class constructor"<<endl;
    } ~derived()
    {
        cout<<"derived class destructor"<<endl;
    }
};
int main()
{
    derived d;
    return 0;
}