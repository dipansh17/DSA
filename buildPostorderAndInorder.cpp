#include<bits/stdc++.h>
using namespace std;
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
int search(int inorder[],int start,int end,int x){
    for(int i=start;i<=end;i++){
        if(inorder[i]==x){

            return i;
        }
    }
    return -1;
}
Node* buildTree(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    
    if(start>end){
        return NULL;
    }
    int x=postorder[idx];
    idx--;
    Node* curr=new Node(x);
    if(start==end){
        return curr;
    }
    int pos=search(inorder,start,end,x);
    curr->right=buildTree(postorder,inorder,pos+1,end);
    curr->left=buildTree(postorder,inorder,start,pos-1);
    return curr;    

}
void InorderPrint(Node* root){
    if(root==NULL){
        return ;
    } 
    InorderPrint(root->left);
    cout<<root->data<<" ";
    InorderPrint(root->right);
}
int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
//build tree
Node* root=buildTree(postorder,inorder,0,4);
InorderPrint(root);


    return 0;
}