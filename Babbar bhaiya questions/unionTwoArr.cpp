#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int arr[m],arr1[n];
    unordered_map<int , int > map;
    for (int  i = 0; i < m; i++)
    {
        cin>>arr[i];
        map[arr[i]]++;
    }
    for (int  i = 0; i < m; i++)
    {
        cin>>arr1[i];
        map[arr1[i]]++;
    }
    cout<<map.size()<<endl;
    return 0;
}