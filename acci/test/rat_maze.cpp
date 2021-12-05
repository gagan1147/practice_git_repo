#include<bits/stdc++.h>

using namespace std;

const int MAX = 4;
vector<string> s1;

void dfs(int i,int j, string s,int m[MAX][MAX],int n, vector<vector<int>> &visited){
    if(i<0 || j<0 || i>=MAX || j>= MAX || m[i][j] == 0 || visited[i][j] == 1){
        return;
    }
    if(i==MAX-1 && j== MAX-1){
        s1.push_back(s);
        return;
    }
    visited[i][j] = 1;
    dfs(i+1,j,s+'D',m,n,visited);
    dfs(i-1,j,s+'U',m,n,visited);
    dfs(i,j-1,s+'L',m,n,visited);
    dfs(i,j+1,s+'R',m,n,visited);
    visited[i][j] = 0;

}

int main(int argc, char const *argv[])
{
    s1.clear();
    vector<vector<int>> visited(MAX,vector<int>(MAX));
    string s = "";
    int m[MAX][MAX] = {{1,1,1,1},{1,1,0,1},{0,1,0,1},{1,1,1,1}};
    int n=4;
    dfs(0,0,s,m,n,visited);
    for(auto i= s1.begin();i!=s1.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}
