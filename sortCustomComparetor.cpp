#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};

bool myComp(Point a,Point b){
    if(a.x==b.x){return (a.y<b.y);}
    return (a.x<b.x);
}
int main(){
    Point arr[]={{1,3},{4,5},{7,8},{0,0},{1,2}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,myComp);
    for(auto i:arr){
        cout<<i.x<<","<<i.y<<" ";
    }

    
}