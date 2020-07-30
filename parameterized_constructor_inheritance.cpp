#include <iostream>
using namespace std;

// base class
class Parent
{

    public:
    // base class's parameterised constructor
    Parent(int i)
    {  int x =i;
        cout << "Inside base class's parameterised constructor" << endl;
    }
};

// sub class
class Child : public Parent
{
    public:
    // sub class's parameterised constructor
    Child(int j): Parent(j)
    {
        cout << "Inside sub class's parameterised constructor" << endl;
    }
};
// main function
int main() {
    // creating object of class Child
    Child obj1(10);
    return 0;
}

/*
class student{
    char name[20];
    char course[20];
    public:
        student(){}
        student(char name[20], char course[20]){
            strcpy(this->name,name);
            strcpy(this->course,course);
        }
        void showdetails(){
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
        }
};

class marks : public student{
    int m1,m2,m3;
    public:
    marks(char name[20], char course[20],int m1, int m2, int m3){
        student(name,course);
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    void showmarks(){
        cout << "M1: " << m1 << endl;
        cout << "M2: " << m2 << endl;
        cout << "M3: " << m3 << endl;
    }
};

int main(){
    char name[20] = "ABC";
    char sub[20] = "C++";
    marks m(name,sub,56,90,90);
    return 0;
}
*/