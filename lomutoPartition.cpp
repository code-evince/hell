#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int p, int r){  //here r is the index of last arr element
    int x = arr[r];
    int i = p-1;
    for(int j =p;j<=r-1;j++){
        if(arr[j]<x){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    
    return i+1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<partition(arr,0,n-1)<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}