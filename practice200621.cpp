#include<bits/stdc++.h>
#include<string>
using namespace std;
// int linearSearch(int n,int arr[],int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int binarySearch(int n,int arr[],int key){
//     int s=0;
//     int e=n;
//     while (s<e)
//     {
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return -1;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int key;
//      cin>>key;
//      cout<<binarySearch(n,arr,key);
//      //cout<<linearSearch(n,arr,key);
//     return 0;
// }
//sorting (selection)
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      for(int i=0;i<n-1;i++){
//          for(int j=i+1;j<n;j++){
//              if(arr[j]<arr[i]){
//              int temp=arr[j];
//              arr[j]=arr[i];
//              arr[i]=temp;
             
//              }
//          }
//      }
//      for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// }
//bubble sort
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int counter=1;
//     while (counter<n)
//     {
//         for (int i = 0; i < n-counter; i++)
//         {
//         if(arr[i]>arr[i+1]){
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//     }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//     }
    
    
    
//     return 0;
// }
//max till i
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         mx=max(mx,arr[i]);
      
//     }
//       cout<<mx<<endl;

//     return 0;
// }
//reverse arr
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //logic behind reversing
//     int s=0;
//     int e=n-1;
//     while(s<e){
    
//             int temp=arr[s];
//             arr[s]=arr[e];
//             arr[e]=temp;
        
//         s++;
//         e--;
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }
//max number and min number
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;
//     for (int  i = 0; i < n; i++)
//     {
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
//     cout<<maxNo<<" "<<minNo<<endl;
    
//     return 0;
// }
/////recursion//
//factorial
// int Fact(int n){
// if(n==0){        //base case
// return 1;
// }
// int ans=n*Fact(n-1);
// return ans;
// }
// int main(){
// int n;
// cin>>n;

// cout<<Fact(n)<<endl;
// return 0;
// }
 //sum till n
//  int SumTill(int n){
//      if(n==0){   //base case
//          return 0;
//      }
//      int ans=n+SumTill(n-1);
//      return ans;
//  }
//  int main(){
//      int n;
//      cin>>n;
//      cout<<SumTill(n)<<endl;
//      return 0;
//  }
//n ki power p
// int NkiPower(int n,int p)
// {
// if(p==0){
//     return 1;
// }
// int ans=n*NkiPower(n,p-1);
// return ans;
// }
// int main(){
//     int n,p;
//     cin>>n>>p;
// cout<<NkiPower(n,p)<<endl;
// return 0;
// }
//fibinacci
// int fibo(int n){
//     if(n==0){ ////base condition
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }

//     return fibo(n-1)+fibo(n-2);

// }
// int main(){
//     int n=6;
//     // cin>>n;
//     cout<<fibo(6)<<endl;
//     return 0;
// }
// bool check(int arr[],int n){
//     if(n==1){      //base condition
//         return true;
//     }
//     int restArr=check(arr+1,n-1);
//     return (arr[0]  <arr[1]&& restArr);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<check(arr,n)<<endl;
//     return 0;
// }
//print numbers till n
// void PrintNumb(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<n<<" ";
//     PrintNumb(n-1);
// // cout<<n<<" ";
    
// }
// int main(){
//     int n;
//     cin>>n;
//     PrintNumb(n);
//     return 0;
// }
//first and last occurance
// int firstOcc(int n,int arr[],int i,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     firstOcc(n,arr,i+1,key);

// }
// int last(int n,int arr[],int i,int key){
//     if(i==0){
//         return -1; 
//     }
   
//     if(arr[i]==key){
//         return i;
//     }
//      last(n,arr,i-1,key);
  
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//   cout<<  firstOcc(n,arr,0,key)<<" ";
//   cout<<last(n,arr,n,key)<<" ";
//     return 0;
// }
//reverse  a string
// void Reverse(string s){
//     if(s.size()==0){
//         return ;
//     }
//     Reverse(s.substr(1));
//     cout<<s[0];
// }
// int main(){
// string s="Binod";
// Reverse(s);
//     return 0;
// }
////replaceWithPi
// void ReplaceWithPi(string s){
//     if(s.size()==0){
//         return;
//     }
//     if(s[0]=='p'&& s[1]=='i'){
//         cout<<"3.14";
//     ReplaceWithPi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         ReplaceWithPi(s.substr(1));
//     }
// }
// int main(){
//     string s="pipppipippeppe";
//     ReplaceWithPi(s);
//     return 0;
// }
// void reverse(string& s){
   
