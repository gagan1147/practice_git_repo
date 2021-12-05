#include<bits/stdc++.h>

using namespace std;




int main(int argc, char const *argv[]){
    
    vector<int> nums={1,3,5,6};
    int target = 0;
    auto x = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    cout<<x<<endl;
    return 0;
}
