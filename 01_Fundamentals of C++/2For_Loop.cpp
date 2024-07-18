// FIBONACCI SERIES

#include <iostream>
using namespace std;

int main() {

  int n;
  cout<<"Enter a NO.." <<endl;
  cin>>n;
  int a = 0;
  int b = 1;

  cout << a << " " << b << " ";
  
  for(int i=1; i<n ; i++){

    int nextNo = a+b;
    cout<<nextNo<<" ";

    a = b;
    b = nextNo; 
  }
}

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;
//   int div=2;

//   for (int i=2; i<n; i++){
//     if(n%i==0){
//       cout << n <<" is not Prime!" << endl;
//       break;
//     }else{
//       cout << n <<" is Prime" << endl;
//       break;
//     }
//   }
// }

// PRIME NO.

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;
//   int div=2;
//   bool isPrime = 1;
  
//   for (int i=2; i<n; i++){
//     if(n%i==0){
//       isPrime = 0;
//       break;
//     }
//   }
//   if(isPrime){
//     cout << n <<" is Prime" << endl;
//   }else{
//     cout << n <<" is not Prime!" << endl;
//   }
// }


// DECIMAL TO BINARY

// #include <iostream>
// #include<math.h>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int ans = 0;
//   int i = 0;
  
//   while(n!=0){

//     int bit = n&1;

//     ans = (bit * pow(10,i) ) + ans;

//     n = n >> 1;
//     i++;
//   }
//   cout << "Answer is "<< ans << endl;
// }

// BINARY TO DECIMAL

// #include <iostream>
// #include<math.h>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int ans = 0;
//   int i = 0;
  
//   while(n!=0){

//     int bit = n%10;

//     if (bit == 1){
//       ans = ans + pow(2,i);
//     } 
//       n = n / 10;
//       i++;
//   }
//   cout << "Answer is "<< ans << endl;
// }