//     int n=s.length();
// for(int i=0;i<n/2;i++){
//     // swap(s[i],s[n-i-1]);
//     int temp=s[i];
//     s[i]=s[n-i-1];
//     s[n-i-1] = temp;
// }    
// }
// int main(){
//     string s="Dipansh";
//   reverse(s);
//   cout<<s;
//     return 0;
// }
///towerOfHanoi
// void TofHanoi(int n,char src,char des,char help){
//     if(n==0){
//         return ;
//     }
//     TofHanoi(n-1,src,help,des);
//     cout<<"moved from"<<src<<"to"<<des<<endl;
//     TofHanoi(n-1,help,des,src);
// }
// int main(){
//     int n;
//     char src;
// char des;
// char help;
//     TofHanoi(3,'A','C','B');
//     return 0;
// }
//tower of hanoi
// void TofHanoi(int n,char src,char des,char help){
//     if(n==0){ 
//         return;
//     }
//     TofHanoi(n-1,src,help,des);
//     cout<<"Move from "<<src<<"To "<<des<<endl;
//     TofHanoi(n-1,help,des,src);
// }
// int main(){
//     int n;
//     char src,help,des;
//     TofHanoi(3,'A','C','B');
//     return 0;
// }
//remove duplicates from string
// string removeDup(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch=s[0];
//     string ans=removeDup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return ch+ans;
// }
// int main(){
//     cout<<removeDup("aaaabbbbccccddddeeeef")<<endl;
//     return 0;
// }
//move all x to the end of string
// string MoveAll(string s){
//     if(s.length()==0){
//         return "";
//     }
//      char ch=s[0];
//      string ans=MoveAll(s.substr(1));
//      if(ch=='h'){
//          return ans+ch;
//      }
//      return ch+ans;
// }
// int main(){
//     cout<<MoveAll("jbvjkzdbvxnxnixhixhixhixhxhxxxxuxhbxixioxhxi")<<endl;
//     return 0;
// }
//generate all substring of a string
// void subseq(string s, string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return ;
//     }
//     char ch=s[0];
 
//     string ros=s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }
// int main(){
//     subseq("abcd","");
//     return 0;
// }
//generate substring with ascii number
    // void subseq(string s,string ans){
    //     if(s.length()==0){
    //         cout<<ans<<endl;
    //         return;
    //     }
    //     char ch=s[0];
    //     int code=ch;
    //     string ros=s.substr(1);
    //     subseq(ros,ans);
    //     subseq(ros,ans+ch);
    //     subseq(ros,ans+to_string(code));
    // }
    // int main(){
    //     subseq("AB","");
    //     return 0;
    // }
    //keypad problem(print all possible words from phonr digit)
    //  string keypadArr[]={"" ,"-~`","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    //  void keypad(string s, string ans){
    //      if(s.length()==0){ //base case
    //          cout<<ans<<endl;
    //          return;
    //      }
    //      char ch=s[0];
    //      string code = keypadArr[ch-'0'];
    //      string ros=s.substr(1);
    //      for (int  i = 0; i < code.length(); i++)
  
    //      {
    //             keypad(ros,ans+code[i]); 
    //      }
         
    //  }
    //  int main(){
    //     keypad("243","");
    //      return 0;
    //  }


    //////////////LNKKED LIST////////////   ////////////////
    // class node{
    //     public:
    //     int data;
    //     node* next;
    //     node(int x){
    //         data=x;
    //         next=NULL;
    //     }
    // };
    // void pushBack(node* &head,int data){
    //     node* n=new node(data);
    //   node* current=head;
    //     if(head==NULL){  //base
    //         head=n;
    //         return;
    //     }
        
    //     while(current->next !=NULL){
    //       current=current->next;
            
    //     }

    //     current->next=n;
    // }
    // void display(node* &head){
    //     node*current=head;
    //     while(current!=NULL){
    //         cout<<current->data<<"\t";
    //         current=current->next;
    //     }
    //     cout<<endl;
    // }
    // int main(){
    //     node* LL1=NULL;
    //     pushBack(LL1,0);
    //     pushBack(LL1,1);
    //     pushBack(LL1,2);
    //     pushBack(LL1,3);
    //     pushBack(LL1,4);
    //     pushBack(LL1,5);
    //     pushBack(LL1,6);
    //     display(LL1);
    //     return 0;
    // }
