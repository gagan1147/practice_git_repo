#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct tree{
    int data;
    tree *left,*right;
    tree(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};



int max_level_left = 0;
int max_level_right = 0;



void inorder(tree *node){
    if(!node){
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}



void left_view(tree *node,int level){
    if(!node){
        return;
    }
    if(max_level_left<level){
        cout<<node->data<<" ";
        max_level_left = level;
    }
    left_view(node->left,level+1);
    left_view(node->right,level+1);
}

void right_view(tree *node,int level){
    if(!node){
        return;
    }
    if(max_level_right<level){
        cout<<node->data<<" ";
        max_level_right = level;
    }
    right_view(node->right,level+1);
    right_view(node->left,level+1);
}

void printKlevel(tree *root,int k){
    if(!root){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    printKlevel(root->left,k-1);
    printKlevel(root->right,k-1);

}

bool validBST(tree *root,int min1,int max1){
    if(!root){
        return true;
    }
    return root->data>min1 && root->data<max1 && validBST(root->left,min1,root->data) && validBST(root->right,root->data,max1);
}
int odd_even_diff(tree *root){
    if(!root){
        return 0;
    }
    queue<tree *> q1;
    q1.push(root);
    int odd_sum=0;
    int even_sum=0;
    int level = 0;
    while(!q1.empty()){
        level += 1;
        int size = q1.size();
        while(size>0){
            tree *temp = q1.front();
            q1.pop();
            if(level%2==0){
                even_sum += temp->data;
            }
            else{
                odd_sum += temp->data;
            }
            if(temp->left){
                q1.push(temp->left);
            }
            if(temp->right){
                q1.push(temp->right);
            }
           
            size -= 1;
        }
    }
    return odd_sum-even_sum;
}

void levelorder(tree *root){
    if(!root){
        return;
    }
    queue<tree *> q1;
    q1.push(root);
    while (!q1.empty())
    {
        tree *node  = q1.front();
        q1.pop();
        cout<<node->data<<" ";
        if (node->left){
            q1.push(node->left);
        }
        if(node->right){
            q1.push(node->right);
        }
    }
}

bool check_sum(tree *node){
    if(!node){
        return true;
    }
    return(node->data==(node->left->data+node->right->data)&&(check_sum(node->left))&&(check_sum(node->right)));
}

tree *prevv = NULL;


tree *bintoDll(tree *root){

    if(!root){
        return NULL;
    }
    tree *head = bintoDll(root->left);
    if(!prevv){
        head = root;
    }
    else{
        prevv->right = root;
        root->left = prevv;
    }
    prevv = root;
    bintoDll(root->right);
    return head;


}
bool same(tree *R1,tree *R2){
    if(!R1 && !R2){
        return true;
    }
    if((!R1 && R2 )||(R1 && !R2)){
        return false;
    }
    return same(R1->left,R2->left) && same(R1->right,R2->right);
}
tree *mirror(tree *root){
    if(!root){
        return NULL;
    }
    tree *temp = root->right;
    root->right = mirror(root->left);
    root->left = mirror(temp);
    return root;
}

int main(int argc, char const *argv[])
{

    tree *root = new tree(50);
    root->left = new tree(40);
    root->right = new tree(60);
    /*
    root->left->left = new tree(30);
    root->left->right = new tree(45);
    root->left->left->left = new tree(10);
    root->left->left->right = new tree(35);
    root->right->left = new tree(55);
    root->right->right = new tree(70);
    root->right->right->left = new tree(65);
    root->right->right->right = new tree(80);
    */
    inorder(root);
    cout<<endl;
    left_view(root,1);
    cout<<endl;
    right_view(root,1);
    cout<<endl;
    printKlevel(root,2);
    cout<<endl;
    cout<<validBST(root,INT8_MIN,INT8_MAX);
    cout<<endl;
    levelorder(root);
    cout<<endl;
    /*
    tree *dll = bintoDll(root);
    while (dll)
    {
        cout<<dll->data<<endl;
        dll= dll->right;
    }
    */
    cout<<check_sum(root);
    cout<<endl;
    cout<<odd_even_diff(root);
    cout<<endl;
    cout<<"Same : "<<same(root,root);
    cout<<endl;
    tree *mirror_root = mirror(root);
    inorder(mirror_root);
    
    cout<<endl;
    return 0;
}

