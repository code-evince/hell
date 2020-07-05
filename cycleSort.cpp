#include<bits/stdc++.h>
using namespace std;
void cycleSort(int arr[],int n){
    for(int cs=0; cs < n-1; cs++){
        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1; i<n; i++){
            if(arr[i]<item){
                pos++;
            } 
        }
        swap(item,arr[pos]);

        while(cs!=pos){
            pos = cs;
            for(int i=cs+1;i<n;i++){
                if(arr[i]<item){
                    pos++;

                }
            }
            swap(arr[pos],item); 
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
    cycleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

}