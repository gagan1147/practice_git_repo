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


void postorder(struct tree *curr){
    if(!curr){
        return;
    }
    
    postorder(curr->left);
    postorder(curr->right);
    cout<<curr->data<<" ";
}

void iterative_post_order(struct tree *curr){
    if(!curr){
        return;
    }
    stack<struct tree*> s1,s2;
    s1.push(curr);
    while(!s1.empty()){
        curr = s1.top();
        s1.pop();
        s2.push(curr);

        if(curr->left){
            s1.push(curr->left);
        }
        
        if(curr->right){
            s1.push(curr->right);
        }
    }

    while (!s2.empty()) {
        curr = s2.top();
        s2.pop();
        cout<<curr->data <<" ";
    }

}

int main(int argc, char const *argv[])
{


    struct tree *root = new tree(10);
    root->left = new tree(20);
    root->right = new tree(30);
    root->left->left = new tree(40);
    root->left->right = new tree(50);
    root->right->left = new tree(60);
    postorder(root);
    cout<<endl;
    iterative_post_order(root);
    cout<<endl;
    return 0;
}
