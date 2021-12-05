#include<iostream>

using namespace std;


int lcs(char str1[],char str2[],int m,int n){
    if (m==0||n==0){
        return 0;
    }
    if(str1[m-1] == str2[n-1]){
        return 1+lcs(str1,str2,m-1,n-1);
    }
    else{
        return max(lcs(str1,str2,m-1,n),lcs(str1,str2,m,n-1));
    }
}

int dp_lcs(char str1[],char str2[],int m,int n){
    int table[m+1][n+1];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if (i == 0||j==0){
                table[i][j] = 0;
            }
            else if(str1[i-1] == str2[j-1]){
                table[i][j] = 1+ table[i-1][j-1];
            }
            else{
                table[i][j] = max(table[i-1][j],table[i][j-1]);
            }
        }
    }
    return table[m][n];
}




int main(){
    char str1[] = {"ABABAB"};
    char str2[] = {"BABA"};

    cout<<lcs(str1,str2,6,4)<<" ";
    cout<<dp_lcs(str1,str2,6,4);
}



