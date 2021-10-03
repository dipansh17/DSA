#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
int nextgap(int gap){
	    if(gap==1)
	    return 0;
	    return (gap/2+gap%2);
	}
	void merge(int arr1[], int arr2[], int n, int m) {
	    int gap=n+m;
	    int i=0,j=0;
	    for(gap= nextgap(gap);gap>0;gap= nextgap(gap)){
	        for(i=0;i+gap<n;i++){
	            if(arr1[i]>arr1[i+gap])
	            arr1[i]+=arr1[i+gap]-(arr1[i+gap]=arr1[i]);
	            
	        }
	        for(j=(gap>n)?(gap-n):0 ; i<n && j<m;i++,j++){
	            if(arr1[i]>arr2[j]){
	                arr1[i]+=arr2[j]-(arr2[j]=arr1[i]);
	            }
	            if(j<m){
	                for(j=0;j+gap<m;j++){
	                    if(arr2[j]>arr2[j+gap])
	                    arr2[j]+=arr2[j+gap]-(arr2[gap+j]=arr2[j]);
	                
	            }
	        }
	    }
	    
	}
	}
	
};
int main() {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    
    return 0;
} 