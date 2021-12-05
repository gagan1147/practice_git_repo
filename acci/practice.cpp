#include<bits/stdc++.h>

using namespace std;




// int lengthOfLongestSubstring(string s) {
//     unordered_set<char> set1;
    
//     int n = s.length(),ans = 0;
//     int ptr1 = 0,ptr2 = 0;
//     while(ptr1<n){
//         if(ptr2>n){
//             ans = max(ans,ptr2-ptr1-1);
//             break;
//         }
//         if(set1.count(s[ptr2]) == 0){
//             set1.insert(s[ptr2]);
//             ptr2++;
//         }
//         else{
//             ans = max(ans,ptr2-ptr1);
//             ptr1++;
//             ptr2 = ptr1;
//             set1.clear();
//         }
//     }
//     return ans;
// }
// int main(int argc, char const *argv[]){
    
//     string s = "au";
//     cout<<lengthOfLongestSubstring(s)<<endl;
//     return 0;
// }
bool prime_more_efficient(int num){
    if(num ==1){
        return false;
    }
    if(num == 2 || num ==3){
        return true;
    }
    if(num%2==0 || num%3==0){
        return false;
    }
    for(int i=5;i*i<=num;i=i+6){
        if(num%i==0 || num%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[]){
    vector<int> input;
    vector<int> output;
    
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        int data;
        cin>>data;
        input.push_back(data);
    }
    for(int i=0;i<N-K+1;i++){
        int answer = 0;
        for(int j=i;j<i+K;j++){
            if(prime_more_efficient(input[j])){
                answer = input[j];
                break;
            }
        }
        output.push_back(answer);
    }
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    
}