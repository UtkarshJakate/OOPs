#include <iostream>

using namespace std;
class First {
    protected:
        int a;
    public:
    void getinfofirst(int x){
        a = x;
    }
    void showinfofirst(){
        cout << "Value of a = " <<a << endl;
    }
};

class Second : public First{
    protected:
    int b;
    int c;
    public:
    void getinfosecond(int y, int z){
        b = y;
        c = z;
    }
    void showinfosecond(){
        cout<<"Value of b = "<<b<<"n";
        cout<<"Value of c = "<<c<<"n";
    }
};

class Third : public Second{
    int d;
    public:
    void display(){
        d = b + c;          //Using member variables of class second
        showinfofirst();    //Using member function of class First
        showinfosecond();   //Using member function of class second
        cout<<"Value of d = "<<d<<"n";
    }
};

int main()
{
    Third third;
    third.getinfofirst(10);
    third.getinfosecond(20, 30);
    third.display();
    return 0;
}