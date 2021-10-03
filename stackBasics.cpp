#include<bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{
private:
int* arr;
int top;

public:
   Stack(){
        arr=new int[n];
        top=-1;
   }
   void push(int x){
        if(top==n-1){
        cout<<"stack Overflow ho jaega rhnede be";
        return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to POP";
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"NO element in stack";
            return -1;
        }
    return arr[top];
    }
bool empty(){
    return top==-1;
}
    };
    
int main(){
    Stack st;
    for(int i=0;i<4;i++){
        st.push(i);
    }
    cout<<st.Top()<<endl;
   st. pop();
    cout<<st.Top()<<endl;
    st. pop();
    st. pop();
st.empty();
    cout<<st.Top()<<endl;
    
    return 0;

}
