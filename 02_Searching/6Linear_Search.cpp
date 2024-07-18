// LNEAR SEARCH IN AN ARRAY

// #include<iostream>
// using namespace std;

// bool search(int arr[], int size, int key){

//   for(int i=0; i<size; i++){
//     if(arr[i] == key){
//       return 1;
//     }
//   }
//   return 0;
// }

// int main(){

//   int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

//   cout<<"Enter the element you want to search" <<endl;
//   int key;
//   cin >> key;

//   bool found = search(arr, 10, key);

//   if(found){
//     cout<<"Yes "<< key << " is there "<<endl;
//   }else{
//     cout<<"No "<< key << " is not present "<<endl;
//   }
// }


// REVERSING OF AN ARRAY

// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size) {

//   for(int i=0; i<size; i++){
//     cout << arr[i] << " ";
//   }
//   cout << endl << "printing DONE" << endl;
// }

// void reverse(int arr[], int n){

//   int start = 0;
//   int end = n-1;

//   while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
//   }
// }

// int main(){

//   int arr[6] = {1,4,0,5,-2,15};
//   int brr[5] = {2,6,3,9,4};

//   reverse(arr,6);
//   reverse(brr,5);

//   printArray(arr,6);
//   printArray(brr,5);
// }


// SWAP ALTERNATES

// #include<iostream>
// using namespace std;

// void swapAlternate(int arr[], int size){
//   for (int i=0; i<size; i+=2){
//     if(i+1<size){
//       swap(arr[i], arr[i+1]);
//     }
//   }
//   cout<<"swaping Done"<<endl;
// }

// void printArray(int arr[], int size){
//   for(int i=0; i<size; i++){
//     cout<< arr[i] << " ";
//   }
//   cout<<"Printing Done"<<endl;
// }

// int main(){

//   int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
//   int odd[5] = {2,6,3,9,4};

//   swapAlternate(even,8);
//   printArray(even,8);
  
//   swapAlternate(odd,5);
//   printArray(odd,5);

//   return 0;
// }


// CODING NINJAS STUDIO

// https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

// #include<iostream>
// using namespace std;

// int findUnique(int arr[], int size){
//   int ans = 0;
//   for (int i=0; i<size; i++){
//     ans = ans^arr[i];
//   }
//   return ans;
// }

// void printArray(int arr[], int size){
//   for(int i=0; i<size; i++){
//     cout<< arr[i] << " ";
//   }
//   cout<<"Printing Done"<<endl;
// }

// int main(){

//   int arr[7] = {5, 2, 9, 2, 5, 9, 1};
//   int brr[5] = {6,6,3,9, 3};

//   int unique = findUnique(arr,7);
//   cout << unique << endl;
  
//   int unique2 = findUnique(brr,5);
//   cout << unique2 << endl;
  

//   return 0;
// }


// Intersection Of Two Sorted Arrays

// // https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.

// 	vector<int> ans;  //ie how to create a vector
// 	for(int i=0; i<n; i++){
// 		int element = arr1[i];

// 		for(int j=0; j<m; j++){
// 			if(element == arr2[j]) {
// 				ans.push_back(element); //to push elements in the vector
// 				arr2[j] = INT_MIN;
// 				break;
// 			}
// 		}
// 	}
// 	return ans;
// }


// Intersection Of Two Sorted Arrays

// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.

// 	int i=0, j=0;
// 	vector<int> ans;
// 	while(i<n && j<m) {
// 		if(arr1[i]==arr2[j]) {
// 			ans.push_back(arr1[i]);
// 			i++;
// 			j++;
// 		}
// 		else if (arr1[i] < arr2[j]) {
// 			i++;
// 		}
// 		else{
// 			j++;
// 		}
// 	}
// 	return ans;
// } 

// #include<iostream>
// using namespace std;

// int main(){
//   int a = 5;
//   int b = 0;
//   int ans = a/b;
//   cout<<ans<<endl;
// }


// SORT 0 AND 1;  

// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size){
//   for(int i = 0; i<size; i++){
//     cout << arr[i] << " "; 
//   }
//   cout << endl;
// }

// void sortOne(int arr[], int n){

//   int i=0, j=n-1;
  
//   while(i < j){
    
//     while(arr[i] == 0 && i<j){
//       i++;
//     }
    
//     while(arr[j] == 1 && i<j){
//       j--;
//     }

//     // ab agar yha pahuch gye ho, iska mtlb
//     // arr[i]==1 and arr[j]==0;
    
//     if(i<j){
//       swap(arr[i],arr[j]);
//       i++;
//       j--;
//     }
//   }
// }

// int main(){

//   int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};

//   sortOne(arr, 8);
//   printArray(arr, 8);
// }