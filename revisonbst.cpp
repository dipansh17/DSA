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
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* node=new node(curr);
    if(start==end){
        return node;
    }
    int pos=search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);
    node->right=buildTree(preorder,inorder,pos+1,end);
    return node;
}
int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildTree(preorder,inorder,0,4);
}