//     class node{
//         public:
//         int data;
//         node* next;
//         node(int x){
//             data=x;
//             next=NULL;
//         }
//     };
//     void pushBack(node* &head,int data){
//         node* n= new node(data);
//         node*curent=head;//safe side k liye store krle
//         if(head==NULL){
//         head=n;
//         return;}
     
//         while(curent->next!= NULL){
//             curent=curent->next;
//         }
//         curent->next=n;
//     }
//     void InsertNode(node* &head,int data){
//         node*n=new node(data);
//         n->data=data;
//         n->next=head;
//         head=n;
//     }
//     void Display(node* &head){
//         node*curent=head;
//         while(curent!=NULL){
//             cout<<curent->data<<"\t";
//             curent=curent->next;
//         }
//         cout<<endl;
//     }
//     int main(){
//         node* LL1=NULL;
//         node* LL2=NULL;
// for(int i=0;i<10;i++){
//     pushBack(LL1,i);
// }
// InsertNode(LL1,69);
// Display(LL1);

// return 0;

//     }
    ////dobara
    // class node{
    //     public:
    //     int data;
    //     node* next;
    //     node(int x){
    //         data=x;
    //         next=NULL;
    //     }
    //     };
    //     void pushBack(node* &head,int data){
    //         node* n=new node(data);
    //         node*current=head;
    //         if(head==NULL){
    //             head=n;
    //             return;
    //         }
    //         while(current->next!=NULL){
    //             current=current->next;
    //         }
    //         current->next=n;
    //     }
    //     void Display(node* &head){
    //       node* current=head;
    //         while(current!=NULL){
    //             cout<<current->data<<"\t";
    //             current=current->next;
    //         }
    //         cout<<endl;
    //     }
    //     void insert(node* &head,int data){
    //         node* n=new node(data);
    //         // n->data=data;
    //         n->next=head;
    //         head=n;
    //     }
    //     int main(){
    //         node* LL1=NULL;
    //         for(int i=0;i<=10;i++){
    //         pushBack(LL1,i);
    //         }
    //         insert(LL1,69);
    //         Display(LL1);
    //         return 0;
    //     }
    //LinkedList
    // class node{
    //     public:
    //     int data;
    //     node* next;
    //  node(int x){
    //         data=x;
    //         next=NULL;
    //     }
    // };
    // void PushBack(node* &head,int data){
    //   node* n= new node(data);
    //   node* current=head;
    //   if(head==NULL){
    //       head=n;
    //       return;
    //   }
    //   while(current->next!=NULL){
    //       current=current->next;
    //   }
    //   current->next=n;
    // }
    // void Display(node* head){
    //     node* current=head;
    //     while(current!=NULL){
    //         cout<<current->data<<"\t";
    //        current= current->next;
    //     }
    //     cout<<endl;
    // }
    // void Insert(node* &head,int data){
    //     node*n=new node(data);
    //     n->next=head;
    //     head=n;
    // }
    // void InsertAtTail(node* &head,int data){
    //     node*n=new node(data);
    //     node*current=head;
    //     while (current->next!=NULL)
    //     {
    //         current=current->next;
    //     }
    //     current->next=n;
        
        
    // }
    // bool Search(node*  head,int key){
    //     node*current=head;
    //     while(current!=NULL){
    //         if(head->data==key){
    //             return true;
    //         }
    //         current=current->next;
    //     }
    //     return false;
    // }
    // // void InsertAtPos(node* &head,int data,int n){
    // //     node*n=new node(data);
    // //     node*current=head;
    // //     if(n==1){
    // //         n->next=head;
    // //     head=n;
    // //     } 
        
    // // }
    // int main(){
    //     // int n;
    //     // cin>>n;
    //     node* LL1=NULL;
    //     for(int i=0;i<=10;i++){
    //       PushBack(LL1,i);
    //     }
    //     Insert(LL1,69);
    //     InsertAtTail(LL1,96);
       
      
    //     Display(LL1);
    //       cout<<Search(LL1,1)<<endl;

    //     return 0;
    // }
    //linkedlist
