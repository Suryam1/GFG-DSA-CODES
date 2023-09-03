#include <bits/stdc++.h>
using namespace std;

bool f(int a[],int n, int x){
    for(int i=0;i<n;i++){
        int temp=x-a[i];
        int l=i+1,h=n-1;
        while(l<=h){
            if(a[l]+a[h]==temp){
                return true;
            }
            else if(a[l]+a[h]<temp){
                l++;
            }
            else{
                h--;
            }
        }
    }
    return false;
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