#include <bits/stdc++.h>
using namespace std;

void f(int a[], int n,int x){
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(a[m]<x){
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if(a[m]==x){
            m++;
        }
        else{
            swap(a[m],a[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    f(a,n,x);
}