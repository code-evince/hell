#include<bits/stdc++.h>
using namespace std;

void Union(int a[], int b[], int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        if(a[i]<b[j]){cout<<a[i++]<<" ";}
        else if(a[i]>b[j]){cout<<b[j++]<<" ";}
        else{cout<<a[i++]<<" ";j++;}
    }
    
    while(i<n){
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        else{cout<<a[i++]<<" ";}
    }
    while(j<m){
        if(j>0 && b[j]==b[j-1]){j++;continue;}
        else{cout<<b[j++]<<" ";}
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    Union(a,b,n,m);
}