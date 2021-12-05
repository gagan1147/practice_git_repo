#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t1=0,t2 = 1,n=10;
    size_t table[n+1];
    table[0] = t1;
    table[1] = t2;
    for(int i=2;i<=n;i++){
        table[i] = (table[i-1]*table[i-1]) + table[i-2];
    }
    
    for(int i=0;i<=n;i++){
        cout<<table[i]<<" ";
    }
    cout<<endl;
    cout<<table[n];
    return 0;
}
