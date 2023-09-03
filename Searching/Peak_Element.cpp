#include <bits/stdc++.h>
using namespace std;

int f(int a[],int n){
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if((mid==0||a[mid-1]<=a[mid])&&(mid==n-1||a[mid+1]<=a[mid])){
            return a[mid];
        }
        else if(mid!=0&&a[mid]<a[mid+1]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
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