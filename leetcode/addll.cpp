#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x){
    val = x;
    next = NULL;
    }  
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *curr1 = l1;
    ListNode *curr2 = l2;
    ListNode *ans = NULL;
    ListNode *curr3 = ans;

    int carry=0;
    while(curr1 && curr2){
        int answer = curr1->val + curr2->val+carry;
        if(answer>=10){
            carry = 1;
            answer = answer%10;
        }
        else{
            carry = 0;
        }
        if(!curr3){
            curr3 = new ListNode(answer);
            ans = curr3;
        }
        else{
            curr3->next = new ListNode(answer);
            curr3 = curr3->next;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    while(curr1){
        int answer = curr1->val+carry;
        if(answer>=10){
            carry = 1;
            answer = answer%10;
        }
        else{
            carry = 0;
        }
        curr3->next = new ListNode(answer);
        curr1 = curr1->next; 
        curr3 = curr3->next;
    }
    while(curr2){
        int answer = curr2->val+carry;
        if(answer>=10){
            carry = 1;
            answer = answer%10;
        }
        else{
            carry = 0;
        }
        curr3->next = new ListNode(answer);
        curr2 = curr2->next; 
        curr3 = curr3->next;
    }
    if(carry){
        curr3->next = new ListNode(carry);
    }
    return ans;
}
int main(int argc, char const *argv[]){
    

    ListNode* l1;
    ListNode* l2;
    ListNode* l3;
    l1 = new ListNode(9);
    l1->next = new ListNode(9);
    l1->next->next = new ListNode(9);
    l1->next->next->next = new ListNode(9);
    l1->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next = new ListNode(9);
    l1->next->next->next->next->next->next = new ListNode(9);
    l2 = new ListNode(9);
    l2->next = new ListNode(9);
    l2->next->next = new ListNode(9);
    l2->next->next->next = new ListNode(9);
    // l2->next->next = new ListNode(4);

    l3 = addTwoNumbers(l1,l2);
    while(l3){
        cout<<l3->val<<" ";
        l3 = l3->next;
    }
    cout<<endl;
    return 0;
}
