// #include <iostream>
// using namespace std;

// class Hero {
//     public:       //access modifier(who can access) below these all entities are public
//     string name;
//     int health;
//     char level; 

//     private:        //only accessed in this class only
//     int power;  
// };                  //semicolon(;) is IMP

// int main(){

//     //creating object
//     Hero Ramesh;

//     cout<< sizeof(Ramesh) <<endl;  //gives total size taken by the object Ramesh

//     //we can access public entities here
//     Ramesh.name =  "Iron Man";
//     Ramesh.health = 70;
//     Ramesh.level = 'A';

//     //we CAN NOT access Private entities here -> WE can use GATTER and SATTER method.
//     Ramesh.power = 140;  

//     return 0;
// }



// GETTER AND SETTER METHOD

// #include <iostream>
// using namespace std;

// class Hero {
//     public:
//     string name;
//     int health;
//     char level; 

//     private:        //only accessed in this class only
//     int power;

//     public:
//     int getPower() {
//         return power;
//     }

//     int setPower(int p) {
//         power = p;
//     }
// };

// int main(){

//     Hero Ramesh;

//     // Ramesh.power = 140;   //cant access directly

//     //now we can access using getPower
//     Ramesh.getPower();

//     //and we can modify using setPower
//     Ramesh.setPower(140);

//     cout << Ramesh.getPower() << endl; //gives 140 output
//     return 0;
// }


// // CONSTRUCTOR

// #include <iostream>
// using namespace std;

// class Hero {
//     public:
//     int health;
//     char level; 

//     private:
//     int power;

//     public:
//     //constructor created manually
//     Hero() {
//         cout << "Constructor Called" << endl;
//     } 
//     //the default cunstructor that created automatically will no longer exist
// };

// int main(){

//     //obj created statically
//     Hero Ramesh;

//     //obj created dinamically
//     Hero *h = new Hero;
// }

// // PARAMETERISED CONSTRUCTOR AND THIS KEYWORD

// #include <iostream>
// using namespace std;

// class Hero {
//     public:
//     int health;
//     char level; 

//     void print() {
//         cout << health << endl;
//         cout << level << endl;
//     }

//     public:
//     //parameterised constructor
//     Hero(int health) {
//         // health = health;
//         this -> health = health;
//         cout << "Constructor Called" << endl;
//     } 
//     //the default cunstructor that created automatically will no longer exist

//     Hero(int health, char level){
//         this -> health = health;
//         this -> level = level;
//     }
// };

// int main(){

//     //obj created statically
//     Hero Ramesh(10);
//     Ramesh.print();

//     //obj created dinamically
//     Hero *h = new Hero(70);
//     h -> print();

//     Hero temp(22, 'B');
//     temp.print();
   
// }


// COPY CONSTRUCTOR

#include <iostream>
using namespace std;

class Hero {
    public:
    int health;
    char level;

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    //we can create copy constructor manually and the default one deleted automaticslly
    Hero(Hero& temp) {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print() {
        cout << health << endl;
        cout << level << endl;
    }
};

int main(){

    Hero suresh(70, 'C');
    suresh.print();

    //Copy obj suresh to ritesh
    Hero ritesh(suresh);    //copy constructor is called by default
    ritesh.print();

    //which is same as
    ritesh.health = suresh.health;
    ritesh.level = suresh.level;
    ritesh.print(); 
}


// // SHALLOW COPY

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Hero {
//     private:
//     int health;
    
//     public:
//     char *name;
//     char level;

//     Hero() {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//         //simple constructor is not called because we calling parameterized constructor
//     }

//     Hero(int health, char level){
//         this -> health = health;
//         this -> level = level;
//     }

//     void print() {
//         cout << endl;
//         cout << "[ Name: " << this->name << ", ";
//         cout << "Health: " << this->health << ", ";
//         cout << "Level: " << this->level << " ]";
//         cout << endl << endl;
//     }

//     void setName(char name[]) {
//         strcpy(this -> name, name);
//     }

// };

// int main(){

//     Hero hero1(12, 'D');
//     char name[7] = "Babbar";
//     hero1.setName(name);

//     hero1.print();

//     // uses default copy constructor defalt one is shallow copy

//     Hero hero2(hero1);  //OR Hero hero2 = hero1;
    
//     hero2.print();

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print(); //WE MODIFIED HERO1 ONLY BUT HERO2 MODIFIED ALSO

// }


// // DEEP COPY

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Hero {
//     private:
//     int health;
    
//     public:
//     char *name;
//     char level;

//     Hero(int health, char level){
//         this -> health = health;
//         this -> level = level;
//     }

//     //copy constructor

//     Hero (Hero& temp){

//         char *ch = new char[strlen(temp.name)] + 1;
//         strcpy(ch, temp.name);
//         this->name = ch;

//         cout << "COpy constructor called" << endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     void print() {
//         cout << endl;
//         cout << "[ Name: " << this->name << ", ";
//         cout << "Health: " << this->health << ", ";
//         cout << "Level: " << this->level << " ]";
//         cout << endl << endl;
//     }

//     void setName(char name[]) {
//         strcpy(this -> name, name);
//     }

// };

// int main(){

//     Hero hero1(12, 'D');
//     char name[7] = "Babbar";
//     hero1.setName(name);

//     hero1.print();

//     Hero hero2(hero1);  //Copy constructor called

//     hero2.print();

//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print(); //WE MODIFIED HERO1 ONLY BUT HERO1 is MODIFIED hero2 remains same

// }


// // DESTRUCTOR

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Hero {
//     private:
//     int health;
    
//     public:
//     char *name;
//     char level;

//     Hero() {
//         cout << "Simple constructor called" << endl;
//         name = new char[100];
//     }    

//     //Destructor created manualy, Default one will be deleted automatically
//     ~Hero() {
//         cout << "Destructor called" << endl;
//     }

// };

// int main(){

//     //static
//     Hero a;     //desructor called automatically after this scope

//     //Dynamic
//     Hero *b = new Hero();
//     delete b;       //destructor called manually
    
// }


// // static keyword

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Hero {
//     private:
//     int health;
    
//     public:
//     char *name;
//     char level;
//     static int timeToComplete;

// };

// // Initialize
// int Hero::timeToComplete = 5;

// int main(){

//     //print without creating any object
//     cout << Hero::timeToComplete << endl;

//     //After creating a object
//     Hero a;
//     cout << a.timeToComplete << endl;
//     // it work but it is not recommended coz static member belongs to a class not to a perticular hero.

//     Hero b;
//     b.timeToComplete = 10;
//     cout << a.timeToComplete << endl;
//     cout << b.timeToComplete << endl;
//     //both updated to 10
// }

// static keyword

// #include <iostream>
// #include <string.h>
// using namespace std;

// class Hero {
//     private:
//     int health;
    
//     public:
//     char *name;
//     char level;
//     static int timeToComplete;

//     static int fun() {
//         // return this -> health //cant use this keyword in static function shows error
//         // return health  //cant access other data members(properties) other than static shows error
//         // return name   //similarly level shows error
//         return timeToComplete; //this is correct
//     }
// };

// // Initialize static data member
// int Hero::timeToComplete = 5;

// int main(){

//     //call static function without creating any object
//     cout << Hero::fun() << endl;

// }
