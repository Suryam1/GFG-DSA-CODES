#include <bits/stdc++.h>
using namespace std;

void f(int a[],int l,int h,int p){
    int temp[h-l+1],j=0;
    for(int i=l;i<=h;i++){
        if(a[i]<=a[p]){
            temp[j]=a[i];
            j++;
        }
    }
    for(int i=l;i<=h;i++){
        if(a[i]>a[p]){
            temp[j]=a[i];
            j++;
        }
    }
    for(int i=l;i<=h;i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p;
    cin>>p;
    f(a,0,n-1,p);
}