//     class node{
//         public:
//         int data;
//         node*next;
//             node(int x){
//                 data=x;
//                 next=NULL
//             }
            
//             };
//             void InsertAtTail(node* &head,int data){
//                 node*n=new node(data);
//                 node* temp=head;
//                 if(head==NULL){
//                     head=n;
//                     return;
//                 }
//                 while(temp->next!=NULL){
//                     temp=temp->next;
//                 }
//                 temp->next=n;
//             }
// void Display(node* head){
//     node*temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->data;
//     }
//     cout<<endl;
    
// }
// int main(){
//     InsertAtTail(1)
//     return 0;
// }
/////////linked list////
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }
// };
// void PushBack(node* &head,int data){
//     node*n=new node(data);
//     node*current=head;
//     if(head==NULL){
//         head=n;
//         return ;
//     }
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// void InsertAtHead(node* &head,int data){
//     node*n=new node(data);
//     n->next=head;
//     head=n;
// }
// void DelteAtHead(node* &head){
//     node* todelete=head;
//     head=head->next;
//     delete todelete;
// }
// void Deletion(node* &head,int data){
//     node*temp=head;
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         DelteAtHead(head);
//         return;
//     }
//     while(temp->next->data!=data){
//         temp=temp->next;
//     }
//     node* Todelete= temp->next;
//     temp->next=temp->next->next;
//     delete Todelete;
// }

// void InsertAtTail(node* &head,int data){
//     node* n=new node(data);
//     node*current=head;
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// node* Reverse(node* &head){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next= prevptr;
//         prevptr= currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
// } 
// node*ReverseByRecursion(node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;     
//     }
//     node* newhead=ReverseByRecursion(head->next);
//     head->  next->next=head;
//     head->next=NULL;
//     return newhead;
// }
// node* ReverseKNodes(node* &head,int k){
// node* prevptr=NULL;
// node* currptr=head;
// node* nextptr;
// int count=0;
// while(currptr!=NULL && count<k){
//     nextptr=currptr->next;
//     currptr->next=prevptr;
//     prevptr=currptr;
//     currptr=nextptr;
//     count++;
// }
// if(nextptr!=NULL){
// head->next=ReverseKNodes(nextptr,k);
// }
// return prevptr;
// }
//     void display(node* &head){
//         node*current=head;
//         while(current!=NULL){
//             cout<<current->data<<"->";
//             current=current->next;
//         }
//         cout<<"NULL"<<endl;
//     }
//     int main(){
//         node* LL1=NULL;
//         for(int i=0;i<=10;i++){
//             PushBack(LL1,i);
//         }
//         InsertAtTail(LL1,69);
//     //    InsertAtHead(LL1,6969);
//   //      Deletion(LL1,1);
// //        DelteAtHead(LL1);
//         display(LL1);
//     // node* newhead=   ReverseByRecursion(LL1);
//       //  display(newhead);
        
//         node* newhead=ReverseKNodes(LL1,2); 
//         display(newhead);
//         return 0;
//     }

///linked List///
// class node{
// public:
// int data;
// node* next;
// node(int x){
//     data=x;
//     next=NULL;
// }
// };
// void PushBack(int data, node* &head){
//     node*n=new node(data);
//     node* current=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// void InsertAtHead(node* &head,int data){
//     node* n=new node(data);
//     n->next=head;
//     head=n;
// }
// void InsertAtTail(node* &head,int data){
//     node*n=new node(data);
//     node*current=head;
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// node* Reverse(node* &head){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
//     while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr;
//         prevptr= currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
// }
// void ReverseByRecursion(node* &head){
//     if(head==NULL ){
//         return ;
//     }
//   ReverseByRecursion(head->next);
//     // head->next->next=head;
//     // head->next=NULL;
// cout<<head->datb  a<<"\n";
//     //return newhead;
// }
// node* ReverseKNodes(node* &head,int k){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
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
// void DeleteAtHead(node* &head){
//     node* todelete=head;
//     head=head->next;
//     delete todelete;
// }
// void Display(node* &head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;

