#include<bits/stdc++.h>
using namespace std; 
// # define n 10
// // class node{
// // public:
// // int data;
// // node* next;
// // node(int x){
// //     data=x;
// //     next=NULL;
// // }

// // };
// // void pushBack(node* &head,int data){
// //     node* n= new node(data);
// //     node* current=head;
// //     if(head==NULL){
// //         head=n;
// //         return;
// //     }
// //     while(current->next!=NULL){
// //         current=current->next;
// //     }
// //     current->next=n;
// // }
// // void insertAtTail(node* &head,int data){
// //     node* n= new node(data);
// //     if(head==NULL){
// //         head=n;
// //         return;
// //     }
// //     node*current=head;
// //     while(current->next!=NULL){
// //        current= current->next;
// //     }
// //     current->next=n;
// // }
// // void insertAtHead(node* &head,int data){
// //     node*n=new node(data);
// //     n->next=head;
// //     head=n;
// // }
// // bool Search(node* head,int key){
// //     node* current=head;
// //     while(current!=NULL){
// //         if(current->data==key){
// //             return true;
// //         }
// //         current=current->next;
// //     }
// //     return false;
// // }
// // void InsertNode(node* &head,int data){
// //     node*n=new node(data);
// //     n->data=data;
// //    // n->next=next;
// //     head=n;
// // }
// // void InsertAtPos(node* &head,int data,int n){
// //     node*n= new node(data);
// //     node*current=head;
// //     if(n==1){
// //         n->next=head;
// //         head=n;
// //     }
// // }
// // void DeleteAtHead(node* &head){
// //     node* todelete=head;
// //     head=head->next;
// //     delete todelete;
// // }
// // void deletion(node* &head,int data){
// //     node*temp=head;
// //     if(head==NULL){
// //         return;
// //     }
// //     if(head->next==NULL){
// //         DeleteAtHead(head);
// //         return;
// //     }
// //     while(temp->next->data!=data){
// //         temp=temp->next;
// //     }
// //     node* Todelete=temp->next;
// //     temp->next=temp->next->next;
// //     delete Todelete;
// // }
// // void display(node* head){
// //     node* current=head;
// //     while(current!=NULL){
// //         cout<<current->data<<"->";
// //         current=current->next;
// //     }

// // cout<<"NULL"<<endl;
// // }

// // int main(){
// //     node*LL1=NULL;
// //     pushBack(LL1,0);
// //     pushBack(LL1,1);
// //     pushBack(LL1,2);
// //     pushBack(LL1,3);
// //     pushBack(LL1,4);
// //         display(LL1);
// //         insertAtTail(LL1,69);
// //     display(LL1);
// //     cout<<Search(LL1,69)<<endl;
// //     insertAtHead(LL1,69);   
// //     display(LL1);
// //     DeleteAtHead(LL1);
// //     display(LL1);
// //     return 0;


// // }

// ///linked list
// // class node{
// // public:
// // int data;
// // node* next;
// // node(int x){
// //     data=x;
// //     next=NULL;
// // }
// // };
// // void pushBack(node* &head,int data){
// //     node*n=new node(data);
// //     node*current=head;
// //     if(head==NULL){
// //         head=n;
// //         return;
// //     }
// //     while(current->next!=NULL){
// //         current=current->next;
// //     }
// //     current->next=n;
// // }
// // node*ReverseByRecusrsion(node* &head){
// //     if(head==NULL|| head->next==NULL){
// //         return head;
// //     }
// //     node* newhead=ReverseByRecusrsion(head->next);
// //     head->next->next=head;
// //     head->next=NULL;
// //     return newhead;
// // }
// // node* ReverseKNode(node* &head,int k){
// //     node* prevptr=NULL;
// //     node* currptr=head;
// //     node* nextptr;
// //     int count=0;
// //     while(currptr!=NULL && count<k){
// //         nextptr=currptr->next;
// //         currptr->next=prevptr;
// //         prevptr=currptr;
// //         currptr=nextptr;
// //         count++;
// //     }
// //     if(nextptr!=NULL){
// //         head->next=ReverseKNode(nextptr,k);
// //     }
// //     return prevptr;
// // }
// // void deleteAtHead(node* &head){
// // node* toDelete=head;
// // head=head->next;
// // delete toDelete;
// // }

