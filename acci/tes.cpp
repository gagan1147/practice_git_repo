#include<bits/stdc++.h>

using namespace std;


int submission(vector<int> arr,int n,int index){
    if(index == n){
        return arr[index];
    }
    return arr[index] + submission(arr,n,index+1);
}



int main(int argc, char const *argv[])
{

    int test_case = 0;
    cin>>test_case;
    vector<int> ans;
    
    for(int i=0;i<test_case;i++){
        int size;
        cin>>size;
        vector<int> temp;
        temp.push_back(size);
        for(int j=0;j<size;j++){
            int num;
            cin>>num;
            temp.push_back(num);
        }
        int res = submission(temp,size,1);
        ans.push_back(res);
    }
    int i=1;
    for(auto x:ans){

        cout<<"Case "<<i++<<": "<<x<<endl;
    }
    return 0;
}
