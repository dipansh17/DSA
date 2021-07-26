#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int curlen=0 , maxLen=0;
    int st=0;
    int maxst=0;
    while(1){
        if(arr[i]==' '|| arr[i]=='\0'){
            if(curlen>maxLen){
                maxLen=curlen;
                maxst=st;
            }
            curlen=0;
            st=i+1;
        }
        else
        curlen++;
        if(arr[i]=='\0'){
        break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i+maxst]<<endl;
    }
return 0;
}