// // //detect Cycle
// // //Floyd's algo
// // void makeCycle(node* &head, int pos){
// //     node* temp=head;
// //     node* startNode;
// //     int count=1;
// //     while(temp->next!=NULL){
// //         if(count==pos){
// //             startNode=temp;
// //         }
// //         temp=temp->next;
// //         count++;
// //     }
// //     temp->next=startNode;
// // }
// // // node*Reverse(node*&head){
// // //     node*prevptr=NULL;
// // //     node*currptr=head;
// // //     node*nextptr;
// // //     while(currptr!=NULL){
// // //         nextptr=currptr->next;
// // //     currptr->next=prevptr;
// // //     prevptr=currptr;
// // //     currptr=nextptr;
// // //     }
// // //     return prevptr;
// // // }
// //  bool detectCycle(node* &head){
// //      node* slow=head;
// //      node* fast=head;
// //      while(fast!=NULL && fast->next!=NULL){
// //          slow=slow->next;
// //          fast==fast->next->next;
// //          if(fast==slow){
// //              return true;
// //          }
// //      }
// //      return false;
// //  }
// //  //remove xycle
// //  void removeCycle(node* &head){
// //      node* slow=head;
// //      node* fast=head;
// //      do{
// //          slow=slow->next;
// //          fast=fast->next->next;
// //      }
// //      while(slow!=fast);
// //      fast=head;
// //      while(slow->next!=fast->next){
// //          slow=slow->next;
// //          fast=fast->next;
// //      }
// //      slow->next=NULL;
// //  }
// //  void InsertAtTail(node* &head,int data){
// //      node*n=new node(data);
// //      node* current=head;
// //      while (current->next!=NULL)
// //      {
// //         current=current->next;
// //      }
// //      current->next=n;
// //  }
// //  void InsertAtHead(node* &head,int data){
// //      node* n=new node(data);
// //      n->next=head;
// //      head=n;

// //  }
// // void DeleteAtTail(node* head){
// //     while(head->next->next!=NULL){
// //         head=head->next;
// //     }
// //     head->next=NULL;
// // }
// //  void Display(node* head){
// //     node*current=head;
// //     while(current!=NULL){
// //         cout<<current->data<<"->";
// //         current=current->next;
// //     }
// //     cout<<"NULL"<<endl;
// // }


// // int main(){
// //     node* LL1=NULL;
// //     pushBack(LL1,1);
// //     pushBack(LL1,2);
// //     pushBack(LL1,3);
// //     pushBack(LL1,4);
// //     pushBack(LL1,5);
// //     Display(LL1);
// // //      deleteAtHead(LL1);
// // //  Display(LL1);
// // //     node* newLL1=ReverseByRecusrsion(LL1);
// // //     Display(newLL1);
// // //     node* newLL1Pt2=ReverseKNode(newLL1,3);
// // //     Display(newLL1Pt2);
// // makeCycle(LL1,3);
// // cout<<detectCycle(LL1)<<endl;
// // // removeCycle(LL1);
// // // Display(LL1);
// //     return 0;
// // }
// ///linkedListRevisoon
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL; 
//     }

// };
// void pushback(node* &head,int data){
//     node* n=new node(data);
//     node*current=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// void InsertAthead(node* &head,int data){
//     node*n=new node(data);
//     n->next=head;
//     head=n; 
// }
// void InsertAtTail(node* &head,int data){
//     node*n=new node(data);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node*current=head;
//     while(current->next!=NULL){
// current=current->next;
//     }
//     current->next=n;
    
// }
// void DeleteAtHead(node* &head){
//     node* Todelete=head;
//     head=head->next;
//     delete Todelete;
// }
// void DeleteAtTail(node* head){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         delete head;
//         return;
//     }
//     while(head->next->next!=NULL){
//         head=head->next;
//     }
//     delete head->next;
//     head->next=NULL;
// }
// node* ReverseLL(node* &head){
//        node*prevptr=NULL;
//     node*currptr=head;
//     node*nextptr;
//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;
//         prevptr=currptr;
//         currptr=nextptr;
//     }
//     return prevptr;

// }
// node*ReverseRecurseLL(node*&head){
//     if(head==NULL||head->next==NULL){
//         return head;
//     }
//     node*newhead1=ReverseRecurseLL(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead1;
// }
// node* ReverseKNodes(node* head,int k){
//     node* prevptr=NULL;
//     node*currptr=head;
//     node*nextptr;
//     int count=0;
//     while(currptr!=NULL && count<k){
//         nextptr=currptr->next;
//         currptr->next=prevptr;
//         prevptr=currptr;
//         currptr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=ReverseKNodes(nextptr,k);
//     }
//     return prevptr;
// }
// //detect cycle
// //floyds algo
// void makecycle(node* &head,iny pos){
//     node* temp=head;
//     node*startNode;
//     int count=1;
//     while(temp->next!=NULL){
//         if(count=pos){
//             startNode=temp;
//         }
//     }
// }
// void display(node* head){
//     node* current=head;
//     while(current!=NULL){
//         cout<<current->data<<"->";
//         current=current->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main(){
//     node* LL1=NULL;
//     pushback(LL1,1);
//     pushback(LL1,2);
//     pushback(LL1,3);
//     pushback(LL1,4);
//     pushback(LL1,5);
//     pushback(LL1,6);
//     display(LL1);
//     InsertAthead(LL1,69);
//     display(LL1);
//     InsertAtTail(LL1,69);
//     display(LL1);
//     DeleteAtHead(LL1);
//     display(LL1);
//     DeleteAtTail(LL1);
//     display(LL1);
//     // node*newhead=ReverseLL(LL1);
//     // display(newhead);
// // node*newhead=ReverseRecurseLL(LL1);
// //     display(newhead);
//     // node*newhead0=ReverseKNodes(LL1,3);
//     // display(newhead0);
// return 0;
// }
// class Stack{
//     private:
//     int*arr;
//     int top;
//     public:
//     Stack(){
//         arr=new int[n];
//         top=-1;
//     }
//     void push(int x){
//         if(top==n-1){
//             cout<<"Stack Overflow"<<endl;
//         return ;

