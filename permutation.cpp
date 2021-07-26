#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    cin>>i;
    sort(a.begin(),a.end());
    do{
        ans.push_back(nums);
    }
    while(next_permutation(a.begin(),a.end()));
    for(auto v:ans){
        for(auto i : v)
        cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}