#include <bits/stdc++.h>
using namespace std;

int f(int a[],int low,int high){
    int pivot = a[low];
    int i=low-1,j=high+1;
    while(true){
        do{
            i++;
        }while(a[i]<pivot)
        do{
            j--;
        }while(a[i]>pivot)
        if(i>=j){
            return j;
        }
        swap(a[i],a[j]);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<f(a,0,n-1)<<endl;
}