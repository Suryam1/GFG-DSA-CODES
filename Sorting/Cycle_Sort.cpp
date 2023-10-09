#include <bits/stdc++.h>
using namespace std;

void f(int a[],int n){
    for(int cs=0;cs<n-1;cs++){
        int item=a[cs];
        int pos=cs;
        for(int i=cs+1;i<n;i++){
            if(a[i]<item){
                pos++;
            }
        }
        swap(item,a[pos]);
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1;i<n;i++){
                if(a[i]<item){
                    pos++;
                }
            }
            swap(item,a[pos]);
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