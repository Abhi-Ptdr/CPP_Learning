// // BINARY SEARCH

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){

//   int start = 0;
//   int end = size-1;

//   while(start<=end){
//     int mid = (start+end)/2;
//     if(arr[mid] == key){
//       return mid;
//     }
//     else if(arr[mid] < key){
//       start = mid+1;
//     }
//     else{
//       end = mid - 1;
//     }
//   }
//   return -1; //if not found (condition)
// }

// int main(){

//   int even[6] = {2, 4, 6, 8, 12, 18}; //input must be sorted array
//   int odd[5] = {3, 8, 11, 14, 16};

//   int index1 = binarySearch(even, 6, 20);
//   cout<<"Index of 12 is "<< index1 <<endl;
  
//   int index2 = binarySearch(odd, 5, 16);
//   cout<<"Index of 3 is "<< index2 <<endl;

//   return 0;
// }

// 1st and last occurrence of an element in sorted array

// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

// #include <iostream>
// using namespace std;

// int firstOcc(int arr[], int size, int key){

//   int start = 0;
//   int end = size-1;
//   int ans = -1;        //gonna store index so defalt -1

//   while(start<=end){
    
//     int mid = (start+end)/2;
    
//     if(arr[mid] == key){
//       ans = mid;
//       end = mid - 1;
//     }
//     else if(arr[mid] < key){
//       start = mid+1;      //right vale part me jao
//     }
//     else{
//       end = mid - 1;      //left vale part me jao
//     }
//   }
//   return ans;
// }

// int lastOcc(int arr[], int size, int key){

//   int start = 0;
//   int end = size-1;
//   int ans = -1;     

//   while(start<=end){
    
//     int mid = (start+end)/2;
    
//     if(arr[mid] == key){
//       ans = mid;
//       start = mid + 1;
//     }
//     else if(arr[mid] < key){
//       start = mid+1;      
//     }
//     else{
//       end = mid - 1; 
//     }
//   }
//   return ans;
// }

// int main(){

//   int odd[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};

//   int index1 = firstOcc(odd, 11, 3);
//   cout<<"First Occurrence of 3 is at Index " << index1 <<endl;

//   int index2 = lastOcc(odd, 11, 3);
//   cout<<"last Occurrence of 3 is at Index " << index2 <<endl;
  
//   return 0;
// }


// PIVOT ELEMENT IN AN ARRAY

// #include <iostream>
// using namespace std;

// int pivot(int arr[], int size){

//   int s = 0;
//   int e = size-1;

//   while(s<e){
    
//     int mid = s+(e-s)/2;
    
//     if(arr[mid] >= arr[0]){
//       s = mid + 1;
//     }
//     else{
//       e = mid;
//     }
//   }
//   return s;
// }

// int main(){

//   int odd[5] = {3, 7, 9, 1, 2};

//   int index = pivot(odd, 5);
//   cout<<"Pivot element is at Index " << index <<endl;
  
//   return 0;
// }


// SEARCH IN A ROTATED SORTED ARRAY

// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

// #include <iostream>
// using namespace std;

// long long int sqrtInteger(int n){
//   int s = 0;
//   int e = n;

//   int ans = -1;
//   while (s<=e){
//     long long int mid = s + (e-s)/2;

//     long long int sq = mid*mid;
//     if(sq > n){
//       e = mid - 1;
//     }
//     else if(sq < n){
//       ans = mid;
//       s = mid + 1;
//     }
//     else{ //i.e. sq == n
//       return mid;
//     }
//   }
//   return ans; 
// }

// double morePrecision(int n, int precision, int tempSol){

//   double factor = 1;
//   double ans = tempSol;
//   for (int i=0; i<precision; i++){
//     factor = factor/10;  //i.e 0.1 next time 0.01 next 0.001 precision times
//     for(double j=ans; j*j<n; j=j+factor){
//       ans = j;
//     }
//   }
//   return ans;
// }

// int main() {
//   int n;
//   cout <<" Enter the number " << endl;
//   cin >> n;

//   int tempSol = sqrtInteger(n);
//   cout << " Answer is " << morePrecision(n, 3, tempSol) << endl;
// }


// PAINTERS PARTITION PROBLEM

// https://www.codingninjas.com/studio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

// bool isPosibleSolution(vector<int> &boards, int k, int mid){
    
//     int painterCount = 1;
//     int individualSum = 0;
//     int size = boards.size();

//     for(int i = 0; i<size; i++){
//         if (individualSum + boards[i] <= mid) {
//             individualSum += boards[i];
//         }
//         else{
//             painterCount++;
//             if(painterCount > k || boards[i] > mid){
//                 return false;
//             }
//             individualSum = boards[i];
//         }
//         if(painterCount > k) {
//             return false;
//         }
//     }
//     return true;
            
// }


// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //    Write your code here.
//     int size = boards.size();
//     int sum = 0;
//     for(int i=0; i<size; i++){
//         sum += boards[i];
//     }
//     int s=0;
//     int e=sum;
//     int mid = s+(e-s)/2;
//     int ans = -1;

//     while(s<=e){
//         if(isPosibleSolution(boards, k, mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }

//         mid = s+(e-s)/2;   
//     }
//     return ans;
// }

// AGGRESSIVE COWS


// int Maximum(vector<int> &stalls){
//     int maxi = INT_MIN;
//     int size = stalls.size();
//     for(int i=0; i<size; i++){
//         if(stalls[i] > maxi){
//             maxi = stalls[i];
//         }
//     }
//     return maxi;
// }

// int Minimum(vector<int> &stalls){
//     int mini = INT_MAX;
//     int size = stalls.size();
//     for(int i=0; i<size; i++){
//         if(stalls[i] < mini){
//             mini = stalls[i];
//         }
//     }
//     return mini;
// }

// bool isPosibleSolution(vector<int> &stalls, int k, int mid){

//     int cowCount = 1;
//     int lastPos = stall[0];

//     for(int i = 0; i<stalls.size(), i++) {
//         if(stalls[i]- lastPos >= mid){
//             cowCount++;
//             if(cowCount == k){
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //    Write your code here.
//     sort(stalls.begin(), stalls.end());  //to sort the fiven arr or vector

//     int s = 0;
//     int e = maximum(stalls) - miniimum(stalls);

//     int mid = s + (e-s)/2;
//     int ans = -1;

//     while(s<=e){
//         if(isPosibleSolution(stalls, k, mid)){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
        
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// #include<iostream>
// using namespace std;
// int maxEvenSum(int n, vector<int> a) {

//     for(int i=n-1; i>0; i--){
//         int iseven = a[i]%2;
        
//         if(iseven == 0){
//             for(int j = i-1; j>0; j--){
//                 for(int k = i-1; k>0; k--){
//                     if(a[j]+a[k] ==a[i]){
//                         return a[i];
//                     }
//                 }
//             }
            
//         }
        
//     }
//     return -1;
// }