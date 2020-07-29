#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int* a = NULL;
    int n;
    cin >> n;
    a = new int[n];
    for (int i=0; i<n; i++) {
        a[i] = i;
    }

    cout << "\n Printing Array Elements" << endl;
    for (int i=0; i<n; i++) {
        cout << a[i] << " | ";
    }
    delete [] a;
    a = NULL;
return 0;
}