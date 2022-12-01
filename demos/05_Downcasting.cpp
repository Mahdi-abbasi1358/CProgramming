//ploymorphism- Demo 4
#include <cstdlib>
#include <iostream>
using namespace std;
class A {
    public: 
        A(int x_) { x= x_;}
        int getx() { return x;}
    protected:
        int x;
};
class B: public A {
    public: 
        B(int x_, int y_):A(x_){ y= y_;}
        int gety() { return y;}
    protected:
        int y;
    
};
int main(){
    A a(1);
    B b(2,3);
    cout << "a.x ="<< a.getx() << endl;
    cout << "b.x ="<< b.getx() << endl;
    cout << "b.y ="<< b.gety() << endl;
    b=a;
    cout << "after downcast, b.x ="<< b.getx() << endl;
    cout << "after downcast, b.y ="<< b.gety() << endl;
    return 0;
}