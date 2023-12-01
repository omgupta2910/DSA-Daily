#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node *next;


    //constructor
    Node(int  data) 
    {
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void InsertHead(Node *&head, int d){
    //new node creation
    Node * temp = new Node(d);
    temp -> next =  head;
    head = temp;
};

void InsertTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next; 
}

void insertAtPosition(Node* &head,Node* &tail, int position, int d){

    Node *temp = head;
    int cnt = 1;

    //Inserting at start
    if(position == 1){
        InsertHead(head,d);
        return;
    }
    // Inserting at end
    if(temp->next == NULL){
        InsertTail(tail,d);
        return;
    }

    while(cnt<position-1){
        temp = temp->next;
        cnt++; 
    }

    //creating a node for d

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
     //deleting start node
     if(position == 1 ){
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
     }
     else{
        //deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;
     }
}



void print(Node* &head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
};   

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    InsertTail(tail, 12);
    print(head); 
    InsertTail(tail, 15);
    print(head); 
    cout<<endl;
    insertAtPosition(head,tail, 3,22);
    print(head);
    cout<<endl;
    insertAtPosition(head,tail,1,2);

    print(head);
    cout<<endl;

    cout<<tail->data;
    cout<<endl<<head->data;
    deleteNode(3,head);
    print(head);
    
}