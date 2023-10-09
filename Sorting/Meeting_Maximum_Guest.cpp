#include <bits/stdc++.h>
using namespace std;

int f(int a[],int b[],int n){
    sort(a,a+n);
    sort(b,b+n);
    int i=1,j=0,curr=1,res=1;
    while(i<n&&j<n){
        if(a[i]<=b[j]){
            i++;
            curr++;
            res=max(curr,res);
        }
        else{
            j++;
            curr--;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<f(a,b,n)<<endl;
}