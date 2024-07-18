// // CHAPTER 6 OF CODING NINJA STUDIO

// // Q.1 COMPLEX NUMBER

// #include <bits/stdc++.h> 
// #include<iostream>
// using namespace std;

// class ComplexNumbers {

//     public:
//     int realPart;
//     int imaginaryPart;

//     // constructor

//     ComplexNumbers(int realPart, int imaginaryPart){
//         this -> realPart = realPart;
//         this -> imaginaryPart = imaginaryPart;
//     }

//     void plus(ComplexNumbers C){
//         this -> realPart += C.realPart;
//         this -> imaginaryPart += C.imaginaryPart;
//     }

//     void multiply(ComplexNumbers a){
//         int temp=this->realPart;
//         this->realPart=this->realPart*a.realPart - this->imaginaryPart*a.imaginaryPart;
//         this->imaginaryPart=temp*a.imaginaryPart+a.realPart*this->imaginaryPart;
//     }

//     void print(){
//         cout <<realPart << " + i"<<imaginaryPart; 
//     }


// };

// int main() {
//     int real1, imaginary1, real2, imaginary2;

//     cin >> real1 >> imaginary1;
//     cin >> real2 >> imaginary2;

//     ComplexNumbers c1(real1, imaginary1);
//     ComplexNumbers c2(real2, imaginary2);

//     int choice;
//     cin >> choice;

//     if (choice == 1) {
//         c1.plus(c2);
//         c1.print();
//     } else if (choice == 2) {
//         c1.multiply(c2);
//         c1.print();
//     } else {
//         return 0;
//     }

// }


#include <bits/stdc++.h> 
#include<iostream>
#include<algorithm>
using namespace std;

class Fraction {

    public:
    int Numerator;
    int Denominator;

    Fraction(int nume, int deno){
        this->Numerator = nume;
        this->Denominator = deno;
    }

    int gcd(int p, int q){
        if (p == 0)
            return q;
        return gcd(q%p, p);
    }

    void simplify(int a, int b){
        a = a/gcd(a,b);
        b = b/gcd(a,b);

        cout << a << "/" << b << endl;
    }

    void print (int n, int d){

        cout << n << "/" << d << endl;
    }

    void add(Fraction F2){
        int n1 = this->Numerator;
        int d1 = this->Denominator;
        int n2 = F2.Numerator;
        int d2 = F2.Denominator;

        // now n1/d1 + n2/d2

        int d3 = (d1*d2)/(gcd(d1, d2));

        int temp1 = n1*(d3/d1);
        int temp2 = n2*(d3/d2);

        int n3 = temp1 + temp2;

        simplify(n3, d3);

        n1 = n3;
        d1 = d3;

        print(n1,d1);
        print(n2,d2);
        
    }

    void multiply(Fraction F2){
        int n1 = this->Numerator;
        int d1 = this->Denominator;
        int n2 = F2.Numerator;
        int d2 = F2.Denominator;

        // now n1/d1 * n2/d2

        int n3 = n1 * n2;
        int d3 = d1 * d2;        

        simplify(n3, d3);

        n1 = n3;
        d1 = d3;

        print(n1,d1);
        print(n2,d2);
    }

};

int main() {

    //Write your code here
    int N1, D1;
    cin >> N1 >> D1;

    Fraction f1(N1, D1);

    int cnt, query;
    cin >> cnt;

    for(int i = 1; i<= cnt; i++){
        cin >> query;

        int N2, D2;
        cin >> N2 >> D2;

        Fraction f2(N2, D2);

        if(query == 1){
            f1.add(f2);
        }
        else if(query == 2){
            f1.multiply(f2);
        }
    }
    
    return 0;
}