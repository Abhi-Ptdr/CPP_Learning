// // CREATING A NODE

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node *next;

//     // constructor
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// int main() {
    
//     Node *node1 = new Node(10);
//     cout << node1 -> data << endl;
//     cout << node1 -> next << endl;

//     return 0;
// }


// // INSERTING A NODE AT HEAD (BEFORE HEAD)

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int d) {  //&head is used becoz to change in the original LL no copy has to be made

//     //new node create
//     Node *temp = new Node(d);

//     temp->next = head;
//     head = temp;
// }

// //Traversing and printing a linked list

// void print(Node* &head){

//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {

//     //created a new node
//     Node *node1 = new Node(10);

//     //head pointed to node1
//     Node* head = node1;
//     print(head);
//     insertAtHead(head, 12);
//     print(head);
//     insertAtHead(head, 15);
//     print(head);

//     return 0;
// }



// // INSERTION AT THE END OF L.L.

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtTail(Node* &tail, int d) {  //&tail is used becoz to change in the original LL no copy has to be made

//     //new node create
//     Node *temp = new Node(d);

//     tail->next = temp;
//     tail = temp;
// }

// //Traversing and printing a linked list

// void print(Node* &head){

//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {

//     //created a new node
//     Node *node1 = new Node(10);

//     //head pointed to node1
//     Node* head = node1;
//     //tail pointed to node1,, for a single node head and tail are at same node
//     Node* tail = node1;
//     print(head);

//     insertAtTail(tail, 12);
//     print(head);
//     insertAtTail(tail, 15);
//     print(head); 

//     return 0;
// }





// // INSERTION IN THE MIDDLE OF L.L.

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtTail(Node* &tail, int d) {

//     //new node create
//     Node *temp = new Node(d);

//     tail->next = temp;
//     tail = temp;
// }

// void insertAtPosition(Node* &head, int position, int d) { 

//     Node *temp = head;
//     int cnt = 1;

//     while(cnt < position-1) {
//         temp = temp->next;
//         cnt++;
//     }

//     //new node creating for d i.e. data
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;


// }

// //Traversing and printing a linked list

// void print(Node* &head){

//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {

//     //created a new node
//     Node *node1 = new Node(10);

//     //head pointed to node1
//     Node* head = node1;
//     //tail pointed to node1,, for a single node head and tail are at same node
//     Node* tail = node1;
//     print(head);

//     insertAtTail(tail, 12);
//     print(head);
//     insertAtTail(tail, 15);
//     print(head); 

//     //Insert 22 between 12 and 15 means 3rd position

//     insertAtPosition(head, 3, 22);
//     print(head);

//     return 0;

//     //This code will not insert at 1st or last position
// }



// INSERTING AT ANY POSITION INCLUDING 1ST AND LAST

// #include <iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtTail(Node* &tail, int d) {

//     //new node create
//     Node *temp = new Node(d);

//     tail->next = temp;
//     tail = temp;
// }

// void insertAtHead(Node* &head, int d) {  

//     //new node create
//     Node *temp = new Node(d);

//     temp->next = head;
//     head = temp;
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
//     temp->next = nodeToInsert;


// }

// //Traversing and printing a linked list

// void print(Node* &head){

//     Node *temp = head;

//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {

//     //created a new node
//     Node *node1 = new Node(10);

//     //head pointed to node1
//     Node* head = node1;
//     //tail pointed to node1,, for a single node head and tail are at same node
//     Node* tail = node1;
//     print(head);

//     insertAtTail(tail, 12);
//     print(head);
//     insertAtTail(tail, 15);
//     print(head); 

//     //Insert 22 between 12 and 15 means 3rd position

//     insertAtPosition(head, 3, 22, tail);
//     print(head);

//     //Insert 7 AT 1st position
//     insertAtPosition(head, 1, 7, tail);
//     print(head);

//     //Insert 19 AT 6th position i.e. last position
//     insertAtPosition(head, 6, 19, tail);
//     print(head);

//     cout << "head:" << head->data << endl;
//     cout << "tail:" << tail->data << endl;


//     return 0;
// }




// DELETE A NODE

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
        head = head -> next;

        temp -> next = NULL;
        delete temp; //dsetructor is used 

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

        prev -> next = curr -> next;

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

    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl <<endl;

    deleteNode(3, head, tail);
    print(head);

    cout << "head " << head ->data << endl;
    cout << "tail " << tail ->data << endl;

    return 0;
}