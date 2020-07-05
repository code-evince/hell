#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> list ={1,5,3,8,0,9};
    list.push_back(90);                                //push_back(),pop_back()
    for(int x:list){
        cout<<x<<" ";
    }
    cout<<endl;
    list.pop_back();
    sort(list.begin(),list.end());                // v.begin(),v.end()--> gives end+1
    for(int x:list){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(list.begin(),list.end(),greater<int>());
    for(int x:list){
        cout<<x<<" ";
    }

}