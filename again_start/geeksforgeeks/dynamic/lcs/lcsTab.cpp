#include<bits/stdc++.h>

using namespace std;



int solve(string s1,string s2,int m,int n){

    int table[m+1][n+1];
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j== 0){
                table[i][j] = 0;
            }
            else{
                if(s1[i-1] == s2[j-1])
                    table[i][j] = 1 + table[i-1][j-1];
                else{
                    table[i][j] = max(table[i-1][j],table[i][j-1]);
                }
            }
        }
    }
    return table[m][n];
}




int main(int argc, char const *argv[]){
    

    string s1 = "ABCDGH";
    string s2 = "AEDFHR";
    int m = s1.length();
    int n = s2.length();
    
    cout<<solve(s1,s2,m,n)<<endl;
    return 0;
}