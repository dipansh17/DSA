#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }

};
void PushBack(node* &head,int data){
    node*n=new node(data);
    node* current= head;
    if(head==NULL){
        head=n;
        return;
    }
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=n;
}
void insertAtHead(node* &head,int data){
    node* n= new node(data);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int data){
    node*n=new node(data);
    node* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=n;
}

void insertAtPos(node* &head,int data,int key){
            node *n=new node(data);
            node *current=head;
            int i=0;
            while(current->next!=NULL && i<key-1){
                current=current->next;
                i++;
            }

            node * temp=current->next;
            current->next=n;
            n->next=temp;

        }

void display(node* head){
  node*current=head;
  while(current!=NULL){
      cout<<current->data<<"->";
      current=current->next;
  }
  cout<<"NULL"<<endl;
}
int main(){
    node*LL1=NULL;
    PushBack(LL1,0);
    PushBack(LL1,1);
    PushBack(LL1,2);
    PushBack(LL1,3);
    PushBack(LL1,4);
    display(LL1);
    insertAtHead(LL1,9);
    display(LL1);
    insertAtTail(LL1,9);
    display(LL1);
    insertAtPos(LL1,9,2);
    display(LL1);
return 0;
}