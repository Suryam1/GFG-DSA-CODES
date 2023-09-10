#include <bits/stdc++.h>
using namespace std;

void f(int a[],int n,int b[],int m){
    int c[n+m];
    int x=0;
    int y=0;
    int z=0;
    while(x<n&&y<m){
        if(a[x]<b[y]){
            c[z]=a[x];
            x++;
        }
        else{
            c[z]=b[y];
            y++;
        }
        z++;
    }
    while(x<n){
        c[z]=a[x];
        x++;
        z++;
    }
    while(y<n){
        c[z]=b[y];
        y++;
        z++;
    }
    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    f(a,n,b,m);
}