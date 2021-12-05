#include<bits/stdc++.h>
using namespace std;

const int N = 5;
bool allDistinct(int x){
    int freq[10];
    while(x>0){
        freq[x%10]++;
        x/=10;
    }
    for(int i=0;i<10;i++){
        if(freq[i]>=2)
            return false;
    }
    return true;
}
int main(int argc, char const *argv[]){
    int year;
    cin>>year;
    int ans = year+1;
    while(!allDistinct(ans)){
        ans++;
    }
    cout<<ans;

    return 0;
}
