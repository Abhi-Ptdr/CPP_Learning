// // INHERITANCE

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Human {
    
//     public:
//     int height;
//     int weight;
//     int age;

//     public:

//     int getAge() {
//         return this->age;
//     }

//     void setWeight(int w){
//         this->weight = w;
//     }

// };

// class Male : public Human {

//     public:
//     string color;

//     void sleep() {
//         cout << "Male Sleeping" << endl;
//     }
// };

// int main(){

//     Male object1;
//     cout << object1.age << endl;
//     cout << object1.weight << endl;
//     cout << object1.height << endl;

//     cout << object1.color << endl;

//     object1.sleep();
//     object1.setWeight(85);
//     cout << object1.weight << endl;  

// }


// // TYPES OF INHERITANCE

// // 1. SINGLE INHERITANCE

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Animal {
    
//     public:
//     int weight;
//     int age;

//     public:
//     void speak() {
//         cout << "Speaking! " << endl;
//     }

// };

// class Dog : public Animal {
//     //we can left empty

// };

// int main(){

//     Dog d;
//     d.speak();

//     return 0;
// }


// // 2. Multi-Level Inheritance

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Animal {
    
//     public:
//     int weight;
//     int age;

//     public:
//     void speak() {
//         cout << "Speaking! " << endl;
//     }

// };

// class Dog : public Animal {
//     //we can left empty

// };

// class GermanShepherd : public Dog {
    

// };

// int main(){

//     GermanShepherd g;
//     g.speak();

//     return 0;
// }


// 3. Multiple Inheritance

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Animal {
    
//     public:
//     int weight;
//     int age;

//     public:
//     void bark() {
//         cout << "Barking! " << endl;
//     }

// };

// class Human {
    
//     public:
//     string color;

//     public:
//     void speak() {
//         cout << "Speaking! " << endl;
//     }
// };

// //multiple inherited class

// class Hybrid : public Animal, public Human {

// };

// int main(){

//     Hybrid obj1;
//     obj1.speak();
//     obj1.bark();

//     return 0;
// }



// // 4. Hierarchical Inheritance

// #include <iostream>
// #include <string.h>
// using namespace std;

// class A {
    
//     public:
//     int weight;
//     int age;

//     public:
//     void bark() {
//         cout << "Barking! " << endl;
//     }

// };

// class B:public A {};
// class C:public A {};

// class D:public B {};
// class E:public B {};
// class F:public B {};

// class G:public C {};
// class H:public C {};

// int main(){

//     A obj1;
//     obj1.bark();

//     B obj2;
//     obj2.bark();

//     C obj3;
//     obj3.bark();

//     E obj4;
//     obj4.bark();

//     H obj5;
//     obj5.bark();
 
//     return 0;
// }



// 4. Hybrid Inheritance

#include <iostream>
#include <string.h>
using namespace std;

class A {
    
    public:
    int weight;
    int age;

    public:
    void bark() {
        cout << "Barking! " << endl;
    }
};

class D {
    
    public:
    int xyz;

    public:
    void pqrs() {
        cout << "PQRS! " << endl;
    }

};

class B:public A {};

// class C : public A {};
// class C : public D {};  //Wrong in this way last inheritence will work only above all showing error

// correct way of doing this is
class C : public A, public D {};


int main(){

    A obj1;
    obj1.bark();

    B obj2;
    obj2.bark();

    C obj3;
    obj3.bark();

    C obj4;
    obj4.pqrs();

    D obj5;
    obj5.pqrs();
 
    return 0;
}