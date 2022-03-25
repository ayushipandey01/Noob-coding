#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {4,7,8,2,5};

    int n=a.size();

    for(int i=1;i<n;i++){
        int temp = a[i];
        int j=i-1;
        while(j>=0 && a[j]> temp){
            a[j+1]=a[j];
            j--;
        }
    a[j+1] = temp;   
    }
    //     for(int k = j ;k>=0;k--){
    //         if(a[k] >= temp){
    //             a[k+1]=a[k];
    //             cout<<a[k];
    //         }         
    //     }
    // a[j+1] = temp;       
    // }

    cout<<"Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}