#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[]){
    
    int n = 20;
    int memo[n+1];
    memo[0] = 0;
    memo[1] = 1;
    for(int i=2;i<=n;i++){
        memo[i] = memo[i-1] + memo[i-2];
    }
    
    cout<<memo[n]<<endl;
    return 0;
}
