#include<bits/stdc++.h>
using namespace std;

void separate(int arr[], int n){
    int i =-1,j=n;
    while(true){
        do{i++;}while(arr[i]<0);

        do{j--;}while(arr[j]>0);

        if(i>=j){
            return;
        }

        swap(arr[i],arr[j]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    separate(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}