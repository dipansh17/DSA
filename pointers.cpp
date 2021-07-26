#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    /*
     int a=10;
     int *aptr;
     aptr=&a;
     cout<<&a<<" "<<aptr<<" "<<*aptr<<endl;
     *aptr=100;
     cout<<a;
     aptr++;
     cout<<aptr<<endl;*/
     /*
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++ ){
         cin>>arr[i];
     }
     for(int i=0;i<n;i++){
         cout<<*(arr+i)<<endl;
         ////arr++;(illegal)
     }*/
     ///ptr to ptr
     int a=10;
     int b=20;
     int *aptr=&a;
     int *bptr=&b;   
     swap(&a,&b);
     cout<<a<<" "<<b<<endl;
         return 0;
}