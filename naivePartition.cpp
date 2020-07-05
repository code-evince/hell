#include<bits/stdc++.h>
using namespace std;

void NaivePartition(int arr[],int l, int h,int p){
    int temp[h-l+1],idx=0;
    for(int i=0;i<h;i++){
        if(arr[i]<=arr[p]){temp[idx++]=arr[i];}
    }    
    for(int i =0;i<h;i++){
        if(arr[i]>arr[p]){temp[idx++]=arr[i];}
    }    
    for(int i=0;i<h;i++){
        arr[i]=temp[i];
    }    
}    
int main(){
    int l,h,p;
    cin>>h;
    l=0;
    p = h-1;
    
    int arr[h];
    for(int i=0;i<h;i++){
        cin>>arr[i];
    }
    NaivePartition(arr,l,h,p);
    for(int i=0;i<h;i++){
        cout<<arr[i]<<" ";
    }

}    
