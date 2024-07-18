#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class kQueue{
    public:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int *next;
        int freeSpot;

        kQueue(int n, int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];
            for(int i=0; i<n; i++){
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];
            for(int i=0; i<n; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;

            arr = new int[n];
            freeSpot = 0;
        }

        void enqueue(int data, int qn){
            //check OverFlow
            if(freeSpot == -1){
                cout << "No free space is available" << endl;
            }

            //find index where we can push
            int index = freeSpot;
            
            //update freespot
            freeSpot = next[index];

            //if pushing 1st ele
            if(front[qn-1] == -1){
                front[qn-1] = index;
            }
            else{
                next[rear[qn-1]] = index;
            }

            //update next
            next[index] = -1;

            //point rear to index
            rear[qn-1] = index;

            //push/insert ele
            arr[index] = data; 
        }

        int dequue(int qn){
            //under flow
            if(front[qn-1] == -1){
                cout << "Queue UnderFlow" << endl;
                return -1;
            }

            //find index to pop
            int index = front[qn-1];

            //front ko aage badao
            front[qn-1] = next[index];

            //free spot ko manage karo
            next[index] = freeSpot;
            freeSpot = index;

            return arr[index];
        }
};


int main(){

    kQueue q(10, 3);

    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequue(1) << endl;
    cout << q.dequue(2) << endl;
    cout << q.dequue(1) << endl;
    cout << q.dequue(1) << endl;

    cout << q.dequue(1) << endl;

    return 0;
}