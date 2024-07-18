#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node() {
        int value = this->data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail,int element, int d) {
    //assuming that the elemnt is present in the list

    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node* &tail, int value){

    //if empty list
    if(tail == NULL){
        cout << "Lsit is empty pls check again " << endl;
        return;
    }
    else{
        //Non empty list
        //assuming the value is present in the list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1 Node link list
        if(curr == prev){
            tail = NULL;
        }

        //>=2 Nodes
        else if(tail == curr) {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &tail){

    Node *temp = tail;

    //empty list
    if(tail == NULL){
        cout << "List is Empty " << endl;
        return;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;

    } while(tail != temp);
        cout << endl;
}

int main() {

    //created a new node
    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    // insertNode(tail, 3, 4);
    // print(tail);

    // insertNode(tail, 7, 8);
    // print(tail);

    deleteNode(tail, 5);
    print(tail);

    return 0;
}