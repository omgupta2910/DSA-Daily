#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree() {
    cout << "enter data: " << endl;
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);

    cout << "Enter data for left of " << data << ": " << endl;
    root->left = buildTree();

    cout << "Enter data for right of " << data << ": " << endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(node* root) {
    if (root == NULL) {
        return;
    }
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
            }
        }

        cout << temp->data << " ";

        if (temp->left) {
            q.push(temp->left);
        }

        if (temp->right) {
            q.push(temp->right);
        }
    }
}

void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter Data for root "<<endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node*temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<root->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<root->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->left);
        }

    }
}

void inorder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}

int main() {
    node* root = buildTree();

    cout << endl << endl;
    levelOrderTraversal(root);
}
