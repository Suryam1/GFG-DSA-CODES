#include <bits/stdc++.h>
using namespace std;

void f(int a[],int n){
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(a[m]==0){
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if(a[m]==1){
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
    f(a,n);
}