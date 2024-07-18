// FACTORIAL OF N USING RECURSION

/*
#include<iostream>
using namespace std;

int factorial(int n) {
    // base case
    if(n == 0)
        return 1;

    // recurssive relation 
    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main(){
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}
*/


// POWER OF 2


/*

#include<iostream>
using namespace std;

int pow(int n) {
    // base case
    if(n == 0)
        return 1;
    
    // recurssive relation
    int smallerProblem = pow(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}

int main(){
    int n;
    cin >> n;

    int ans = pow(n);

    cout << ans << endl;

    return 0;
}

*/


// PRINT COUNTING


/*
#include<iostream>
using namespace std;

void print(int n) {
    // base case
    if(n == 0)
        return;

    cout << n << endl;

    print(n - 1);

}

int main(){
    int n;
    cin >> n;

    print(n);

    return 0;
}

*/


// SAY DIGITS 412 --> four one two


/*
#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]) {
    // base case
    if (n == 0){
        return;
    }

    int digit = n % 10;

    // cout << arr[digit] << " ";  //tail recusion, it starts writing from decimal place eg. 412 -> two one four

    n = n / 10;

    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main(){
    int n;
    cin >> n;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, arr);

    return 0;
}

*/

// SUM OF ELEMENTS OF AN ARRAY
/*

#include<iostream>
using namespace std;

int getsum(int arr[], int n){

    if(n == 0){
        return 0;
    }

    int remainingPart = getsum(arr+1, n-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main() {

    int arr[5] = {3, 2, 8, -1, 6};

    int ans = getsum(arr, 5);

    cout << ans << endl;
    return 0;
}

*/

// LINEAR SEARCH USING RECURSION

/*
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){

    if(n == 0)
        return false;

    if(arr[0] == key)
        return true;

    return linearSearch(arr+1, n-1, key);
}

int main() {

    int arr[5] = {3, 2, 8, -1, 6};
    int key = 6;

    bool ans = linearSearch(arr, 5, key);

    if(ans)
        cout << "Key is present" << endl;
    else
        cout << "Key is absent" << endl;

    return 0;
}

*/

// BINARY SEARCH USING RECURSION

/*
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e , int k ) {

    //base case

    //element not found
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}
*/


// REVERSING A STRING USING RECURSION


/*
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int s, int e){

    if(s > e){
        return;
    }

    swap(str[s], str[e]);
    
    reverse(str, s+1, e-1);

}

int main() {
    string str = "abcde";

    reverse(str, 0, 4); 

    cout << str << endl;

}

*/


// CHECK PELINDROME

/*

#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int  j) {

    //base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;
    else{
        //Recursive call
        return checkPalindrome(str, i+1,j-1);
    }
}

int main() {

    string name = "BookkooB";   //case sensitive B != b 
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

    if(isPalindrome) {
        cout << "Its a Palindrome " << endl; 
    }
    else {
        cout << "Its not a Palindrome " << endl;
    }


    return 0;
}

*/

// POWER CALCULATION

/*
#include<iostream>
using namespace std;

int power(int a, int b) {
    //base case
    if( b == 0 )
        return 1;

    if(b == 1)
        return a;

    //RECURSIVE CALL
    int ans = power(a, b/2);

    //if b is even
    if(b%2 == 0) {
        return ans * ans;
    }
    else {
        //if b is odd
        return a * ans * ans;
    }
}

int main() {

    int a,b;
    cin >> a >> b;
    cout << endl;
    int ans = power(a,b);

    cout << "Answer is " << ans << endl;

    return 0;
}

*/

// BUBBLE SORT USING RECURSION

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    
    if(n<1){
        return;
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

int main() {

    int arr[6] = {5, 7, 2, 9, 1, 3};

    bubbleSort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}