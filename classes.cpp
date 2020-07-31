#include<iostream>
#include<string.h>
using namespace std;

class Motor {
    private:
        char name[10]; // No initialization allowed in Class declaration
        int speed;
        float radius_of_wheel;
        float DistanceTravelled(int time);
        int noOfRotations(int Dist);

        const int a,b;
    public:
        Motor() : a(1),b(2){
        }
        void getData();
        void printData();
        void changeSpeed(int speed);
        int max(Motor a);
        void printConstants(){
            cout << a << "  " << b << endl;
        }
};



int main(){
    Motor m1,m2;
    //Membership operator usage
    m1.getData();
    m2.getData();

    //m1.printData();
    //m1.changeSpeed(40);
    //m1.printData();
    //m2.printData();

    cout << endl << "Max of m1 and m2: " << m1.max(m2) <<endl;

    m1.printConstants();
    m2.printConstants();
    return 0;
}

void Motor::getData(){
    cout << "Data for Motor";
    cout << "\nEnter Name for Motor: " << endl;


    cin >> name;
    cout << "Enter Speed: "<< endl;


    cin >> speed;
    cout << "Enter Radius:"<< endl;

    cin >> radius_of_wheel;
}

void Motor::printData(){
    cout << "Motor Parameters: "<<endl;
    cout << "Motor Name: " << ends << name << endl;
    cout << "Motor Speed: " << ends << speed << endl;
    cout << "Wheel's Radius: " << ends << radius_of_wheel << endl;

}

int Motor::noOfRotations(int Dist){
    return Dist/(2*3.14*radius_of_wheel);
}

float Motor::DistanceTravelled(int Time){
    return this->speed*Time;
}

void Motor::changeSpeed(int a){
    //this->speed = speed;
    speed = a;
}


int Motor::max(Motor a){
    return speed > a.speed? speed: speed;
}