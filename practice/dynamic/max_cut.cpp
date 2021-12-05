#include<iostream>

using namespace std;


int max_cut(int n,int a,int b,int c){
    if (n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    else{
        int res = max(max_cut(n-a,a,b,c),max(max_cut(n-b,a,b,c),max_cut(n-c,a,b,c)));
        if(res == -1){
            return -1;
        }
        return res+1;
    }
}

int dp_max_cut(int n,int a,int b,int c){
    int table[n+1];
    table[0] = 0;
    for(int i=1;i<=n;i++){
        table[i] = -1;
        if (i-a>=0){
            table[i] = max(table[i],table[i-a]);
        }
        if (i-b>=0){
            table[i] = max(table[i],table[i-b]);
        }
        if (i-c>=0){
            table[i] = max(table[i],table[i-c]);
        }
        if(table[i] != -1){
            table[i]++;
        }
    }
    return table[n];
}

int main(){


    int n=5,a=1,b=2,c=3;
    cout<<max_cut(n,a,b,c);
    cout<<dp_max_cut(n,a,b,c);
}