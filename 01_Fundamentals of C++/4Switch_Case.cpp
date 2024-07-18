// CALCULATOR

#include<iostream>
using namespace std;

int main(){

  int a,b;
  
  cout<<"Enter the value of a "<<endl;
  cin >> a;
  
  cout<<"Enter the value of b "<<endl;
  cin >> b;

  char opr;
  cout<<"Enter the operation you want to perform "<<endl;
  cin >> opr;

  switch(opr){
    case '+' : { cout<< (a+b) <<endl; }  //we can use this brackets if we wan t;
      break;

    case '-' : cout<< (a-b) <<endl;
      break;

    case '*' : cout<< (a*b) <<endl;
      break;

    case '/' : cout<< (a/b) <<endl;
      break;

    case '%' : cout<< (a%b) <<endl;
      break;
  }
}

// NO. OF NOTES

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
  
//   cout<<"Enter the total ammount "<<endl;
//   cin >> n;

//   int x,y,z,p;

//   switch(1){
    
//     case 1 : 
//       x = n/100;
//       // n = n - (100*x); i.e.remainder
//       n = n%100;
//       cout<< "The notes of 100 rs. are "<< x <<endl;

//     case 2 : 
//       y = n/50;
//       // n = n - (50*y);
//       n=n%50;
//       cout<< "The notes of 50 rs. are "<< y <<endl;

//     case 3 : 
//       z = n/20;
//       // n = n - (20*z);
//       n=n%20;
//       cout<< "The notes of 20 rs. are "<< z <<endl;

//     case 4 : 
//       p = n/1;
//       // n = n - (1*p);
//       n=n%1;
//       cout<< "The notes of 1 rs. are "<< p <<endl;

//   }
// }

// ODD OR EVEN

// #include<iostream>
// using namespace std;

// // o/p=1  if even
// // o/p=0 if odd

// bool isEven(int n) {
//   if(n&1){
//     return 0;
//   }
//   return 1;
// }

// int main(){

//   int m;
//   cout<<"Enter a no." << endl;
//   cin >> m;
  
//   if(isEven(m)){
//     cout<< m <<" is Even" << endl;
//   }else{
//     cout<< m <<" is Odd" << endl;
//   }  
// }

// nCr

// #include<iostream>
// using namespace std;

// int fact(int num){
//   int factorial=1;
//   for(int i=1; i<=num; i++){
//     factorial = factorial * i;
//   }
//   return factorial;
// }

// int main(){

//   int n,r;
//   cout << "Enter n and r of nCr"<<endl;
//   cin>> n >> r;

//   int nCr >  = fact(n)/(fact(r)*fact(n-r));
//   cout << " nCr of n & r is "<< nCr <<endl;
// }

// PRIME OR NOT

// #include<iostream>
// using namespace std;

// bool isPrime(int num){

//   for(int i=2; i<num; i++){
//     if(num%i==0){
//       return 0;
//     }
//     return 1;
//   }
// }

// int main(){

//   int n;
//   cout<<"Enter a no. to check prime or not "<< endl;
//   cin>>n;
//   bool ans = isPrime(n);
//   if(ans){
//     cout<<"The no. is a Prime No. "<<endl;
//   }else{
//     cout<<"The no. is not a Prime No. "<<endl;
//   }
// }