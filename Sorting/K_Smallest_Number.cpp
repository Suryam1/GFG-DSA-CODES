#include <bits/stdc++.h>
using namespace std;

int lumeroPartition(int a[],int l,int h){
    int pivot=a[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return (i+1);
}

int kSmallest(int *a,int low,int high,int k){
    while(low<=high){
        int pivot=lumeroPartition(a,low,high);
        if(pivot==k-1){
            return a[pivot];
        }
        else if(pivot>k-1){
            high=pivot-1;
        }
        else{
            low=pivot+1;
        }
    }
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
    cout<<kSmallest(a,0,n-1,k)<<endl;
}