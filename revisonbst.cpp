#include<bits/stdc++.h>
using namespace std;
// class Node{
// public:
// int data;
// Node* right=NULL;
// Node*left=NULL;
// Node(int x){
//     data=x;
//     left=NULL;
//     right=NULL;
// }
// };
// void preorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//  cout<<root->data<<" ";   
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     preorder(root);
//     // cout<<endl;
//     // inorder(root);
//     // cout<<endl;
//     // postorder(root);
//     return 0;
// }
// class Node{
//     public:
//     int data;
//     Node* left=NULL;
//     Node* right=NULL;
//     Node(int x){
//         data=x;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// Node* buildTree(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=preorder[idx];
//     idx++;
//     Node* node=new node(curr);
//     if(start==end){
//         return node;
//     }
//     int pos=search(inorder,start,end,curr);
//     node->left=buildTree(preorder,inorder,start,pos-1);
//     node->right=buildTree(preorder,inorder,pos+1,end);
//     return node;
// }
// int main(){
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};
//     Node* root=buildTree(preorder,inorder,0,4);
// }
///04-10-2021
// class Node{
//     public:
//     int data;
//     Node* left=NULL;
//     Node* right=NULL;
//     Node(int x){
//         data=x;
//         left=NULL;
//         right=NULL;
//     }
// };
// void preorder(Node* root){
// if(root==NULL){
//     return;
// }
// cout<<root->data<<" ";
// preorder(root->left);
// preorder(root->right);
// }
// void inorder(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     postorder(root);
//     return 0;
// }
//preorder->inorder
// class Node{
// public:
// int data;
// Node* left=NULL;
// Node* right=NULL;
// Node(int x){
//     data=x;
//     left=NULL;
//     right=NULL;
// }
// };
// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// Node* buildTree(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=preorder[idx];
//     idx++;
//     Node* node=new Node(curr);
//     if(start==end){
//         return node;
//     }
//     int pos=search(inorder,start,end,curr);
//     node->left=buildTree(preorder,inorder,start,pos-1);
//     node->right=buildTree(preorder,inorder,pos+1,end);
//     return node;
// }
// void inorderPrint(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// int main(){
// int preorder[]={1,2,4,3,5};
// int inorder[]={4,2,1,5,3};
 
//  Node* root=buildTree(preorder,inorder,0,4);
//  inorderPrint(root);
 
//     return 0;
// }
//postorder->inorder
// class Node{
//     public:
//     int data;
//     Node* left=NULL;
//     Node* right=NULL;
//     Node(int x){
//         data=x;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int inorder[],int start,int end,int x){
//     for(int i=start;i<=end;i++){
//     if(inorder[i]==x){
//         return i;
//     }
//     }
//     return -1;
// }
// Node* buildTree(int postorder[],int inorder[],int start,int end){
// static int idx=4;
// if(start>end){
//     return NULL;
// }
// int x=postorder[idx];
// idx--;
// Node* curr=new Node(x);
// if(start==end){
//     return curr;
// }
// int pos=search(inorder,start,end,x);
// curr->right=buildTree(postorder,inorder,pos+1,end);
// curr->left=buildTree(postorder,inorder,start,pos-1);
// return curr;
// }
// void inorderPrint(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// int main(){
//     int postorder[]={4,2,5,3,1};
//     int inorder[]={4,2,1,5,3};
//     Node* root=buildTree(postorder,inorder,0,4);
//     inorderPrint(root);
    
//     return 0;
// }
//levelOrderTransversal
// class Node{
// public:
// int data;
// Node* left=NULL;
// Node* right=NULL;
// Node(int x){
//     data=x;
//     left=NULL;
//     right=NULL;
// }
// };
// void printlevelOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         Node* node=q.front();
//         q.pop();
//         if(node!=NULL){
//             cout<<node->data<<" ";
        
//         if(node->left){
//             q.push(node->left);
//         }
//         if(node->right){
//             q.push(node->right);
//         }

//     }
//     else if(!q.empty()){
//         q.push(NULL);
//     }
// }
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//  printlevelOrder(root);
    
