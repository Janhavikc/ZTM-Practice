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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode* hare=head; 
        ListNode* tortoise=head;
        while(1){
            tortoise=tortoise->next;
            hare=hare->next;
            if(hare==NULL || hare->next==NULL){
                return NULL;
            }else{
                hare=hare->next;
            }
            if(tortoise==hare) break;
            
        }
        ListNode* p1=head; 
        ListNode* p2=tortoise;
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
        }

        return p1;


    }
};
