#include <bits/stdc++.h>
using namespace std;


int Binary(int a[],int start,int end,int x){
    int low=start,high=end;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int getAns(int a[],int n,int x){
    if(a[0]==x){
        return 0;
    }
    int i=1;
    while(a[i]<x){
        i=i*2;
    }
    if(a[i]==x){
        return i;
    }
    return Binary(a,i/2,i,x);
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
    cout<<getAns(a,n,x)<<endl;
}