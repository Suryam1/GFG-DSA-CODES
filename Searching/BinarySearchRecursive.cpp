#include <bits/stdc++.h>
using namespace std;

int f(int a[],int low,int high,int x){
    if(low>high){
        return -1;
    }

    int mid = (low + high)/2;
    if(a[mid]==x){
        return mid;
    }
    else if(a[mid]>x){
        f(a,low,mid-1,x);
    }
    else{
        f(a,mid+1,high,x);
    }
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
    cout<<f(a,0,n-1,x)<<endl;
}