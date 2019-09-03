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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=l1;
        while(true)
        {    
            int sum=l1->val+l2->val;
            l1->val=sum%10; 
            if(l1->next!=NULL&&l2->next!=NULL&&sum>=10)
            {
                l1->next->val+=1;
            }        
            else if(l1->next==NULL||l2->next==NULL)
            {
                if(l2->next!=NULL)
                    l1->next=l2->next;
                while(sum>=10)
                {
                     if(l1->next==NULL)
                    {
                        ListNode *last=new ListNode(1);
                        l1->next=last;
                    }
                    else l1->next->val+=1;
                    l1->val=sum%10;
                    l1=l1->next;
                    sum=l1->val;
                }
                break;
                
            }
            l1=l1->next;
            l2=l2->next;
        }
        return head;
        
    }
};