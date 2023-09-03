#include <bits/stdc++.h>
using namespace std;

int f(int a[],int n){
    int m=a[0],sum=a[0];
    for(int i=1;i<n;i++){
        if(m<a[i]){
            m=a[i];
        }
        sum=sum+a[i];
    }
    int c=m+1;
    int norep=n-c;
    int res=sum-((m*(m+1))/2);
    if(res<=m){
        return res;
    }
    else{
        return res/norep;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<f(a,n)<<endl;
}