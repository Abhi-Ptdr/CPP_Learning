// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   int i = 1;

//   while(i <= n){

//     int j = 1;
//     while(j <= n){
//       cout<<"* ";
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   int i = 1;

//   while(i <= n){

//     int j = 1;
//     while(j <= n){
//       cout << i <<" ";
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     while(j<=n){
//       cout<< n-j+1 <<" " ;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }

// }

// N=3
// 1 2 3
// 4 5 6
// 7 8 9

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   int count = 1;
//   while( i <= n ){

//     int j=1;
//     while(j<=n){
//       cout<< count <<" " ;
//       count++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// N=4
// *
// * *
// * * *
// * * * *

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     while(j<=i){
//       cout <<"* " ;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// n=4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10

// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   int i = 1;
//   int count = 1;
//   while (i <= n) {

//     int j = 1;
//     while (j <= i) {
//       cout << count << " ";
//       count++;
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// n=4
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     int value = i;
//     while(j<=i){
//       cout << value << " ";
//       value++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// // n=4
// // 1
// // 21
// // 321
// // 4321

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     int value = i; 
//     while(j<=i){
//       cout <<value;
//       value--;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// } 

// AAAA
// BBBB
// CCCC
// DDDD

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;  
  
//   while( i <= n ){

//     int j=1;
//     while(j<=n){
//       cout << char('A'+i-1);
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// ABCD
// BCDE
// CDEF
// DEFG

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     int value = i;
//     while(j<=n){
//       cout <<char(64+value) ;
//       value++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// A
// BB
// CCC
// DDDD

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     while(j<=i){
//       cout << char(64+i) ;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// A
// BC
// DEF
// GHIJ

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   int value = 1;
//   while( i <= n ){

//     int j=1;
//     while(j<=i){
//       cout << char(64+value) ;
//       value++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

// D
// CD
// BCD
// ABCD

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     int value = n-i+1;
//     while(j<=i){
//       cout << char(64+value);
//       value++;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

//       * 
//     * * 
//   * * * 
// * * * *

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int space=n-i;
//     while(space>0){
//       cout << "  ";
//       space--;
//     }

//     int j=1;
//     while(j<=i){
//       cout<<"* ";
//       j++;
//     }
    
//     cout<<endl;
//     i++;
//   }
// }

// * * * * 
// * * * 
// * * 
// * 

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
//   while( i <= n ){

//     int j=1;
//     while(j<=n-i+1){
//       cout << "* " ;
//       j++;
//     }
//     cout<<endl;
//     i++;
//   }
// }

//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 

// #include<iostream>
// using namespace std;

// int main(){

//   int n;
//   cin>>n;

//   int i=1;
  
//   while( i <= n ){

//     int space = n-i;
//     while(space>0){
//       cout << "  ";
//       space--;
//     }

//     int j=1;
//     while(j<=i) {
//       cout << j <<" ";
//       j = j+1;
//     }

//     int start = i-1;
//     while(start) {
//       cout << start <<" ";
//       start--;
//     }
    
//     cout << endl;
//     i++;
//   }
// }
