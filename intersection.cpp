#include<bits/stdc++.h>
using namespace std;

void intersection(int a[],int b[],int n,int m){
    int i = 0,j=0;
    while(i<n && j<m){
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        if(a[i]<b[j]){i++;}
        else if(a[i]>b[j]){j++;}
        else{cout<<a[i]<<" ";i++;j++;}

    }
}

int main(){
    int n,m;
    cout<<"Enter the size of sorted array 1 : ";
    cin>>n;
    cout<<"Enter the size of sorted array 2 : ";
    cin>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    intersection(a,b,n,m);

}