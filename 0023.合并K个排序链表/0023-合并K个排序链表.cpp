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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l2beforel1=NULL;
        ListNode* templ1=l1;
        ListNode* templ2=l2;
        if(!l1)
            return l2;
        while(l2!=NULL&&l2->val<l1->val)
        {
            l2beforel1=l2;
            l2=l2->next;
        }
        if(l2beforel1)
        {
            l2beforel1->next=l1;
            templ1=templ2;
        }
        while(l1!=NULL)
        {
            if(!l2)
                return templ1; 
            else if(l1->next==NULL)
            {
                l1->next=l2;                   
                return templ1;
            }  
            else if(l2->val>=l1->val&&l2->val<l1->next->val)
            {
                ListNode* l2temp=l2;
                l2=l2->next;
                l2temp->next=l1->next;
                l1->next=l2temp;       
            }
            l1=l1->next;          
        }
        return templ1;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
            return NULL;
        ListNode* l1=lists[0];
        auto itp=lists.begin();
        itp++;
        for(itp;itp!=lists.end();itp++)
        {
            l1=mergeTwoLists(l1,*itp);
        }
        return l1;
    }
};