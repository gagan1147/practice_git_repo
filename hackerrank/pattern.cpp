#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int len = 2*n - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min1 = min(i,j);
            min1 = min(min1,len-i-1);
            min1 = min(min1,len-j-1);
            cout<<n-min1<<" ";

        }
        cout<<"\n";

    }
    return 0;
}
