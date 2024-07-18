#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        //properties
        int *arr;
        int top;
        int size;

        //Constructor OR behaviour
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout << "stack OverFlow" << endl;
            }
        }

        void pop(){
            if(top > -1){
                top--;
            }
            else{
                cout << "stack UnderFlow" << endl;
            }
        }

        int peek(){
            if(top > -1)
                return arr[top];
            else{
                cout << "stack is empty" << endl;
                return -1;
            }
        }

        bool isEmpty(){
            if (top == -1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout<< st.peek() << endl;

    st.pop();
    cout<< st.peek() << endl;

    st.pop();
    cout<< st.peek() << endl;

    st.pop();
    cout<< st.peek() << endl;

    st.push(12);
    st.push(23);
    st.push(34);
    st.push(45);
    st.push(56);
    st.push(67); //stack is o f size 5 we are inserting 6th element => stack overflow
}


// class CustomStack {
//     int size;
//     vector<int> arr;
// public:
//     CustomStack(int maxSize) {
//        this->size = maxSize;
//     }
    
//     void push(int x) {
//         if(arr.size() < size)
//             arr.push_back(x);
//     }
    
//     int pop() {
//         if(arr.size() == 0)
//             return -1;
//         else{
//             int top = arr.back();
//             arr.pop_back();
//             return top;
//         }
//     }
    
//     void increment(int k, int val) {
//         for(int i=0; i<k && i<arr.size(); i++){
//             arr[i] += val;
//         }
//     }
// };