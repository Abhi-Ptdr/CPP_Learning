#include<iostream>
using namespace std;

int main(){
    cout<<"Hello Guys!"<<endl;
}

// #include <iostream>
// using namespace std;

// int main() {

//   int a, b;

//   cout << "Enter the value of a : " << endl;
//   cin >> a;
//   cout << "Enter the value of b : " << endl;
//   cin >> b;
//   if (a > b) {
//     cout << "The value of a is greater!" << endl;
//   } else {
//     cout << "The value of b is greater!" << endl;
//   }
// }


// #include <iostream>
// using namespace std;

// int main() {
//   char ch;
//   cout << "Enter a character" << endl;
//   cin >> ch;
  
//   int n = ch;

//   // cout << n << endl;

//   if(n >= 48 && n <= 57){
//     cout << "A digit" << endl;
//   }
//   else if(n >= 65 && n <= 90){
//     cout << "UPPERCASE" << endl;
//   }
//   else if(n >= 97 && n <= 122){
//     cout << "lowercase" << endl;
//   }
// }

// // SUM OF ALL EVEN NO. UPTO N

// #include<iostream>
// using namespace std;

// int main() {

//   int n;
//   cout << "Enter a no." << endl;
//   cin >> n;

//   int i = 2;
//   int sum = 0;
//   while(i<=n) {
//     sum = sum + i;
//     i=i+2;
//   }
//   cout << "sum is " << sum <<endl; 
    
// }

// // Prime or not

// #include<iostream>
// using namespace std;

// int main() {

//   int n;
//   cout << "Enter a no. : " <<endl;
//   cin >> n;

//   int div = 2;

//   while(div<n){
//     if(n % div == 0){
//       cout << "Not Prime" << endl;
//       break;
//     }else{
//       cout << "Prime" << endl;
//       break;
//     }
//     div=div+1;
//   }
// }