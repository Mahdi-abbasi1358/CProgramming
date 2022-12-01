//polymorhism- slide 8
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
    A *pa,a(1);
    B *pb, b(2,3);
    pa= &a;
    pb= &b;
    cout << "pa->x ="<< pa->getx() << endl;
    cout << "pb.x ="<< pb->getx() << endl;
    cout << "pb.y ="<< pb->gety() << endl;
    pa=pb;
    cout << "after upcast,pb->x ="<< pa->getx() << endl;
    cout << "after upcast,pb->y ="<< pa->gety() << endl;
    return 0;
}