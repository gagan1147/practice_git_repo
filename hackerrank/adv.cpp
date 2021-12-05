#include<bits/stdc++.h>
using namespace std;

// int getMax(vector<int> arr,int start,int end){
//     int res = 0;
//     for(int i=start;i<=end;i++){
//         res = max(arr[i],res);
//     }
//     return res;
// }

long solve(vector<int> arr) {
    int n = arr.size();
    int res =0;
    int getMax_arr[n];
    getMax_arr[0] = arr[0];
    for(int i=1;i<n;i++){
        getMax_arr[i] = max(arr[i],getMax_arr[i-1]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int mx = getMax_arr[j];
            if(arr[i]*arr[j] <= mx){
                res++;
            }
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,1,2,4,2};
    int n = arr.size();
    int getMax_arr[n];
    getMax_arr[0] = arr[0];
    for(int i=1;i<n;i++){
        getMax_arr[i] = max(arr[i],getMax_arr[i-1]);
    }
    for(int x:getMax_arr){
        cout<<x<<" ";
    }
    cout<<endl;
    //cout<<getMax(arr,0,n-1);
    cout<<solve(arr)<<endl;
    return 0;
}