// }
// int main(){
//     node* LL1=NULL;
//     for(int i=0;i<=10;i++){
//     PushBack(i,LL1);
//     }
//     InsertAtHead(LL1,69);
//     InsertAtTail(LL1,69);   
//   Display(LL1);
//   node* newhead=Reverse(LL1);
//   Display(newhead);
// //   node* newhead1=ReverseByRecursion(LL1);
//  ReverseByRecursion(LL1);
//   Display(LL1);
// //   ReverseKNodes(newhead1,3);
// //   Display(newhead1);
// //   DeleteAtHead(newhead1);
// //   Display(newhead1);
//   return 0;
// }
///linked list//
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }

// };
// void PushBack(node* &head,int data){
//     node*n=new node(data);
//     node*temp=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// node* Reverse(node* &head){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
//     while (currptr!=NULL)
//     {
//         nextptr=currptr->next;
//         currptr->next=prevptr
//         prevptr=currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
    
// }
// //detect cycle
// //floyd's algo
// void makeCycle(node* &head , int pos){
//     node* temp=head;
//     node* startNode;
//     int count=1;
//     while (temp->next!=NULL)
//     {
//         if(count==pos){
//             startNode=temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next=startNode;
    
// }
// bool detectCycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){

//     slow=slow->next;
//     fast=fast->next->next;
//     if(fast==slow){
//         return true;
//     }
//     }
//     return false;
// }
// //remove cyclle
// void removeCycle( node* &head){
//     node* slow=head;
//     node* fast=head;
//     do
//     {
//         slow=slow->next;
//         fast=fast->next;
//     } while (slow!=fast);
//     fast=head;
//     while (slow->next!=fast->next)
//     {
//         slow=slow->next;
//         fast=fast->next;
//     }
//     slow->next=NULL;
    
// }

// void display(node* &head){
//     node* temp=head;
//     while(temp!=NULL){
// cout<<temp->data<<"->";
// temp=temp->next;
//     }
//     cout<<"NULL";
// }


// int main(){
//     node* LL1=NULL;
//     for(int i=0;i<=5;i++){
//     PushBack(LL1,i);
//     }
//     makeCycle(LL1,3);
//     cout<<detectCycle(LL1)<<endl;
//     removeCycle(LL1);
   
//     display(LL1);

//     return 0;
// }

//////Linked List////
// class node{
// public:
// int data;
// node* next;
// node(int x){
//     data=x;
//     next=NULL;
// }
// };
// void pushBack(node* &head, int data){
//     node* n= new node(data);
//     node* current=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(current->next!=NULL){
//         current=current->next;
//     }
//     current->next=n;
// }
// void InsertAtHead(node* &head, int data){
//     node* n=new node(data);
//     n->next=head;
//     head=n;
//     }
//     void InsertAtTail(node* &head, int data){
//         node*n=new node(data);
//         node* current=head;
//         while(current->next!=NULL){
//             current=current->next;
//         }
//         current->next=n;
//     }
//     void DeleteAtHead(node* &head){
//         node* ToDelete=head;
//         head=head->next;
//         delete ToDelete;
//     }
//     void DeleteAtTail(node* head){
//        while(head->next->next!=NULL){
//            head=head->next;
//        }
//         head->next= NULL;
//     }
//     node* Reverse(node* &head){
//         node* prevptr=NULL;
//         node* currptr=head;
//         node* nextptr;
//         while(currptr!=NULL){
//             nextptr=currptr->next;
//             currptr->next=prevptr;

