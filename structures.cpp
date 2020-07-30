#include<iostream>
#include<string.h>

using namespace std;
struct student
{
    char name[100];
    int roll;
    float marks;
}s1, s2;

int main(){

    strcpy(s1.name,"Acs");
    s1.marks = 23.124;
    s1.roll = 45;
    
    cout << "Enter Data for Second Structure: Name, Roll no, Marks" << endl;
    cin >> s2.name >> s2.marks >> s2.roll;

    cout << "\n\nPrinting Data" << endl;
    cout << "\nStructure 1 : \n" << s1.name << endl << s1.marks << endl << s1.roll;
    cout << "\nStructure 2 : \n" << s2.name << endl << s2.marks << endl << s2.roll;
}