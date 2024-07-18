// CREATING 2D ARRAY OF n*n
/*
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    // creating a 2D array

    int** arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    } 

    // Taking i/p
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // printing o/ps
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    return 0;

} */

// CREATING 2D ARRAY OF m*n

#include<iostream>
using namespace std;

int main(){

    int m;
    cin >> m;

    int n;
    cin >> n;

    // creating a 2D array

    int** arr = new int*[m];
    for(int i = 0; i < m; i++){
        arr[i] = new int[n];
    } 

    // Taking i/p
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // printing o/ps
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    // RELEASING MEMORY
    for(int i=0; i<m; i++){
        delete [] arr[i];
    }
    delete []arr;



return 0;

}