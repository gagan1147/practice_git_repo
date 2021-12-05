#include<bits/stdc++.h>

using namespace std;

int gcd_efficient(int a,int b){
    if(b==0){
        return a;
    }
    return gcd_efficient(b,a%b);
}


int main(int argc, char const *argv[])
{
    cout<<gcd_efficient(10,15);
    cout<<endl;
    return 0;
}

