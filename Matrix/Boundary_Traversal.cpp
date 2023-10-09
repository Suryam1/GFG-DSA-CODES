#include <bits/stdc++.h>
using namespace std;

void f(int a[][100],int n,int m){
    int rs=0,re=n-1,cs=0,ce=m-1;
    for(int i=cs;i<=ce;i++){
        cout<<a[rs][i]<<" ";
    }
    rs++;
    for(int i=rs;i<=re;i++){
        cout<<a[i][ce]<<" ";
    }
    ce--;
    for(int i=ce;i>=cs;i--){
        cout<<a[re][i]<<" ";
    }
    re--;
    for(int i=re;i>=rs;i--){
        cout<<a[i][cs]<<" ";
    }
    cs++;
    cout<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    f(a,n,m);
}