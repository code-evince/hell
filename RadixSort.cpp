#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[],int n, int exp){
    int count[10];
    for(int i=0;i<10;i++){
        count[i]=0; 

    }
    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){            // goin in reverse to mantain the stability of the the sorting
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;

    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

}

void RadixSort(int arr[], int n){
    int mx = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx)
            mx = arr[i];
    for(int exp=1;mx/exp>0;exp*=10){
        countSort(arr,n,exp);
    }        

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    RadixSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}