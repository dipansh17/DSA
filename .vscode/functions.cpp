#include<bits/stdc++.h>
using namespace std;
/*int sum(int n){
    int ans=0;
    for(int i=0;i<=n;i++){
        ans += i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);

    return 0;
}*/
bool triplet(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    }
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(n==0){
        cout<<"pythagorian triplet";
    }
    else{
        cout<<"not a pythagorian triplet";
    }
    return 0;
}