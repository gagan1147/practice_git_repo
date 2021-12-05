#include<iostream>

using namespace std;


int solve(int n){
    if(n==0||n==1) 
        return 1;
    if(n==2){
        return 2;
    }
    else{
        return solve(n-3)+solve(n-2)+solve(n-1);
    }
}




int main(){
    int step_size = 4;
    cout<<solve(step_size);
}