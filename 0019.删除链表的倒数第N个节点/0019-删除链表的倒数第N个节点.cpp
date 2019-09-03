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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
            return NULL;
        ListNode* firp=head,*secp=NULL,*lastp=NULL;
        int count=0;
        while(firp!=NULL)
        {
            count++;
            firp=firp->next;
            if(count>n)
            {
                if(count==n+1)
                    lastp=secp;
                else
                    lastp=lastp->next;
                secp=secp->next;  
            }
            else if(count==n)
                secp=head; 
        }
        if(lastp==NULL)
            return head->next;
        lastp->next=secp->next;
        return head;
    }
};