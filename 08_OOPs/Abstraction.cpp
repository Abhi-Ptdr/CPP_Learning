// Abstraction means providing only some of the information to the user by hiding its internal implementation details.

// Abstraction is selecting data from a larger pool to show only relevant details of the object to the user.

// Real-life example: When you send an email to someone, you just click send, and you get the success message; what happens when you click send, how data is transmitted over the network to the recipient is hidden from you (because it is irrelevant to you).

#include <iostream>
using namespace std;

class abstraction {    
    private:        
    int a, b;

    public:        
    // method to set values of private members         
    void set(int x, int y) {            
        a = x;            
        b = y;        
    }

    void display() {        
        cout << "a = " << a << endl;        
        cout << "b = " << b << endl;    
    }
};

int main() {

    abstraction obj;    
    obj.set(10, 20);    
    obj.display();

    return 0;
}