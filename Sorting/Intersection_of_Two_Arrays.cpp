#include <bits/stdc++.h>
using namespace std;

void f(int a[],int n,int b[],int m){
    int i=0,j=0;
    int temp;
    while(i<n&&j<m){
        if(a[i]==b[j]&&temp!=a[i]){
            cout<<a[i]<<" ";
            temp=a[i];
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    f(a,n,b,m);
}