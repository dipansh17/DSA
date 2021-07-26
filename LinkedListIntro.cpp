#include <bits./stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
int search(node* &head,int x)
{
    
    node* current=head;
    for(int pos=0;current!=NULL;pos++)
    {
        if(current->data==x)
        {
            return pos;
        }
        
        current=current->next;
    }
    return -1;
}
void addhead(node* &head,int data)
{
    node* n=new node(data);//new node
    n->next=head;
    head=n;
}
void pushback(node* &head,int data)
{
    node* n=new node(data);
    if(head==NULL)  //base
    {
        head=n;
        return;
    }
    node* current=head;     //for safe side 
    
    while(current->next != NULL) //traverse to last
    {
        current=current->next;
    }
    current->next=n;//put last->next= Jo new node bnai thi
}
void display(node* &head)
{
    node* current=head; //safe side
    while(current!=NULL)        //travese
    {
        cout<<current->data<<"\t";  //printing
        current=current->next;
    }
    cout<<endl;
}
void addAtIdx(node* &head,int data,int idx)
{
    int count=0;
    node* n=new node(data);
    node* current=head;
    while(current->next!=NULL &&  count<idx-1)
    {
                current=current->next;
                count++;
    }
    node* temp=current->next;
    current->next=n;
    n->next=temp;
}
int main()
{
    node* LL1=NULL;
    pushback(LL1,0);
    pushback(LL1,1);
    pushback(LL1,2);
    pushback(LL1,4);
    pushback(LL1,5);
    pushback(LL1,6);
    addAtIdx(LL1,69,3);
    cout<<"\n"<<search(LL1,6969)<<endl;
    display(LL1);

return 0;
}
