/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)
            return head;
        ListNode *lastp=NULL,*thisp=head,*nextp=NULL,*temp=head->next;
        while(thisp&&thisp->next)
        {
            nextp=thisp->next;
            thisp->next=nextp->next;
            nextp->next=thisp;
            if(lastp)
                lastp->next=nextp;
            lastp=thisp;
            thisp=thisp->next;
        }
        return temp;
    }
};