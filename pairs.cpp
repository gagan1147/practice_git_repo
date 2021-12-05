#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=10,b;
    b = (++a) + (++a) + (++a) - (a--);
    cout<<b;
    return 0;
}
