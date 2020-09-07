#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    virtual void print(){
        cout << "this is base class " << endl;

    }
};

class Derived : public Base{
public:
    void print(){
        cout<< "this is the derived class "<< endl;
    }
};

int main(){
    Base* base;
    Derived derived;
    base = &derived;
    base->print();
    return 0;
}