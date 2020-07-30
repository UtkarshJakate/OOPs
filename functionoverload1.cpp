#include<iostream>
#include<string.h>
using namespace std;

int sum(int a = 4, int b = 8, int c = 0){
    return a + b + c;
}

int main(){
    //cout << sum() << endl;
    //cout << sum(2) << endl;
    cout << sum(2,3) << endl;
    cout << sum(4,5,6) << endl;
}
