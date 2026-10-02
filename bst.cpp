#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* left ;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root , int val){
    //empty
    if(!root)return new Node(val);
    if(root->data > val){
        root->left = insert(root->left , val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}
void inorder(Node* root){
    if(!root)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node* root  , int val){
    if(!root)return false;
    if(root->data == val)return true;
    else if(root-> data > val)return search(root->left , val);
    else return search(root->right, val);
    return false;
}

Node* findmin(Node* root){
    while(root->left)root=root->left;
    return root;
}
Node* findmax(Node* root){
    while(root->right)root=root->right;
    return root;
}
Node* deleteNode(Node* root , int val){
    if(!root)return NULL;
    //search for node
    if(root->data > val){
        root->left = deleteNode(root->left , val);
    }else if (root->data < val){
        root->right = deleteNode(root->right , val);
    }else{
        //0 child
        if(!root->left && !root->right){
            delete root ;
            return NULL;
        }
        //1 child 
        else if(!root->left && root->right){
            Node* temp = root->right;
            delete root;
            return temp;
        }else if(!root->right && root->left){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //2child
        else{
            Node* temp = findmin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right , temp->data)
;        }
    }
}
int main(){
    Node* root = NULL;
    root = insert(root , 50);
    insert(root , 20);
    insert(root, 5);
    insert(root , 2);
    insert(root, 7);
    insert(root , 56);
    insert(root, 24);
    insert(root , 77);
    insert(root, 12);
    inorder(root);
    cout<<endl;
    cout<<search(root , 12)<<endl;
    cout<<"min is "<<findmin(root)->data<<endl;
    cout<<"max is "<<findmax(root)->data<<endl;
    deleteNode(root , 50);
    inorder(root);
    cout<<endl;
    deleteNode(root , 7);
    inorder(root);
    cout<<endl;
    
    
    return 0;
}