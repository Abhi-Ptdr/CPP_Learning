#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  char ch[10] = "Babbar";
  char ch1[10] = "Bab\0bar";
  char ch2[10] = {'a', 'b', 'c', 'd', 'e'};
  char ch3[10] = {'a', 'b', '\0', 'd', 'e'};
  string str = "Love";
  string str1 = "Lo\0ve";

  cout<<strlen(ch)<<endl;
  cout<<strlen(ch2)<<endl;
//   cout<<ch.length()<<endl;  WRONG 
  cout<<str.length()<<endl;

//   cout<<ch<<endl;   // Babbar
//   cout<<ch1<<endl;  // Bab
//   cout<<ch2<<endl;  // abcde
//   cout<<ch3<<endl;  // ab
//   cout<<str<<endl;  // Love
//   cout<<str1<<endl; // Lo  

//   cout<<ch[5]<<endl;    // r
//   cout<<ch1[2]<<endl;   // b
//   cout<<ch1[5]<<endl;   // a
//   cout<<ch2[4]<<endl;   // e
//   cout<<ch3[4]<<endl;   // e
//   cout<<ch3[2]<<endl;   //      => empty means NULL
//   cout<<str[2]<<endl;   // v
//   cout<<str1[2]<<endl;  //      => empty means NULL
//   cout<<str1[3]<<endl;  //      => empty means NULL

  return 0;
}