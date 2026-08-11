#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode*temp=head;
        ListNode*prev=NULL;
        while(temp!=NULL){
            prev=temp;
            prev->next=prev->next->next;
            temp=temp->next;
        }
    }
};