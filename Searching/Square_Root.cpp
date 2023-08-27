#include <bits/stdc++.h>
using namespace std;

int squareRoot(int x){
    int low=0,high=x,res;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=x){
            res=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;
}

int main(){
    int x;
    cin>>x;
    cout<<squareRoot(x)<<endl;
}