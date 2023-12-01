#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};


void getLenght(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = tmep->next;
    }
    return len;
}

void print(Node *head){
    Node *temp = head;

    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    coutdd<<endl;
};

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    getLenght(head);[]
    print(head);

    
}