#include<iostream>
#include<string.h>
using namespace std;

int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int a, int b){
    return a + b;
}

int sum(int a){
    return a;
}

int main(){
    cout << sum(2) << endl;
    cout << sum(2,3) << endl;
    cout << sum(4,5,6) << endl;
}
