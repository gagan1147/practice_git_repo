#include<bits/stdc++.h>

using namespace std;

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
    tree(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
int maxLevel = 0;
void printRightView(struct tree *root,int level){
    if(!root){
        return;
    }
    if(maxLevel<level+1){
        maxLevel = level+1;
        cout<<root->data<<" ";
    }
    printRightView(root->right,level+1);
    printRightView(root->left,level+1);
}

int main(int argc, char const *argv[]){

    struct tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);

    root->left->left = new tree(4);
    root->left->right = new tree(5);
    //root->right->left = new tree(6);
    //root->right->right = new tree(7);
    root->left->right->left = new tree(8);
    printRightView(root,0);
    return 0;
}
