#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};

void print(node* head){
    if(!head){
        cout<<"empty list"<<endl;
        return;
    }
    node* temp=head;
    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while(temp != head);
    cout<<endl;
}

void insertatstart(node* &head , int val){
    //empty
    if(!head){
        head=new node(val);
        head->next=head;
        return;
    }
    node* tail = head;
    while( tail->next != head){
        tail=tail->next;
    }
    node* nodetoinsert =new node(val);
    tail->next = nodetoinsert;
    nodetoinsert->next = head;
    head = nodetoinsert;
}

void insertatend(node* &head , int val){
    //empty
    if(!head){
        head=new node(val);
        head->next=head;
        return;
    }
    node* tail = head;
    while( tail->next != head){
        tail=tail->next;
    }
    node* nodetoinsert =new node(val);
    tail->next = nodetoinsert;
    nodetoinsert->next = head;
    tail = nodetoinsert;
}

void insertatanypos(node* &head , int val , int pos){
    // pos == 1 
    if(pos == 1 ){
        insertatstart(head , val);
        return;
    }

    int cnt = 1;
    node* temp = head;
    int tailcount=1;
    while(temp->next && cnt < pos - 1 ){
        temp = temp->next;
        cnt++;
    }
     node* tail = head;
    while( tail->next != head){
        tail=tail->next;
        tailcount++;
    }
    if(cnt + 1 == tailcount){
        insertatend(head , 10);
    }
    

    node* nodetoinsert = new node(val);
    if(cnt == pos - 1 ){
        nodetoinsert->next=temp->next;
        temp->next=nodetoinsert;
    }else{
        cout<<"invalid position"<<endl;
        return;
    }

}

void deletestartnode(node* &head){
    if(!head){
        cout<<"already empty"<<endl;
        return;
    }
    if(head->next == head){
        delete head;
        head->next=NULL;
        return;
    }
    node* tail=head;
    while(tail->next != head)tail=tail->next;
    node* temp = head;
    head = head->next;
    temp->next=nullptr;
    delete temp;
    tail->next=head;
}

void deletelastnode(node* &head){
    if(!head){
        cout<<"already empty"<<endl;
        return;
    }
    if(head->next == head){
        delete head;
        head->next=NULL;
        return;
    }
    node* tail=head;
    while(tail->next->next != head)tail=tail->next;

    node* temp = tail->next;
    tail->next=head;
    temp->next=nullptr;
    delete temp;
}

void deletenode(node* &head , int pos){
    //empty list
    if(!head){
        cout<<"already empty list nothing to delete "<<endl;
        return;
    }
    //if single node 
    if(head->next == head){
        delete head ;
        head=NULL;
        return;
    }

    //start node
    if(pos == 1 ){
        deletestartnode(head);
        return;
    }
    
    // any pos 
    int cnt = 1 ;
    node* temp = head;
    while(temp->next && cnt < pos - 1 ){
        temp = temp->next;
        cnt++;
    }
    int tailcount = 1;
    node* tail = head;
    while( tail->next != head){
        tail=tail->next;
        tailcount++;
    }
    if(cnt + 1 == tailcount){
        deletelastnode(head );
        return;
    }




    if(cnt == pos - 1 ){
        node* nodetodelete = temp->next;
        temp->next = nodetodelete->next;
        if(nodetodelete->next){
            nodetodelete->next = NULL;
        }
        delete nodetodelete;
        return;
    }else{
        cout<<"invalid position "<<endl;
        return;
    }
}

bool searchnode(node* head , int val){
    node* temp=head;
    do{
        cout<<temp->data<<" -> ";
        if(temp->data == val)return true;
        temp=temp->next;
    }while(temp != head);
    return false;

}
int main(){
    node* head = nullptr;
    insertatstart(head , 0);
    print(head);
    insertatstart(head, 1);
    insertatstart(head, 2);
    insertatstart(head, 3);
    insertatstart(head, 4);
    print(head);
    insertatend(head , 5);
    print(head);
    insertatanypos(head ,11 ,7);
    print(head);
    deletestartnode(head);
    print(head);
    deletelastnode(head);
    print(head);
    deletenode(head , 2);
    print(head);
    cout<<endl<<searchnode(head , 11)<<endl;
}