#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    //Prime or not
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<"Prime"<<endl;
        }
        if(n%2==0){
            cout<<"composite"<<endl;
        }
        else{
            cout<<"composite"<<endl;
        }
        
    }
    
    return 0;
}