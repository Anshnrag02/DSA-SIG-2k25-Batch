#include<bits/stdc++.h>
using namespace std;

vector<int> solver(vector<pair<int,int>>a, int n, int target){
    sort(a.begin(),a.end());
    int i = 0 , j = n-1;
    while(i<j){
        if(a[i].first+a[j].first==target)
            return {a[i].second,a[j].second};
        else if(a[i].first+a[j].first>target)
            j--;
        else
            i++;
    }

    return {};
}

int main(){
    int target;
    int n;
    cin>>n>>target;
    vector<pair<int,int>>a(n);
    for(int  i=0 ; i<n ; ++i){
        cin>>a[i].first;
        a[i].second=i;
    }
    vector<int> ans = solver(a,n,target);
    for(int i = 0 ; i < 2 ; ++i)
        cout<<ans[i]<<" "; 
}
