#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* left ;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"  enter data : ";
    int d ;
    cin>>d;
    if(d == -1)return NULL;
    root=new Node(d);
    cout<<"  insert at left of "<<d;
    root->left=buildTree(root->left);
    cout<<"  insert at right of "<<d;
    root->right=buildTree(root->right);
    return root; 
}

void levelordertraversal(Node* root ){
    if(!root)return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty())q.push(NULL);
        }else{
            cout<<front->data<<" ";
            if(front->left)q.push(front->left);
            if(front->right)q.push(front->right);
        }
    }
}

void reverselevelordertraversal(Node* root ){
    if(!root)return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            if(!q.empty())q.push(NULL);
        }else{
            cout<<front->data<<" ";
            if(front->right)q.push(front->right);
            if(front->left)q.push(front->left);
            
        }
    }
}

void preordertraversal(Node* root){
    if(!root)return;
    //node
    cout<<root->data<<" ";
    //left 
    preordertraversal(root->left);
    //right
    preordertraversal(root->right);
}

void inordertraversal(Node* root){
    if(!root)return;
   
    //left 
    inordertraversal(root->left);
     //node
    cout<<root->data<<" ";
    //right
    inordertraversal(root->right);
}

void postordertraversal(Node* root){
    if(!root)return;
    
    //left 
    postordertraversal(root->left);
    //right
    postordertraversal(root->right);
    //node
    cout<<root->data<<" ";
}

// 10 20 -1 -1 30 -1 -1
// 10 20 40 -1 80 -1 -1 50 -1 -1 30 -1 60 90 -1 -1 9 -1 -1
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1  
int main(){
    Node* root = NULL;
    root = buildTree(root);
    cout<<endl<<endl<<"printing    "<<root->data<<" left is " <<root->left->data<<"  right is "<<root->right->data <<endl;
    levelordertraversal(root);
    cout<<endl<<endl;
    reverselevelordertraversal(root);
    cout<<endl;
    preordertraversal(root);
    cout<<endl;
    inordertraversal(root);
    cout<<endl;
    postordertraversal(root);
    return 0;
}