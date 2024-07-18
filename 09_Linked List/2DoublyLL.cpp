// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     // Constructor
//     Node(int d){
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int getLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp -> next;

//     }
//     return len;

// }

// void insertAtHead(Node* &head, int d){
//     Node* temp = new Node(d);
//     temp->next = head;
//     head->prev = temp;
//     head = temp;
// }

// void insertAtTail(Node* &tail, int d) {
//     Node* temp = new Node(d);
//     tail->next = temp;
//     temp->prev = tail;
//     tail = temp;
// }

// void insertAtPosition(Node* &head, int position, int d, Node* &tail) { 
    
//     //insert at start
//     if(position == 1){
//         insertAtHead(head, d);
//         return;
//     }

//     Node *temp = head;
//     int cnt = 1;

//     while(cnt < position-1) {
//         temp = temp->next;
//         cnt++;
//     }

//     //inserting at last position
//     if(temp -> next == NULL) {
//         insertAtTail(tail, d);
//         return;
//     }

//     //new node creating for d i.e. data
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert->next = temp->next;
//     temp->next->prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
// }

// int main() {
    
//     Node* node1 = new Node(10);
//     Node* head = node1;
//     Node* tail = node1;

//     print(head);
//     cout << getLength(head) << endl;

//     insertAtHead(head, 11);
//     print(head);

//     insertAtHead(head, 13);
//     print(head);

//     insertAtHead(head, 8);
//     print(head);
    
//     insertAtTail(tail, 25);
//     print(head);

//     insertAtPosition(head, 3, 50, tail);
//     print(head);

//     insertAtPosition(head, 1, 42, tail);
//     print(head);

//     insertAtPosition(head, 8, 76, tail);
//     print(head);
    
//     return 0;

// }




// // IF EMPTY LIST IN THE STARTING WE DIDN'T HAD ANY NODE AT THE STARTING


// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     // Constructor
//     Node(int d){
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

// int getLength(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp != NULL){
//         len++;
//         temp = temp -> next;

//     }
//     return len;

// }

// void insertAtHead(Node* &head, Node* &tail, int d){
    
//     if(head == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }else{
//         Node* temp = new Node(d);
//         temp->next = head;
//         head->prev = temp;
//         head = temp;
//     }
// }

// void insertAtTail(Node* &head, Node* &tail, int d) {
    
//     if(tail == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;    
//     }else{
//         Node* temp = new Node(d);
//         tail->next = temp;
//         temp->prev = tail;
//         tail = temp;
//     }
    
// }

// void insertAtPosition(Node* &head, int position, int d, Node* &tail) { 
    
//     //insert at start
//     if(position == 1){
//         insertAtHead(head, tail, d);
//         return;
//     }

//     Node *temp = head;
//     int cnt = 1;

//     while(cnt < position-1) {
//         temp = temp->next;
//         cnt++;
//     }

//     //inserting at last position
//     if(temp -> next == NULL) {
//         insertAtTail(head, tail, d);
//         return;
//     }

//     //new node creating for d i.e. data
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert->next = temp->next;
//     temp->next->prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
// }

// int main() {
    
//     Node* head = NULL;
//     Node* tail = NULL;

    // print(head);
    // cout << getLength(head) << endl;

    // insertAtHead(head, tail, 11);
    // print(head);

    // insertAtHead(head, tail, 13);
    // print(head);

    // insertAtHead(head, tail, 8);
    // print(head);
    
    // insertAtTail(head, tail, 25);
    // print(head);

    // insertAtPosition(head, 3, 50, tail);
    // print(head);

    // insertAtPosition(head, 1, 42, tail);
    // print(head);

    // insertAtPosition(head, 7, 76, tail);
    // print(head);
    
//     return 0;

// }





// DELETE A NODE

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
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

void insertAtTail(Node* &tail, int d) {

    //new node create
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void deleteNode(int position, Node* &head, Node* &tail){

    //deleting 1st node or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

    }else{

        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;    //currently we are at 1st position i.e. head
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        if (curr == tail){
            tail = prev;  
        } 
        //memory free
        curr->next = NULL;
        delete curr;    //dsetructor is used
    }
}

//printing a linked list

void print(Node* &head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    //created a new node
    Node *node1 = new Node(10);

    //head pointed to node1
    Node* head = node1;
    //tail pointed to node1,, for a single node head and tail are at same node
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtTail(tail, 23);
    print(head);
    insertAtTail(tail, 36);
    print(head); 

    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl <<endl;

    deleteNode(5, head, tail);
    print(head);

    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl;

    return 0;
}

