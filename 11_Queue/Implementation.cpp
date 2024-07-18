#include <bits/stdc++.h> 
class Queue {
public:
    int* arr;
    int Front;
    int Rear;
    int size;

    Queue() {
        size = 100001;
        arr = new int[size];
        Front = 0;
        Rear = 0;
    }

    /*---- Public Functions of Queue -----*/

    bool isEmpty() {
        if(Front == Rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        arr[Rear] = data;
        Rear++;
    }

    int dequeue() {
        if(Front == Rear){
            return -1;
        }
        else{
            int ele = arr[Front];
            arr[Front] = -1;
            Front++;
            if(Front == Rear){
                Front = 0;
                Rear = 0;
            }
            return ele;
        }
    }

    int front() {
        if(Front == Rear){
            return -1;
        }
        else{
            return arr[Front];
        }
    }
};



// Circular Queue


#include <bits/stdc++.h> 
class CircularQueue{
    public:
        int *arr;
        int front;
        int rear;
        int size;
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front == 0 && rear == size-1) || rear == (front-1)%(size)){   //conditions if array is full
            return false;
        }
        else if(front == -1){ //means inserting 1st ele 
            front = 0;
            rear = 0;
        }
        else if((rear == size-1) && front != 0){    //To follow cyclic nature
            rear = 0;
        }
        else{
            rear ++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){    //Means empty Queue
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){     //Single ele in the queue
            front = rear = -1;   
        }
        else if(front == size-1){   //To follow cyclic nature
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }
};




//DOUBLY ENDED QUEUE DEQUE.



#include <bits/stdc++.h> 
class Deque
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if((front == 0 && rear == size-1) || rear == (front-1)%(size)){   //conditions if array is full
            return false;
        }
        else if(front == -1){ //means inserting 1st ele 
            front = 0;
            rear = 0;
        }
        else if(front == 0){    //To follow cyclic nature
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if((front == 0 && rear == size-1) || rear == (front-1)%(size)){   //conditions if array is full
            return false;
        }
        else if(front == -1){ //means inserting 1st ele 
            front = 0;
            rear = 0;
        }
        else if((rear == size-1) && front != 0){    //To follow cyclic nature
            rear = 0;
        }
        else{
            rear ++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(front == -1){    //Means empty Queue
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){     //Single ele in the queue
            front = rear = -1;   
        }
        else if(front == size-1){   //To follow cyclic nature
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(front == -1){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size - 1;
        }
        else{
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(front == -1){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(front == -1){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1){
            return true;
        }
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front == 0 && rear == size-1) || rear == (front-1)%(size)){ 
            return true;
        }
        return false;
    }
};