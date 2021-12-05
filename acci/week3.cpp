#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[]){
    
    // int alpha = 26;
    // char alpha_arr[26];
    unordered_map<char,int> map1;
    string s = "aaabbbb";
    for(long unsigned int i=0;i<s.length();i++){
        map1[s[i]]++;
    }
    int count_odd = 0;
    for(auto x:map1){
        cout<<x.first<<" : "<<x.second<<endl;
        if(x.second%2 == 1){
            count_odd++;
        }

        if(count_odd>1){
            cout<<"Not";
            break;
        }
    }



    return 0;
}
