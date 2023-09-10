#include <bits/stdc++.h>
using namespace std;

int f2(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[m+1+i];
    }
    int res=0,i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(left[i]<right[j]){
            a[k]=left[i];
            i++;
        }
        else{
            a[k]=right[j];
            j++;
            res=res+(n1-i);
            // res++;
            
        }
        k++;
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
    return res;
}

int f1(int a[],int l,int r){
    int res=0;
    if(r>l){
        int m=(l+r)/2;
        res+=f1(a,l,m);
        res+=f1(a,m+1,r);
        res+=f2(a,l,m,r);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int  a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<f1(a,0,n-1)<<endl;
}