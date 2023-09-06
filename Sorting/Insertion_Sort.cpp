#include <bits/stdc++.h>
using namespace std;

void f(int a[],int n){
    for(int i=0;i<n;i++){
        int temp=a[i+1];
        for(int j=i;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                a[j+1]=temp;
                break;
            }
        }
        if(a[0]>temp){
            a[0]=temp;
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