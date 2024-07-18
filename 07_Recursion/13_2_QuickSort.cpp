
// Q u i c k   S o r t

#include<iostream>
using namespace std;

int partition(int *arr, int s, int e){
    
    int pivot = arr[s];

    //count ele less then pivot
    int cnt = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);

    //tackle lefft and right part
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e){
    
    //base case
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    //left part quick sort
    quickSort(arr, s, p-1);

    //right part quick sort
    quickSort(arr, p+1, e);
}


int main() {

    int arr[13] = {3,5,1,8,2,4,7,9,9,1,2,2,6};
    int n = 13;

    quickSort(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}