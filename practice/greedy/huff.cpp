#include<queue>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
    char data;
    int freq;
    node *left,*right;
    node(char x,int freq1,node *l=NULL,node *r = NULL){
        data = x;
        left = l;
        right = r;
        freq = freq1;
    }
};
struct compare
{
    bool operator()(node *left,node *right){
        return left->freq > right->freq;
    }
};

void printHcodes(node *root,string str){
    if(!root){
        return;
    }
    if(root->data != '$'){
        cout<<root->data<<" : "<<str<<endl;
    }
    printHcodes(root->left,str+"0");
    printHcodes(root->right,str+"1");

}
void createHcode(char arr[],int freq[],int V){
    priority_queue<node *,vector<node *>,compare> h;
    for(int i=0;i<V;i++){
        h.push(new node(arr[i],freq[i]));
    }
    while(h.size()>1){
        node *l = h.top();
        h.pop();
        node *r = h.top();
        h.pop();
        node *root = new node('$',l->freq+r->freq,l,r);
        h.push(root);
    }
    printHcodes(h.top(),"");

}


int main(int argc, char const *argv[])
{
    char arr[] = {'a','b','c','d'};
    int freq[] = { 30, 40, 80, 60 };
    createHcode(arr,freq,4);
    return 0;
}
