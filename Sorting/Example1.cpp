#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
        v.push_back(x);
    }

    sort(a,a+n);
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

}