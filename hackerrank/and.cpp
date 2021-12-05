#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    
    int testCase;
    cin>>testCase;
    vector<long> res;
    for(int loop1=0;loop1<testCase;loop1++ ){
        int start,end;
        long ans;
        cin>>start>>end;
        ans = start & ~((1 << (int)log2(start^end)) - 1);
        res.push_back(ans);
    }
    for(long x:res){
        cout<<x<<endl;
    }
    return 0;
}
