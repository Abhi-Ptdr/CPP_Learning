//DETECT LOOP(CYCLE) IN LINKED LIST

#include<iostream>
using namespace std;
#include<map>

class Node {
    public:
    int data;
    Node *next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {  //&head is used becoz to change in the original LL no copy has to be made

    //new node create
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

//Traversing and printing a linked list

void print(Node* &head){

    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL) {
        //cycle is present
        if(visited[temp] == true){
            return 1;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main() {

    //created a new node
    Node *node1 = new Node(10);

    //head pointed to node1
    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    bool loop = detectLoop(head);

    if(loop){
        cout<<"Loop is there!" << endl;
    }else{
        cout<<"No Loop!"<<endl;
    }

    return 0;
}