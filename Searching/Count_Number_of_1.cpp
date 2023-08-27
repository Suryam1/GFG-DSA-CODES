#include <bits/stdc++.h>
using namespace std;

int firstOcc(int a[],int n,int x){
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

int countOne(int a[],int n,int x){
    int first=firstOcc(a,n,1);
    if(first==-1){
        return 0;
    }
    return n-first;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countOne(a,n,1)<<endl;
}