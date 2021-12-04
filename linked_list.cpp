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
void pushBack(node* &head,int data){
      node* n= new node(data); 
      node* current=head;
      if(head==NULL){
        head=n;
        return;
      }
      while(current->next!=NULL){
        current=current->next;
      }
      current->next=n;
}
void deleteAtHead(node* &head){
  node* todelete=head;
  head=head->next;
  delete todelete;
}
void display(node* head){
  node* current=head;
  if(head==NULL){
    return;
  }
  while (current!=NULL)
  {
    cout<<current->data<<"->";
    current=current->next;
  }
  cout<<"NULL"<<endl;
}
int main(){
node* LL1=NULL;
int N;
cin>>N;
for(int i=0;i<=N;i++){
pushBack(LL1,i);
}
display(LL1);
deleteAtHead(LL1);
display(LL1);

    return 0;
}