//     return 0;
// }
//count all nodes in bt
// class Node{
//     public:
//     int data;
//     Node* left=NULL;
//     Node* right=NULL;
//     Node(int x){
//         data=x;
//         left=NULL;
//         right=NULL;
//     }
// };
// int countNodes(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return(countNodes(root->left)+countNodes(root->right)+1);
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//  cout<<countNodes(root);
//     return 0;
// }
//sum of Nodes kth level 
// class Node{
//     public:
//     int data;
//     Node* left=NULL;
//     Node* right=NULL;
//     Node(int x){
//         data=x;
//         left=NULL;
//         right=NULL;
//     }
// };
// void printLevelOrder(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         Node* node=q.front();
//         q.pop();
//         if(node!=NULL){
//             cout<<node->data<<" ";
//         if(node->left){
//             q.push(node->left);
//         }
//         if(node->right){
//             q.push(node->right);
//         }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }

//     }
// }
// int sumAtK(Node* root,int K){
//     if(root==NULL){
//         return -1;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     int level=0;
//     int sum=0;
//     while(!q.empty()){
//         Node* node=q.front();
//         q.pop();
//         if(node!=NULL){
//             if(level==K){
//                 sum+=node->data;
//             }
//             if(node->left){
//                 q.push(node->left);
//             }
//             if(node->right){
//                 q.push(node->left);
//             }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//             level++;
//         }
//     }
//     return sum;
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);

// cout<<sumAtK(root,2);
//     return 0;
// }
// class Node{
//     public:
//     int data;
//     Node*left=NULL;
//     Node*right=NULL;
//     Node(int x){
//         left=NULL;
//         right=NULL;
//         data=x;
//     }
// };
// void preorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<endl;
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     Node* root= new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     postorder(root);
//     return 0;
// }

// class Node{
//     public:
//     int data;
//     Node* left=NULL;
//     Node* right=NULL;
// Node(int x){
//     data=x;
//     left=NULL;
//     right=NULL;
// }
// };
// int search(int inorder[],int start,int end, int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// Node* buildTree(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=preorder[idx];
//     idx++;
//     Node* node=new Node(curr);
//     if(start==end){
//         return node;
//     }
//     int pos=search(inorder,start,end,curr);
//     node->left=buildTree(preorder,inorder,start,pos-1);
//     node->right=buildTree(preorder,inorder,pos+1,end);
//     return node;
// }
// void inorderPrint(Node* root){
//     if(root==NULL){
//         return;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";  
//     inorderPrint(root->right);
// }
// int main(){
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};

//     Node* root=buildTree(preorder,inorder,0,4);
//     inorderPrint(root);

//     return 0;
// }
// class Node{
//     public:
//     int data;
//     Node* left=NULL;
//     Node* right=NULL;
//     Node(int x){
//         left=NULL;
//         right=NULL;
//         data=x;
//     }
// };
// int search(int inorder[],int start,int end,int x){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }
// Node* buildTree(int postorder[],int inorder[],int start,int end){
//     static int idx=4;
// if(start>end){
//     return NULL;
// }
// int x=postorder[idx];
// idx--;
// Node* curr=new Node(x);
// if(start==end){
//     return curr;
// }
// int pos=search(inorder,start,end,x);
// curr->right=buildTree(postorder,inorder,pos+1,end);
// curr->left=buildTree(postorder,inorder,start,pos-1);
// return curr;
// }
// void inorderPrint(Node* root){
//     if(root==NULL){
//         return ;
//     }
//     inorderPrint(root->left);
//     cout<<root->data<<" ";
//     inorderPrint(root->right);
// }
// int main(){
//     int postorder[]={4,2,5,3,1};
//     int inorder[]={4,2,1,5,3};
//     Node* root=buildTree(postorder,inorder,0,4);
//     inorderPrint(root);
// return 0;

// }
//level order
class Node{
public:
int data;
Node* left=NULL;
Node* right=NULL;
Node(int x){
    data=x;
    left=NULL;
    right=NULL;
}
};
void printLevel(Node* root){
    if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node!=NULL){
            cout<<node->data<<" ";
        
        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
    }
    else if(!q.empty()){
        q.push(NULL);
    }

}
}
int main(){
        Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    // root->right->left=new Node(6);
    root->right->right=new Node(7);
 printLevel(root);
    return 0;
}