#include <bits/stdc++.h>
using namespace std;

void f(int a[][100],int n,int m,int x){
    int i=0,j=m-1;
    while(i<=n&&j>=0){
        if(a[i][j]==x){
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(a[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"Not Found"<<endl;
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
    int x;
    cin>>x;
    f(a,n,m,x);
}