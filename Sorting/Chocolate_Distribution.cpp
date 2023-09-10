#include <bits/stdc++.h>
using namespace std;

int minimumChocolates(int *a,int n,int m){
    sort(a,a+n);
    int minDiff=INT16_MAX,diff;
    for(int i=0;i<=n-m;i++){
        diff=a[i+m-1]-a[i];
        if(minDiff>diff){
            minDiff=diff;
        }
    }
    return minDiff;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    cout<<minimumChocolates(a,n,m)<<endl;
}