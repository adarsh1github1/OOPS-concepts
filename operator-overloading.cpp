#include <iostream>
using namespace std;
class enemy{
    public:
    virtual void power(){};
};
class ninja: public enemy{
    public:
    void power(){
        cout<<"Ninja attack with power \n";
    }
};
class monster: public enemy{
    public:
    void power(){
        cout<<"Monster kills with power ";
    }
};

int main(){
    ninja n;
    monster m;
    enemy *e1 = &n;
    enemy *e2 = &m;
    e1->power();
    e2->power();
    return 0;
}