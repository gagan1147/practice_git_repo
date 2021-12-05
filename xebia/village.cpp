

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    unordered_set<int> set1;
    
    int profit[] = {1,2,3,4,9,8};
    int n = 6;
    int dp[n];
    dp[0] = profit[0];
    int mx = 0;
    for(int i=1;i<n;i++){
        int localmax = profit[i];
        for(int j=i-1;j>-1;j--){
            if(profit[i]%profit[j] == 0){
                localmax = max(localmax,profit[i]+dp[j]);
            }
            dp[i] = localmax;
        }
        mx = max(mx,dp[i]);
    }
    cout<<mx<<endl;
    return 0;
}
