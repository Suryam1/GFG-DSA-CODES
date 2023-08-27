#include <bits/stdc++.h>
using namespace std;

int first(int a[],int n,int x){
    int res=-1;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            res=mid;
            high=mid-1;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
}

int last(int a[],int n,int x){
    int res=-1;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            res=mid;
            low=mid+1;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
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
    int f,l;
    f=first(a,n,x);
    l=last(a,n,x);
    if(f==-1||l==-1){
        cout<<-1<<endl;
    }
    else{
        cout<<l-f+1<<endl;
    }
}