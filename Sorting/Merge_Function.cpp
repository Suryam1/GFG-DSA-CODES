#include <bits/stdc++.h>
using namespace std;

void f2(int a[],int n,int b[],int m){
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

void f(int a[],int n,int l,int m,int h){
    int n1=(m-l+1);
    int n2=(h-m);
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[n1+i];
    }
    f2(left,n1,right,n2);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l,m,h;
    cin>>l>>m>>h;
    f(a,n,l,m,h);
}