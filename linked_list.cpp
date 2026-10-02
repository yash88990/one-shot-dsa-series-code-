#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void print(Node* temp){
    if(!temp){
        cout<<"empty list"<<endl;
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertatstart(Node* &head , int val){
    Node* nodetoinsert = new Node(val);
    //empty
    if(!head){
        head = nodetoinsert;
        return;
    }
    nodetoinsert->next = head;
    head->prev = nodetoinsert;
    head = nodetoinsert;
}

void insertatend(Node* &head  , int val){
    Node* nodetoinsert = new Node(val);
    //empty list
    if(!head){
        head = nodetoinsert;
        return;
    }
    Node* temp = head;
    while(temp->next)temp=temp->next;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

}

void insertatanypos(Node* &head , int val , int pos){
    // pos == 1 
    if(pos == 1 ){
        insertatstart(head , val);
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while(temp->next && cnt < pos - 1 ){
        temp = temp->next;
        cnt++;
    }
    Node* nodetoinsert = new Node(val);
    if(cnt == pos - 1 ){
        nodetoinsert->next=temp->next;
        temp->next=nodetoinsert;
        nodetoinsert->prev = temp;
        nodetoinsert->next->prev=nodetoinsert;

    }else{
        cout<<"invalid position"<<endl;
        return;
    }
}

void deletenode(Node* &head , int pos){
    //empty list
    if(!head){
        cout<<"already empty list nothing to delete "<<endl;
        return;
    }
    //if single node 
    if(!head->next){
        delete head ;
        head=NULL;
        return;
    }

    //start node
    if(pos == 1 ){
        Node* nodetodelete = head;
        if(head ->next) head = head->next;
        else{
            delete head;
            head = nullptr;
            return;
        }
        head->prev=NULL;
        nodetodelete->next = NULL;
        delete nodetodelete;
        return;
    }
    // any pos 
    int cnt = 1 ;
    Node* temp = head;
    while(temp->next && cnt < pos - 1 ){
        temp = temp->next;
        cnt++;
    }
    if(cnt == pos - 1 ){
        Node* nodetodelete = temp->next;
        temp->next = nodetodelete->next;
        if(nodetodelete->next){
            nodetodelete->next->prev=temp;
            nodetodelete->next = NULL;
        }
        nodetodelete->prev=NULL;
        delete nodetodelete;
        return;
    }else{
        cout<<"invalid position "<<endl;
        return;
    }
}

bool searchnode(Node* head , int val){
    while(head){
        if(head->data == val)return true;
        head=head->next;
    }
    return false;
}

void deletebyval(Node* &head , int val){
    //empty
    if(!head){
        cout<<"val not present"<<endl;
        return;
    }
    //delete head 
    if(head->data == val){
        Node* nodetodelete = head;
        if(head ->next) head = head->next;
        else{
            delete head;
            head = NULL;
            return;
        }
        nodetodelete->next = NULL;
        head->prev=NULL;
        delete nodetodelete;
        return;
    }
    //any pos
    Node * temp = head;
    while(temp->next->data != val && temp->next){
        temp=temp->next;
    }
    Node* nodetodelete = temp->next;
    temp->next = nodetodelete->next;
    if(nodetodelete->next){
        nodetodelete->next->prev=temp;
        nodetodelete->next = NULL;

    }
    
    nodetodelete->prev=NULL;
    delete nodetodelete;
    return;
}



int main(){
    Node* head = NULL;

    // print(head);
    insertatstart(head , 1);
    print(head);
    insertatend(head , 2);
    print(head);
    insertatend(head , 3);
    print(head);
    insertatend(head , 4);
    print(head);
    insertatend(head , 5);
    print(head);
    insertatanypos(head , 55 , 3);
    print(head);
    insertatanypos(head , 558 , 4);
    print(head);
    deletenode(head , 1);
    print(head);
    deletenode(head , 1);
    print(head);
    deletenode(head , 3);
    print(head);
    deletenode(head , 4);
    print(head);
    deletenode(head , 30);
    print(head);
    cout<<searchnode(head , 4)<<endl;
    print(head );
    deletebyval(head , 55);
    print(head);
    deletebyval(head , 558);
    print(head);
    deletebyval(head , 4);
    print(head);

    
}