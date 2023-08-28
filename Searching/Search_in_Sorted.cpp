#include <bits/stdc++.h>
using namespace std;

int f(int a[],int n,int x){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[l]<a[mid]){
            if(x>=a[l]&&x<a[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(x>a[mid]&&x<a[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    return -1;
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
    cout<<f(a,n,x)<<endl;
}