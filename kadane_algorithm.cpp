#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a){
    int maxi=0;
    int cur=0;

    for(int i=0;i<a.size();i++){
        cur = cur + a[i];
        if(cur>maxi){
            maxi = cur;
        }
        if(cur<0){
            cur=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> a = {2,-2,5,6,-5,9,2};
    
    int ans = solve(a);
    cout<<"Maximum sum of sub array : "<<ans<<endl;
    return 0;
}