//             prevptr=currptr;
//             currptr=nextptr;
//         }
//         return prevptr;
//     }
//     void ReverseRecursion(node* &head){
//         if(head==NULL){
//             return;
//         }
//         ReverseRecursion(head->next);
//         cout<<head->data<<"\t";
//     }
//     node* ReverseKNodes(node* &head,int k){
//         node* prevptr=NULL;
//         node* currptr=head;
//         node* nextptr;
//         int count=0;
//         while(currptr!=NULL && count<k){
//             nextptr= currptr->next;
//             currptr->next = prevptr;
//             prevptr=currptr;
//             currptr=nextptr;
//             count++;
//         }
//         if(nextptr!=NULL){
//             head->next=ReverseKNodes(nextptr,k);
//         }
//         return prevptr;
//     }
// void Display(node* &head){
//     node* current=head;
//     while(current!=NULL){
//         cout<<current->data<<"->";
//         current=current->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main(){
//     node* LL1=NULL;
//     for(int i=0;i<=10;i++){
//         pushBack(LL1,i);
//     }
//     Display(LL1);
//     InsertAtHead(LL1,69);
//     Display(LL1);
//     DeleteAtHead(LL1);
//     Display(LL1);
//     InsertAtTail(LL1,69);
//     Display(LL1);
//     DeleteAtTail(LL1);
//     Display(LL1);
//   node*LL2= Reverse(LL1);
//     Display(LL2 );
//     ReverseKNodes(LL1,29);
//     // node* LL3= ReverseRecursion(LL2);
//     // Display(LL3);
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int maxNo=INT_MIN;
// int minNo=INT_MAX;
// for(int i=0;i<n;i++){
//     maxNo=max(maxNo,arr[i]);
//     minNo=min(minNo,arr[i]);
// }
// cout<<maxNo<<" "<<minNo<<endl;

//     return 0;
// }

///linkedList//
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data=x;
//         next=NULL;
//     }

// };
// void PushBack(node* &head,int data){
//     node* n= new node(data);
//     node*temp=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void InsertAtHead(node* &head,int data){
//     node*n=new node(data);
//     n->next=head;
//     head=n;
// }
// void InsertAtTail(node* &head,int data){
//     node* n=new node(data);
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void DeleteAtHead(node* &head){
//     node* toDelete= head;
//     head=head->next;
//     delete toDelete;
// }
// void DeleteAtTail(node* &head){
//     while (head->next->next!=NULL)
//     {
//         head=head->next;
//     }
//     head->next= NULL;
    
// }
// void makeCycle(node* &head,int pos){
// node* curr=head;
// node* startNode;
// int count=1;
// while (curr->next!=NULL)
// {
//     if(count==pos){
//         startNode=curr;
//     }
//     curr=curr->next;
//     count++;
// }
// curr->next=startNode;

// }
// bool detectCycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     while (fast!=NULL && fast->next!=NULL)
//     {
//         fast=fast->next->next;
//         slow=slow->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
    
// }
// void removeCycle(node* &head){
//     node* slow=head;
//     node*fast=head;
//     do
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     } while (slow!=fast);
//     fast=head;
//     while(slow->next!=fast->next){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     slow->next=NULL;
    
// }
// void Display(node* &head){
//     node* temp=head;
//     while (temp!=NULL)
//     {
//        cout<<temp->data<<"->";
//        temp=temp->next;
//     }

//     cout<<"NULL";
// }
// int main(){
//     node* LL1=NULL;
//     for (int  i = 0; i < 10; i++)
//     {
//         PushBack(LL1,i);
//     }
//     Display(LL1);
//     cout<<endl;
// //  InsertAtHead(LL1,69);
// //  Display(LL1);
// //  cout<<endl;
// //  InsertAtTail(LL1,69);
// //  Display(LL1);
// //  cout<<endl;
// //  DeleteAtHead(LL1);
// //  Display(LL1);
// //  cout<<endl;
// //  DeleteAtTail(LL1);   
// //  Display(LL1);
//  makeCycle(LL1,5);
//  cout<<detectCycle(LL1)<<endl;
// removeCycle(LL1);
//  cout<<detectCycle(LL1)<<endl;
//  Display(LL1);
//     return 0;
// }
//ArrayRevison
//MaxTillI
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         mx= max(mx,arr[i]);
//     }
//     cout<<mx<<endl;
//     return 0;
// }
///revrseARRAY
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         int temp=arr[s];
//         arr[s]=arr[e];
//         arr[e]=temp;
//         s++;
//         e--;
//     }
//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//