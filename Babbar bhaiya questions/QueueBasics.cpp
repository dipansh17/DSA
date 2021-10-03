#include<bits/stdc++.h>
// 2 pointer-> front &back
// enqueue->push
// dequeue->pop
// peek->front ki value
using namespace std;
#define n 20
class queueB {
    int* arr;
    int front;
    int back;
    public:
    queueB() {
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"No Element in Queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"No Element in Queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            cout<<"No Element in Queue"<<endl;
            return 1;
        }
        return 0;
    }
};
int main(){
    queueB q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}