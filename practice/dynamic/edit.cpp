#include<iostream>

using namespace std;

int edit(char str1[],char str2[],int m,int n){
    if(m==0){
        return n;
    }
    if(n==0){
        return m;
    }
    if(str1[m-1] == str2[n-1]){
        return edit(str1,str2,m-1,n-1);
    }
    else{
        return 1+min(edit(str1,str2,m-1,n-1),min(edit(str1,str2,m,n-1),edit(str1,str2,m-1,n)));
    }
}

int dp_edit(char str1[],char str2[],int m,int n){

    int table[m+1][n+1];
    for(int i=0;i<=m;i++){
        table[i][0] = i;
    }
    
    for(int i=0;i<=n;i++){
        table[0][i] = i;
    }


    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(str1[i-1] == str2[j-1]){
            table[i][j] = table[i-1][j-1];
            }
            else{
                table[i][j] = 1 + min(table[i-1][j-1],min(table[i-1][j],table[i][j-1]));
            }
        }
    }
    return table[m][n];
}


int main(int argc, char const *argv[])
{
    

    char str1[] = {"CAT"};
    char str2[] = {"CUT"};
    cout<<edit(str1,str2,3,3);
    cout<<dp_edit(str1,str2,3,3);
    return 0;
}
