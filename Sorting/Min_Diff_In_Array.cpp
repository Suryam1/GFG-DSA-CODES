#include <bits/stdc++.h>
using namespace std;

int f(int a[],int n){
    sort(a,a+n);
    int  min=INT16_MAX;
    for(int i=n-1;i>0;i--){
        if(min>(a[i]-a[i-1])){
            min=a[i]-a[i-1];
        }
    }
    return min;
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