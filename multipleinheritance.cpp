#include <iostream>
using namespace std;
class One{
    protected:
    int a;
    public:
    void getinfoOne(int x){
        a = x;
    }
};

class Two {
    protected:
    int b;
    public:
    void getinfoTwo(int y){
        b = y;
    }
};

class Main : public One, public Two{
    public :
        void Display(){
        cout << "Value of a = " << a << endl;   //accessing member variables of class One
        cout << "Value of b = " << b << endl;    //accessing member variables of class Two
        cout << "Value of c = " << a+b << endl;
    }
};

int main()
{
    Main main;
    main.getinfoOne(10);  //accessing member function of class One
    main.getinfoTwo(20);  //accessing member function of class Two
    main.Display();
    return 0;
}