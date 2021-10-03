#include<bits/stdc++.h>
using namespace std;
// # define n 20
// // 2 pointer->front & back
// // enqueue->push
// // dequeue->pop
// // peek->front ki value
// class queueB{
//     int* arr;
//     int front;
//     int back;
//     public:
//     queueB(){
//         arr= new int[n];
//         front=-1;
//         back=-1;
//     }
//     void push(int x){
//         if(back==n-1){
//             cout<<"Queue Overflow"<<endl;
//             return;
//         }
//         back++;
//         arr[back]=x;
//         if(front==-1){
//             front++;
//         }
//     }

//     void pop(){
//         if(front==-1 and front>back){
//             cout<<"No Element in Queue"<<endl;
//             return;
//         }
//         front++;
//     }
//     int peek(){
//         if(front==-1 || front>back){
//             cout<<"No element in Queue"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     bool empty(){
//         if(front==-1 || front>back){
//             cout<<"No Element in Queue"<<endl;
//             return 1;
//         }
//         return 0;
//     }
// };
// int main(){
//     queueB q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     cout<<q.peek()<<endl;
//     q.pop();
//         cout<<q.peek()<<endl;
//     q.pop();
//         cout<<q.peek()<<endl;
//     q.pop();
//         cout<<q.peek()<<endl;
//     q.pop();
//         cout<<q.peek()<<endl;
//     q.pop();
//         cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.empty()<<endl;
//     return 0;
// }
// // 2 pointer->front & back
// // enqueue->push
// // dequeue->pop
// // peek->front ki value
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class queueB{
//     node* front;
//     node* back;
//     public:
//     queueB(){
//         front=NULL;
//         back=NULL;
//     }
//     void push(int x){
//         node* n= new node(x);
//         if(front==NULL){
//             back=n;
//             front=n;
//             return;
//         }
//         back->next=n;
//         back=n;
//     }
//  void pop(){
//      if(front==NULL){
//          cout<<"Queue UnderFlow"<<endl;
//          return;
//      }
//      node* todelete=front;
//      front=front->next;
//      delete todelete;
//  }   
//  int peek(){
//      if(front==NULL){
//          cout<<"No Element in Queue"<<endl;
//          return -1;
//      }
//      return front->data;
//  }
// };
// int main(){
//     queueB q;
//     q.push(1);
//     q.push(2);
//      q.push(3);
//     q.push(4);
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     return 0;
// }
// // 2 pointer->front & back
// // enqueue->push
// // dequeue->pop
// // peek->front ki value
class queueB{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topVal=s2.top();
        s2.pop();
        return topVal;
    }

};
int main(){
    queueB q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<" ";
    cout<<q.pop()<<" ";
    cout<<q.pop()<<" ";
    cout<<q.pop()<<" ";
    return 0;

}