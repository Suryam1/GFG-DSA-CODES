#include <bits/stdc++.h>
using namespace std;

int f1(int a[],int n,int k,int val){
    int c=1;
    int sum=a[0];
    for(int i=1;i<n;i++){
        if(sum+a[i]>val){
            sum=a[i];
            c++;
        }
        else{
            sum=sum+a[i];
        }
    }
    if(c<=k){
        return 1;
    }
    return 0;
}

int f(int a[],int n,int k){
    int begin=a[0],end=a[0];
    int res;
    for(int i=1;i<n;i++){
        if(begin<a[i]){
            begin=a[i];
        }
        end+=a[i];
    }
    while(begin<=end){
        int mid=(begin+end)/2;
        if(f1(a,n,k,mid)){
            res=mid;
            end=mid-1;
        }
        else{
            begin=mid+1;
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
    int k;
    cin>>k;
    cout<<f(a,n,k)<<endl;
}