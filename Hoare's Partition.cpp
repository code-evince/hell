#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int p, int r){
    int pivot = arr[p];
    int i = p-1,j=r+1;
    while(true){
        do{i++;}
        while(arr[i]<pivot);

        do{j--;}
        while(arr[j]>pivot);

        if(i>=j) return j;
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
    int p = 0;
    int r = n-1;
    cout<<partition(arr,p,r)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}