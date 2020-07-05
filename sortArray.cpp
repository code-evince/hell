#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={11,18,4,42,7,59};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr,arr+n, greater<int>());
    for(int x:arr){
        cout<<x<<" ";
    }

}
