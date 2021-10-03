    #include<bits/stdc++.h>
    using namespace std;
    void Merge(int arr[],int si,int mid,int ei){
        int n=mid-si+1;  int m=ei-mid;
        int left[n]; int right[m];///define size of left and right temp arr
        for(int i=0;i<n;i++){
            left[i]=arr[si+i];
        }
        for(int j=0;j<m;j++){
          right[j]= arr[mid+1+j]; 
        }
        int i=0,j=0,k=si;
        while(i<n && j<m){  ///copying to main array by comparing
        if(left[i]<=right[j]){
            arr[k++]=left[i++];
        }
        else
        arr[k++]=right[j++];
        }
        while(i<n)  // copying remailning arrays to main array
            arr[k++]=left[i++];
            while(j<m)
            arr[k++]=right[j++];
        
    }
    
    void MergeSort(int arr[],int si,int ei){
        if(si>=ei){  //base condition
        return;
        }
        int mid=(si+ei)/2;
        MergeSort(arr,si,mid);
        MergeSort(arr,mid+1,ei);
        Merge(arr,si,mid,ei);

    }
    int main(){
        int arr[6]={69,75,77,88,42,36};
        MergeSort(arr,0,5);
 for(int i=0;i<6;i++){
     cout<<arr[i]<<"\t";
 }
        return 0;
    }