//polymorphism- slide 9
#include <cstdlib>
#include <iostream>
using namespace std;
class A {
    public: 
    void f() {cout << "A::f" << endl;}
};
class B: public A {
    public: 
    void f() {cout << "B::f" << endl;}
};
int main(){
    B b;
    A *pa= &b;
    
    pa->f();
    return 0;
}