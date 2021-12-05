#include<bits/stdc++.h>
using namespace std;

int solve(string stringA,string stringB){
    int i=0,len= stringA.length();
    transform(stringA.begin(), stringA.end(), stringA.begin(), ::tolower);
    transform(stringB.begin(), stringB.end(), stringB.begin(), ::tolower);
    while(i<len){
        if (stringA[i] > stringB[i]){
            return 1;
        }
        else if (stringA[i] < stringB[i]){
            return -1;
        }
        else{
            i += 1;
        }
    if (i == len)
        return 0; 
    
    }
}

int main()
{
    string stringA,stringB;
    cin>>stringA;
    cin>>stringB;

    cout<<solve(stringA,stringB)<<endl;
    int arr[] = {1,2,3,4,5};
    unordered_set<int> set1(arr,arr+5);
    set1.erase(2);
    for(int x:set1){
        cout<<x<<" ";
    }
return 0;
}