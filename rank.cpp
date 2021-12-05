#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,k,count=0;
    
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i] =x; 
    }
    int temp = arr[k-1];

    for(int i=0;i<n;i++){
        if (arr[i]>=temp && arr[i]>0)
            count ++;
    }
    cout<<count<<endl;
    return 0;
}



