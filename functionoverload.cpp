
#include<iostream>
#include<string.h>
using namespace std;

int sum(int a, int b){
    cout << "1st" << endl;
    return a+b;
}

float sum(float a, float b){
    cout << "2nd" << endl;
    return a+b;
}

float sum(double a, double b){
    cout << "3rd" << endl;
    return a+b;
}

/*
    Notice that the return types of all these 3 functions are not the same. 
    Overloaded functions may or may not have different return types 
    but they must have different arguments.
*/
int main(){
    cout << sum(4,5) << endl;
    cout << sum(2.4f, 2.1f) << endl;
    cout << sum(3.123,23.24) << endl;
}







/*
#include<iostream>
using namespace std;
int function() {
    return 10;
}
char function() {  // compiler error; new declaration of foo() 
    return 'a';
}

int main()
{
    char ch = function();

    return 0;
}

*/