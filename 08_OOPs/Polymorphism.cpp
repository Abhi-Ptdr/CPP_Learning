#include <iostream>
using namespace std;

class B {
    
    public:
    int a;
    int b;

    public:
    int add() {
        return a+b;
    }

    //want to overload + operator
    void operator+ (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }

    //if we overload * operator
    void operator* (B &obj) {
        cout << "Hello Babbar " << endl;
    }

    //if we overload () operator
    void operator= (B &obj) {
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2/value1 << endl;
    }
};

int main(){

    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;  //this + oprator subtract this two no. 7-4=3 so o/p=3

    obj1 * obj2;    //this * operator used to print Hello babbar

    obj1 = obj2;    //this = operator used to devide the two no.

    return 0;
}