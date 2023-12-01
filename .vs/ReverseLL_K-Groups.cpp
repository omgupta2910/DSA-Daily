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

        
void Reverse(Node* &head, int k){
if(head==NULL){
        return NULL;
    }

    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int len = 0;
    int count = 0;
    int traverse = 0;

   Node* temp = head;

    while (temp != NULL && len < k) {
        temp = temp->next;
        len++;
    }

    // If there are less than 'k' nodes in this segment, no reversal is needed
    if (len < k) {
        return head;
    }
    
    while(curr!=NULL && count<k ){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;   
        count++;
        traverse++;
    }
    if(next!=NULL){
        head->next = kReverse(next, k);
    }
    
    return prev;
}


int main(){

}