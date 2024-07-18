// // Virtual Function 

// #include <iostream>
// using namespace std;
// class Base {   
//     public:    
//     virtual void print() {        
//         cout << "Base Function" << endl;    
//         }
//     };
    
//     class Derived : public Base {   
//         public:    
//         void print() {        
//             cout << "Derived Function" << endl;    
//         }
//     };
        
// int main() {

//     Derived derived1;

//     // pointer of Base type that points to derived1    
//     Base* base1 = &derived1;

//     // calls member function of Derived class    
//     base1->print();    
//     return 0;

//     // Output: Derived Function

// }


// // Pure Virtual Function or ABSTRACT FUNCTION

// class A {   
//     public:      
//     virtual void s() = 0;  // Pure Virtual Function
// };


// // ABSTRACT CLASS

// #include<iostream>
// using namespace std;
// class Base {   
//     public:      
//     virtual void s() = 0; // Pure Virtual Function
// };

// class Derived: public Base {   
//     public:
//     void s() {         
//         cout << "Virtual Function in Derived_class";      
//     }
// };

// int main() {   
//     Base *b;   
//     Derived d_obj;   
//     b = &d_obj;   
//     b->s();
// }
//     // OutputVirtual Function in Derived_class





// FRIEND FUNCTION

// class class_name {    
//     friend data_type function_name(argument); // syntax of friend function.  
// };


#include <iostream>
using namespace std;
class Rectangle {    
    private:        
    int length;    
    
    public:        
    Rectangle() {            
        length = 10;        
    }    
    
    friend int printLength(Rectangle); //friend function    
};

int printLength(Rectangle b) {    
    b.length += 10;    
    return b.length;
}

int main() {    
    Rectangle b;    
    cout << "Length of Rectangle: " << printLength(b) << endl;    
    return 0;
}
    // Output:Length of Rectangle: 20 