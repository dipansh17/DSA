#include<iostream>
using namespace std;
int main(){
    char arr[100]="Subscribe to my channel (link in bio!!)";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}