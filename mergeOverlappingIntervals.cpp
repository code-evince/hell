#include<bits/stdc++.h>
using namespace std;

struct Interval{
    int start;
    int end;
};

bool myComp(Interval a,Interval b){
    if(a.start==b.start){return (a.end<b.end);}
    return (a.start<b.start);
}

void overlapIntervals(Interval arr[],int n){

    sort(arr,arr+n,myComp);
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i].start<=arr[res].end){
            arr[res].start = min(arr[res].start,arr[i].start);
            arr[res].end = max(arr[res].end,arr[i].end);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }

    for(int i=0;i<=res;i++){
        cout<<arr[i].start<<","<<arr[i].end<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    Interval arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].start>>arr[i].end;
    }

    overlapIntervals(arr,n);


}
