// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size) {

//   for(int i=0; i<size; i++){
//     cout << arr[i] << " ";
//   }
//   cout << endl << "printing DONE" << endl;
// }

// int main(){

//   int second[3] = {5,7,11};
//   cout << second[2] << endl;

//   int third[15] = {2,7};
//   printArray(third, 15);

//   int fourth[10] = {0};
//   printArray(fourth, 10);

//   int fifth[10] = {1};
//   printArray(fifth, 10);
  
//   cout << "Everything is fine" << endl << endl;
// }

// #include<iostream>
// using namespace std;

// int getMin(int arr[], int n){
  
//   int mini = 100000;
//   for(int i=0; i<n; i++){

//     mini = min(mini, arr[i]);
//     // if(arr[i] < min){
//     //   min = arr[i];
//     // }
//   }
//   return mini;
// }

// int getMax(int arr[], int n){

//   int maxi = -100000;
//   for(int i=0; i<n; i++){

//     maxi = max(maxi, arr[i]);
//     // if(arr[i] > max){
//     //   max = arr[i];
//     // }
//   }
//   return maxi;
// }

// int main(){

//   int size;
//   cin>>size;
  
//   int num[100];
//   for(int i=0; i<size; i++){
//     cin>>num[i];
//   }
  
//   int maximum = getMax(num, size);
//   int minimum = getMin(num, size);
  
//   cout<< "maximum value is " << maximum << endl;
//   cout<< "minimum value is " << minimum << endl;
// }



// SUM OF ALL THE ELEMENTS OF AN ARRAY

#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;
  
  int arr[100];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int sum = 0;

  for(int i=0; i<n; i++){
    sum = sum + arr[i];
  }
  cout<<"The sum is " << sum << endl;
}