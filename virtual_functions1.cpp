#include <bits/stdc++.h>
using namespace std;

class Base{
public:
	void fun1(){
		cout << "base 1" << endl;
	}
	virtual void fun2(){
		cout << "base 2\n";
	}
	virtual void fun3(){
		cout << "base 3\n";
	}
	virtual void fun4(){
		cout << "base 4\n";
	}
};

class Derived : public Base{
public:
	void fun1(){
		cout <<  " derived 1\n";
	}
	void fun2(){
		cout << " derived 2\n";
	}
	void fun4(int x){
		cout << "derived 4\n";
	}
};

int main(){

	Base* base;
	Derived derived;

	base = &derived;

	base->fun1(); // base 1
	base->fun2(); // dericed 2

	base->fun3(); // base 3
	base->fun4(); // base 4
	// base->fun4(10); // error as pointer is of base type and function is of dericed type
}