//         }
// top++;
// arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"NO element to pop"<<endl;
//         return;
//         }
//         top--;
//     }
//     int Top(){
//         if(top==-1){
//             cout<<"NO element in the stack";
//             return -1 ;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };
// int main(){
//     Stack st;
//     for(int i=0;i<4;i++){
//         st.push(i);
//     }
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     st.empty();
//     cout<<st.Top()<<endl;
//     return 0;
// }
// void insertAtBottom(stack<int> &st,int ele){
//     if(st.empty()){
//           st.push(ele);
//         return ;
//     }
//     int topele=st.top();
//     st.pop();
//     insertAtBottom(st,ele);
//     st.push(topele);
// }
// void reverse(stack<int> &st){
//     if(st.empty()){
//         return ;
//     }
//     int ele=st.top();
//     st.pop();
//     reverse(st);
//     insertAtBottom(st,ele);
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.push(6);
//     st.push(7);
//     st.push(8);
//     reverse(st);
//     reverse(st);
//     while(!st.empty()){
// cout<<st.top()<<" ";
// st.pop();
//     }
//     cout<<endl;
//     return 0;
// }
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// void pushback(node* &head,int data){
//     node* n=new node(data);
//     node* current=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(head->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// // void display(node* head){
// //     node* current=head;
// //     while(current!=NULL){
// //         cout<<current->data<<" _>";
// //         current=current->next;
// //     }
// //     cout<<"NULL";
// // }

// void rdisplay(node*head){
//     if(head==NULL){
//         return;
//     }
//     cout<<head->data<<" -?";
//     rdisplay(head->next);
// } 
// int main(){
//     node* LL1=NULL;
//     pushback(LL1,1);
//     rdisplay(LL1);
//     return 0;
// }
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// void Pushback(node* &head,int data){
//     node*n=new node(data);
//     node* current=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while (head->next!=NULL)
//     {

//     current=current->next;
//     }
//     head->next=n;
    
// }
// void InsertAtHead(node* &head,int data){
//     node* n= new node(data);
// n->next=head;
// head=n;
// }
// void InsertAtTail(node* &head,int data){
//     node* n= new node(data);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* current=head;
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// void deleteAtHead(node* &head){
// if(head==NULL){
//     return;
// }
// if(head->next==NULL){
//     head=NULL;
//     return;
// }
// node* newHead=head->next;
// delete head;
// head=newHead;

// }
// void DeleteatTail(node* &head){
//     node* current=head;
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         delete head;
//         return;
//     }
//     while(current->next->next!=NULL){
//        current=current->next;
//     }
//     delete current->next;
//     current->next=NULL;
// }
// void Display(node*&head){
    
//  node* current=head;
//     while(current!=NULL){
//     cout<<current->data<<"->";
//     current=current->next;
//     }
//      cout<<"NULL"<<endl;
// }

// int main(){
//     node* LL1=NULL;
//     Pushback(LL1,1);
//     Pushback(LL1,2);
//     Pushback(LL1,69);
// DeleteatTail(LL1);
// Display(LL1);
  
    
//     return 0;
// }


////21 din
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// void InsertAtTail(node* &head,int data){
//     node*n=new node(data);
//     node* temp=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
    
// }
// void InsertAthead(node* &head,int data){
//     node*n=new node(data);
   
//     if(head==NULL){
//         head=n;
//         return;
//     }
//    n->next=head;
//    head=n;
// }
// bool search(node* head,int key){
//     node*temp=head;
//     while(temp!=NULL){
//         if(temp->data==key){
//             return 1;
//         }
//         temp=temp->next;
//     }
//     return 0;
// }
// void deleteAtHead(node* &head){
//     node* todelete=head;
//     head=head->next;
//     delete todelete;
// }
// void deletion(node* &head,int x){
//     node*temp=head;
// if(head==NULL){
//     return;
// }
// if(head->next==NULL){
//     deleteAtHead(head);
//     return;
// }
//     while(temp->next->data!=x){
//         temp=temp->next;
//     }
//     node* todelete=temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }
// void display(node* head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main(){
//     node*LL1=NULL;
//     InsertAthead(LL1,69);
//     InsertAtTail(LL1,1);
//     InsertAtTail(LL1,2);
//   // cout<< search(LL1,8)<<endl;
//     display(LL1);
//     deletion(LL1,2);
//     display(LL1);
//     return 0;
// }
class node{
public:
int data;
node* next;
node(int x){
    data=x;
    next=NULL;
}
};
void insertAtTail(node* &head,int data){
    node* n=new node(data);
    node* temp=head;
 if(head==NULL){
     head=n; 
     return;
 }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
int main(){
    node* LL1=NULL;
insertAtTail(LL1,1);
display(LL1);
    return 0;
}