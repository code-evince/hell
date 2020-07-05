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
    
    return i+1;                           // the index of the pivot
}
void Quicksort(int arr[],int l, int h){  // tail recursion, all work is done in the divide step(partition algorithm aclually sorts)
    if(l<h){                               // don't sort 1 element
        int p = partition(arr,l,h);
        Quicksort(arr,l,p-1);            // the pivot is already at the right position in the arr,you must not include it now, otherwise you'll enter into infinte loop 
        Quicksort(arr,p+1,h);             // because everytime do partition that same element remains the pivot and nothing really happens(l<h never breaks)
    }
}
//This is the trivial Quicksort algorithm based on Lomuto Partition
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}