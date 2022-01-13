#include<bits/stdc++.h>
using namespace std;
#define ll long long
//////////////////SQUARE ROOT/////////////
int main(){
    // int n=17+3;
    // // cin>>n;
    // int preci=2;
    // float ans=1,curr_pre=0,inc=1;
    // while(curr_pre<=preci){
    //     while(ans*ans<=n){
    //         ans=ans+inc;
    //     }
    //     ans=ans-inc;
    //     inc=inc/10;
    //     curr_pre++;
    // }
    // cout<<ans<<endl;
// post and pre
// int x=2;
// int y=++x;
// cout<<x<<y;
// // int a=5;
// int mask=1;
// int ans=a&mask;
// int ans1=a | mask;
// cout<<ans<<endl;//0101,001 => 0001
// cout<<ans1;//0101,0001=> 0101
    // int a=1;
    // cout<<(a>>1);
    // int i=1;
    // for(; i<5;){
    //     cout<<i;
    // }
///reverse a number
ll int n=1234;                   
// while(n>0){
//     cout<<n%10<<endl;
//     n/=10;
// }
int sum=0;
while(n>0){
    sum*=10;
    sum+=n%10;
    n/=10;
}
cout<<sum<<endl;
    return 0;
}      