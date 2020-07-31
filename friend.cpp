#include <iostream>
using namespace std;
class B;

class A {
public:
	void show(B x);
};

class B {
private:
	int b;

public:
	B() { b = 45; }
	friend void A::show(B x); // Friend function
};

void A::show(B x)
{

	cout << x.b << endl;
}

int main()
{
	A a;
	B x;
	a.show(x);
	return 0;
}
