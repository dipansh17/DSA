#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current=0;///////to store sum
    for(int i=0;i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current += arr[j];
            cout<<current<<" ";

        }
    }
    return 0;
}