// #include <iostream>
// using namespace std;

// int main() {
//     // creating 2d array
//     int arr[3][4];


//     // Taking Input -> Row wise

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cin >> arr[i][j];
    //     }
    // }

//     // Taking Input -> column wise

//     for(int j=0; j<4; j++){
//         for(int i=0; i<3; i++){
//             cin >> arr[i][j];
//         }
//     }


//     // Printing Output -> Row wise

//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }



// LINEAR SEARCH IN 2D ARRAY

// #include <iostream>
// using namespace std;

// bool isPresent(int arr[][4], int target, int row, int col) {
//     // arr[][] we need to specify the column size when passing a2D array as a parameter;
    
//     for(int i=0; i<3; i++){
//         for(int j=0; j<4; j++){
//             if(arr[i][j] == target){
//                 return 1;
//             }
//         }
//     }
//     return 0;
//     // same as linear search complexity O(n^2)
// }

// int main() {
    
    // int arr[3][4];
    // cout << "Give a Input array " << endl;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cin >> arr[i][j];
    //     }
    // }

//     cout << "Enter the element to search " << endl;
//     int target;
//     cin >> target;

//     if ( isPresent(arr, target, 3, 4)) {
//         cout << "Element Found " << endl;
//     }
//     else {
//         cout << "Not found" << endl;
//     }
// }



// ROW WISE SUM OF AN 2D ARRAY

// #include <iostream>
// using namespace std;

// // to print row wise sum
// void printSum(int arr[][3], int row, int col){
//     cout << "Printing the sum" << endl;
//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             sum += arr[i][j];
//         }
//         cout << sum << " ";
//     }
// }

// int main() {

//     int arr[3][3];
//     cout << "Give a Input array of 9 element" << endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin >> arr[i][j];
//         }
//     }

//     printSum(arr, 3, 3);

// }


// COLUMN WISE SUM OF AN 2D ARRAY

// #include <iostream>
// using namespace std;

// // to print column wise sum
// void printSum(int arr[][3], int row, int col){
//     cout << "Printing the sum" << endl;
//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             sum += arr[j][i];
//         }
//         cout << sum << " ";
//     }
// }

// int main() {

//     int arr[3][3];
//     cout << "Give a Input array of 9 element" << endl;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin >> arr[i][j];
//         }
//     }

//     printSum(arr, 3, 3);

// }


// LARGEST ROW SUM AND THE ROW INDEX OF AN 2D ARRAY

// #include <iostream>
// using namespace std;

// // to print row wise sum
// int largestRowSum(int arr[][3], int row, int col){

//     int maxi = INT_FAST16_MIN;
//     int rowIndex = -1;

//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             sum += arr[i][j];
//         }
        
//         if(sum > maxi){
//             maxi = sum;
//             rowIndex = i;
//         }
//     }
//     cout << "The maximum sum is " << maxi << endl;
//     return rowIndex;
// }

// int main() {

//     int arr[3][3];
//     cout << "Give a Input array of 9 element" << endl;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin >> arr[i][j];
    //     }
    // }

//     int ansIndex = largestRowSum(arr, 3, 3);
//     cout << "The max row is at index " << ansIndex << endl;

// }

#include <iostream>
using namespace std;

int gcd(int a, int b){

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b){
        if( a > b ){
            b = a - b;
        }
        else{
            a = b - a;
        }
    }
    return a;  //we can return anyone of a or b when a=b becoz gcd(a,a) = a = gcd(b,b) = b;
}

int main() {
    
    int a, b;
    cout << "Enter the values of a and b " << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << "The gcd of " << a << " and " << b << " is: " << ans << endl;

    return 0;
}