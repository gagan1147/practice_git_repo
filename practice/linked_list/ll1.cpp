#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node *reverse(node *curr){
    node *prev = NULL;
    while (curr)
    {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    
}
struct node *add(struct node *head,int data,bool front=false){

    if(!head){
        head = new node(data);
        return head;
    }
    node *temp = new node(data);
    if (front){
        temp->next =head;
        head = temp;
        return head;
    }

    else{
        node *curr = head;
        while(curr->next){
            curr = curr->next;
        }
        curr->next = temp;
    }
    return head;
}

void printList(node *head){
    while(head){
        cout<<head->data<<endl;
        head = head->next;
    }
}
node *middle(node *head){
    node *slow_ptr = head;
    node *fast_ptr = head;
    while (fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
    }
    return slow_ptr;

}


bool pallindrome_check(node *head){
    node *middle1 = middle(head);
    middle1 = reverse(middle1->next);
    node *start1 = head;
    node *start2 = middle1;
    while (start2 && start1)
    {
        if (start1->data != start2->data){
            return false;
        }
        cout<<"start1 : "<<start1->data<<"start2 : "<<start2->data<<endl;
        start2 = start2->next;
        start1 = start1->next;
    }
    return true;

}

int main(){

    node *head = NULL;
    head = add(head,2);
    head = add(head,3);
    head = add(head,4);
    head = add(head,1,true);
    //head = add(head,0,true);
    head = add(head,5);
    head = add(head,4);
    head = add(head,3);
    head = add(head,2);
    head = add(head,1);
    //head = add(head,10);
    //printList(head);
    //head = reverse(head);
    //printList(head);
    cout<<"Middle : "<<middle(head)->data<<endl;
    cout<<" "<<pallindrome_check(head);
}