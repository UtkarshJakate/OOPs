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

class Main : protected One, protected Two{
    protected:
    int a;
    void getinfoOne(int x){
        a = x;
    }
    protected:
    int b;
    void getinfoTwo(int y){
        b = y;
    }
    public :
        void info(){
            getinfoOne(10);
            getinfoTwo(20);
        }
        void Display(){
        cout << "Value of a = " << a << endl;   //accessing member variables of class One
        cout << "Value of b = " << b << endl;    //accessing member variables of class Two
        cout << "Value of c = " << a+b << endl;
    }
};

int main()
{
    Main main;
    //main.getinfoOne(10);  //accessing member function of class One
    //main.getinfoTwo(20);  //accessing member function of class Two
    main.info();
    main.Display();
    return 0;
}