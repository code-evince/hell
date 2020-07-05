#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n, int m){
    if(m>n){return -1;}
    sort(arr,arr+n);
    int mini = arr[m-1]-arr[0];
    for(int i =1;i<n-m+1;i++){
        mini = min(mini,arr[i+m-1]-arr[i]);

    }
    return mini ;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<minDiff(arr,n,m)<<endl;
}

