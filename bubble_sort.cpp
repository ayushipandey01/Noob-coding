#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = { 4,8,1,3,6,9,5};
    int n=a.size();
    bool f = false;
    // cout<<"Unsorted array :"<<" ";
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j < n-i-1;j++){
            if(a[j] > a[j+1]){
                f = true ;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if(!f){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            break;
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
    }
    // cout<<endl;
    cout<<"Sorted array :"<<" ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}