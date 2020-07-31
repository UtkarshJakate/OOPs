#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout << a << endl;
        cout<<"base class constructor"<<endl;
    }
    ~base()
    {
        cout<<"base class destructor"<<endl;
    }
};

int main()
{
    base b(2);
    return 0;
}