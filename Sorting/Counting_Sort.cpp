#include <bits/stdc++.h>
using namespace std;

void f(int a[],int n,int k){
    int count[k]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<n;i++){
        count[i]=count[i-1]+count[i];
    }
    int output[n];
    for(int i=0;i<n;i++){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
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
    int k;
    cin>>k;
    f(a,n,k);
}