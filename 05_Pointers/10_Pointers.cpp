// #include <iostream>
// using namespace std;

// int main() {

//     int num = 5;

//     cout << num << endl;

//     cout << "address of num is " << &num << endl;

//     int *ptr = &num;

//     cout << "Value is " << *ptr << endl;

//     cout << "Addres is " << ptr << endl; // prints address of num

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void print(int *p){
//     cout << *p << endl;
// }

// int main() {

//     int num = 5;
//     int *p = &num;

//     print(p);
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

// /*  int *p = 0;
//     int a = 10;
//     p = &a;
//     cout << *p << endl; 
// */

// /*    int a[4] = {1, 2, 3, 4};
//     int *p = a;
//     cout << *p << endl;
//     *p++;                   //*p = a++ -> ERROR
//     cout << *p << endl;
// */

// }

#include <iostream>
using namespace std;

void swap(char *x, char *y){
    char *t = x;
    x = y;
    y = t;
}

int main() {

    char *x = "abhi";
    char *y = "ptdr";
    char *t;
    swap(x, y);
    cout << x << " " << y << endl;

    t = x;
    x = y;
    y = t;
    cout << x << " " << y << endl;


    return 0;
}