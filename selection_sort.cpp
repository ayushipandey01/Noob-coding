#include<bits/stdc++.h>
using namespace std;

void swap (vector<int> a,int l,int k){
    
}
int main(){
    vector<int> a ={5,6,3,2,4,7};
    int n = a.size();

    for(int i=0;i<n-1;i++){
        int mini = i ;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[mini])
                mini = j;
        }
    if( mini!=i){
        int temp=a[mini];
        a[mini]=a[i];
        a[i]=temp;
    }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}