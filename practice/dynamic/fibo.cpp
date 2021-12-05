#include<iostream>

using namespace std;

int fibo(int n){
    if (n==0 || n==1){
        return n;
    }
    return fibo(n-1) + fibo(n-2); 
}


int *table;
int dp_fibo(int n){
    if (n==1||n==0){
        return n;
    }
    if(!table[n-1]){
        table[n-1] = dp_fibo(n-1);
    }
    if(!table[n-2]){
        table[n-2] = dp_fibo(n-2);
    }
    table[n] = table[n-1]+table[n-2];
    return table[n];
}



int main(int argc, char const *argv[])
{
    int n = 6;
    table = new int[6+1];
    for(int i=0;i<=n;i++){
        table[i] = NULL;
    }
    cout<<fibo(n)<<" ";
    cout<<dp_fibo(n);
    return 0;
}
