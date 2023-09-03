#include <bits/stdc++.h>
using namespace std;

pair <int,int> f(int a[],int n){
    pair<int,int>p;
    p.first=-1;
    p.second=-1;
    int low=0,high=n-1;
    int k=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid==0&&a[mid]==a[mid+1]){
          k=a[mid];
          break;  
        }
        else if(a[mid-1]==a[mid]||a[mid]==a[mid+1]){
            k=a[mid];
            break;
        }
        else{
            high=mid-1;
        }
    }
    if(k==0){
        low=0,high=n-1;
        while(low<=high){
        int mid=(low+high)/2;
            if(mid==n-1&&a[mid-1]==a[mid]){
            k=a[mid];
            break;  
            }
            else if(a[mid-1]==a[mid]||a[mid]==a[mid+1]){
                k=a[mid];
                break;
            }
            else{
                low=mid+1;
            }
        }
    }
    if(k==0){
        return p;
    }
    else{
        
    }
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pair<int,int> p=f(a,n);
    cout<<p.first<<" "<<p.second<<endl;
}