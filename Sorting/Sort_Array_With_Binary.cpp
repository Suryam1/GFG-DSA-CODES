#include <bits/stdc++.h>
using namespace std;

void sortArray(int *a,int n){
    int i=-1;
    for(int j=0;j<n;j++){
        if(a[j]==0){
            i++;
            swap(a[i],a[j]);
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
    sortArray(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}