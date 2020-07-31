#include <iostream>
using namespace std;

class First
{
    public :
    void display()
    {
        cout<<"This display is inside the first class" << endl;
    }
};

class Second: public First
{
    public: 
    void display()
    {
        cout<<"This show is inside the second class which is derived from parent class" << endl;
    }
};
int main()
{
    First f;
    f.display();
    //f.show();
    Second s;
    s.display();
    //s.display();
    //s.show();
}