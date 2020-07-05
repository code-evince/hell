#include<bits/stdc++.h>
using namespace std;

int maxGuests(int arr[],int dep[],int n){
    int i=1,j=0,res=1,curr=1;
    sort(arr,arr+n);
    sort(dep,dep+n);
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res=max(curr,res);

    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }
    cout<<maxGuests(arr,dep,n);
}